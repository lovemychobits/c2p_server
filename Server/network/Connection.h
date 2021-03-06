#ifndef NETWORK_CONNECTION_H
#define NETWORK_CONNECTION_H

#include "header.h"
#include "IMsgParser.h"
#include "IConnection.h"

/*
	wrapper the ASIO connection
*/
namespace cpnet
{
	class MessageThread;
	class Connection : public IConnection, public boost::enable_shared_from_this<Connection>
	{
	public:
		friend class MessageThread;
		typedef boost::shared_ptr<Connection> pointer;

	public:
		static pointer Create(BoostIoService& ioService, BoostStrand& strand, size_t nHeadLength, size_t nBodyLength)
		{
			return pointer(boost::shared_ptr<Connection>(new Connection(ioService, strand, nHeadLength, nBodyLength)));
		}

		~Connection()
		{
			try 
			{
				m_sock.close();					// 关闭套接字对象
			}
			catch(boost::system::system_error& err)
			{
				ERROR_NET("reve message header exception, error=[" << err.what() << "]");
			}
			if (m_pBuff)
			{
				delete[] m_pBuff;
			}
		}

		void Start();

		virtual bool IsConnected();
		virtual const char* GetRemoteIp();
		virtual uint32_t GetRemotePort();
		void SetConnected(bool bFlag);

		void SetMsgParser(IMsgParser* pMsgParser);
		void SetMsgHandler(IMsgHandler* pMsgHandler);
		void SetDisconnCallback(const disConnFuncCallBack& disConnCallback);

		BoostSocket& socket();
		void GetRemoteInfo();
		void ShutDown();
		void SendMsg(const void* pData, uint32_t uLen);
	private:
		Connection(BoostIoService& ioService, BoostStrand& strand, size_t nHeadLength, size_t nBufLength) : 
			m_pStrand(NULL), m_sock(ioService), m_bConnect(false), m_pMsgParser(NULL), m_nHeadLength(nHeadLength), m_nBufLength(nBufLength), m_uRemotePort(0), m_bGetRemoteInfo(false), m_nHasTransffered(0), 
			m_bForClientSession(false)
		{
			m_pStrand = &strand;
			// to use memory pool later
			m_pBuff = new char[m_nBufLength];
			if (!m_pBuff)
			{
				FATAL_NET("cannot malloc any more!!!");
				exit(1);				// 程序退出
			}
		}

		// the async_write call back
		void HandleSend(const boost::system::error_code& error, std::size_t bytes_transferred);
		void HandleRead(const BoostErrCode& errCode, size_t nBytesTranfered);
		void StartRead();

		// 检查错误码，是否有错误
		bool CheckErrCode(const BoostErrCode& errCode);

	private:
		BoostStrand* m_pStrand;
		BoostSocket m_sock;								// the connection socket
		bool m_bConnect;								// 是否已经连接
		char* m_pBuff;
		
		IMsgParser* m_pMsgParser;
		IMsgHandler* m_pMsgHandler;
		deque<string> m_msgQueue;

		size_t m_nHeadLength;							// 消息头的大小
		size_t m_nBufLength;							// 接收缓冲区的大小
		size_t m_nHasTransffered;

		string m_strRemoteIp;
		uint32_t m_uRemotePort;
		bool m_bGetRemoteInfo;

		bool m_bForClientSession;						// 作为客户端的连接
		disConnFuncCallBack disconnCallback;			// 断开连接的回调，只有m_bForClientSession为true的时候才使用

		boost::mutex m_mutex;
	};
}
#endif 