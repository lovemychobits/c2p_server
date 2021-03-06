#ifndef LOBBSERVER_LOBBYSERVER_H
#define LOBBSERVER_LOBBYSERVER_H

#include "header.h"
#include "ServerConfig.h"
#include "../network/INetCluster.h"
using namespace cpnet;

class LobbyServer
{
public:
	LobbyServer()
	{

	}

	bool Init(const char* pConfPath);

	void Start()
	{
		m_pNetCluster->Run();
	}

private:
	bool InitLog4cpp();
	bool InitServerConf(const char* pConfPath);
	bool InitServerApp();
	bool InitPlayerDataMng();

private:
	IServerSession* m_pServerSession;
	IServerSession* m_pClientSession;
	INetCluster* m_pNetCluster;
};

#endif