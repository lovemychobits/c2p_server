// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "ServerCmd.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace scmd {

namespace {

const ::google::protobuf::Descriptor* RequestStopServer_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RequestStopServer_reflection_ = NULL;
const ::google::protobuf::Descriptor* RequestReloadConf_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RequestReloadConf_reflection_ = NULL;
const ::google::protobuf::Descriptor* ResponseReloadConf_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ResponseReloadConf_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_ServerCmd_2eproto() {
  protobuf_AddDesc_ServerCmd_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "ServerCmd.proto");
  GOOGLE_CHECK(file != NULL);
  RequestStopServer_descriptor_ = file->message_type(0);
  static const int RequestStopServer_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RequestStopServer, serverid_),
  };
  RequestStopServer_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      RequestStopServer_descriptor_,
      RequestStopServer::default_instance_,
      RequestStopServer_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RequestStopServer, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RequestStopServer, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(RequestStopServer));
  RequestReloadConf_descriptor_ = file->message_type(1);
  static const int RequestReloadConf_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RequestReloadConf, serverid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RequestReloadConf, conffile_),
  };
  RequestReloadConf_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      RequestReloadConf_descriptor_,
      RequestReloadConf::default_instance_,
      RequestReloadConf_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RequestReloadConf, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RequestReloadConf, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(RequestReloadConf));
  ResponseReloadConf_descriptor_ = file->message_type(2);
  static const int ResponseReloadConf_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ResponseReloadConf, errcode_),
  };
  ResponseReloadConf_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      ResponseReloadConf_descriptor_,
      ResponseReloadConf::default_instance_,
      ResponseReloadConf_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ResponseReloadConf, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ResponseReloadConf, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(ResponseReloadConf));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_ServerCmd_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    RequestStopServer_descriptor_, &RequestStopServer::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    RequestReloadConf_descriptor_, &RequestReloadConf::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    ResponseReloadConf_descriptor_, &ResponseReloadConf::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_ServerCmd_2eproto() {
  delete RequestStopServer::default_instance_;
  delete RequestStopServer_reflection_;
  delete RequestReloadConf::default_instance_;
  delete RequestReloadConf_reflection_;
  delete ResponseReloadConf::default_instance_;
  delete ResponseReloadConf_reflection_;
}

void protobuf_AddDesc_ServerCmd_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\017ServerCmd.proto\022\004scmd\"%\n\021RequestStopSe"
    "rver\022\020\n\010serverId\030\001 \001(\r\"7\n\021RequestReloadC"
    "onf\022\020\n\010serverId\030\001 \001(\r\022\020\n\010confFile\030\002 \001(\t\""
    "%\n\022ResponseReloadConf\022\017\n\007errCode\030\001 \001(\r", 158);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "ServerCmd.proto", &protobuf_RegisterTypes);
  RequestStopServer::default_instance_ = new RequestStopServer();
  RequestReloadConf::default_instance_ = new RequestReloadConf();
  ResponseReloadConf::default_instance_ = new ResponseReloadConf();
  RequestStopServer::default_instance_->InitAsDefaultInstance();
  RequestReloadConf::default_instance_->InitAsDefaultInstance();
  ResponseReloadConf::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_ServerCmd_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_ServerCmd_2eproto {
  StaticDescriptorInitializer_ServerCmd_2eproto() {
    protobuf_AddDesc_ServerCmd_2eproto();
  }
} static_descriptor_initializer_ServerCmd_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int RequestStopServer::kServerIdFieldNumber;
#endif  // !_MSC_VER

RequestStopServer::RequestStopServer()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void RequestStopServer::InitAsDefaultInstance() {
}

RequestStopServer::RequestStopServer(const RequestStopServer& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void RequestStopServer::SharedCtor() {
  _cached_size_ = 0;
  serverid_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RequestStopServer::~RequestStopServer() {
  SharedDtor();
}

void RequestStopServer::SharedDtor() {
  if (this != default_instance_) {
  }
}

void RequestStopServer::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RequestStopServer::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RequestStopServer_descriptor_;
}

const RequestStopServer& RequestStopServer::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_ServerCmd_2eproto();  return *default_instance_;
}

RequestStopServer* RequestStopServer::default_instance_ = NULL;

RequestStopServer* RequestStopServer::New() const {
  return new RequestStopServer;
}

void RequestStopServer::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    serverid_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool RequestStopServer::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional uint32 serverId = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &serverid_)));
          set_has_serverid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void RequestStopServer::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional uint32 serverId = 1;
  if (has_serverid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->serverid(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* RequestStopServer::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional uint32 serverId = 1;
  if (has_serverid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->serverid(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int RequestStopServer::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional uint32 serverId = 1;
    if (has_serverid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->serverid());
    }
    
  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void RequestStopServer::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const RequestStopServer* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const RequestStopServer*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void RequestStopServer::MergeFrom(const RequestStopServer& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_serverid()) {
      set_serverid(from.serverid());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void RequestStopServer::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RequestStopServer::CopyFrom(const RequestStopServer& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RequestStopServer::IsInitialized() const {
  
  return true;
}

void RequestStopServer::Swap(RequestStopServer* other) {
  if (other != this) {
    std::swap(serverid_, other->serverid_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata RequestStopServer::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RequestStopServer_descriptor_;
  metadata.reflection = RequestStopServer_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int RequestReloadConf::kServerIdFieldNumber;
const int RequestReloadConf::kConfFileFieldNumber;
#endif  // !_MSC_VER

RequestReloadConf::RequestReloadConf()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void RequestReloadConf::InitAsDefaultInstance() {
}

RequestReloadConf::RequestReloadConf(const RequestReloadConf& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void RequestReloadConf::SharedCtor() {
  _cached_size_ = 0;
  serverid_ = 0u;
  conffile_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RequestReloadConf::~RequestReloadConf() {
  SharedDtor();
}

void RequestReloadConf::SharedDtor() {
  if (conffile_ != &::google::protobuf::internal::kEmptyString) {
    delete conffile_;
  }
  if (this != default_instance_) {
  }
}

void RequestReloadConf::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RequestReloadConf::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RequestReloadConf_descriptor_;
}

const RequestReloadConf& RequestReloadConf::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_ServerCmd_2eproto();  return *default_instance_;
}

RequestReloadConf* RequestReloadConf::default_instance_ = NULL;

RequestReloadConf* RequestReloadConf::New() const {
  return new RequestReloadConf;
}

void RequestReloadConf::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    serverid_ = 0u;
    if (has_conffile()) {
      if (conffile_ != &::google::protobuf::internal::kEmptyString) {
        conffile_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool RequestReloadConf::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional uint32 serverId = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &serverid_)));
          set_has_serverid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_confFile;
        break;
      }
      
      // optional string confFile = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_confFile:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_conffile()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->conffile().data(), this->conffile().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void RequestReloadConf::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional uint32 serverId = 1;
  if (has_serverid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->serverid(), output);
  }
  
  // optional string confFile = 2;
  if (has_conffile()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->conffile().data(), this->conffile().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->conffile(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* RequestReloadConf::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional uint32 serverId = 1;
  if (has_serverid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->serverid(), target);
  }
  
  // optional string confFile = 2;
  if (has_conffile()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->conffile().data(), this->conffile().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->conffile(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int RequestReloadConf::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional uint32 serverId = 1;
    if (has_serverid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->serverid());
    }
    
    // optional string confFile = 2;
    if (has_conffile()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->conffile());
    }
    
  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void RequestReloadConf::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const RequestReloadConf* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const RequestReloadConf*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void RequestReloadConf::MergeFrom(const RequestReloadConf& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_serverid()) {
      set_serverid(from.serverid());
    }
    if (from.has_conffile()) {
      set_conffile(from.conffile());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void RequestReloadConf::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RequestReloadConf::CopyFrom(const RequestReloadConf& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RequestReloadConf::IsInitialized() const {
  
  return true;
}

void RequestReloadConf::Swap(RequestReloadConf* other) {
  if (other != this) {
    std::swap(serverid_, other->serverid_);
    std::swap(conffile_, other->conffile_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata RequestReloadConf::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RequestReloadConf_descriptor_;
  metadata.reflection = RequestReloadConf_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int ResponseReloadConf::kErrCodeFieldNumber;
#endif  // !_MSC_VER

ResponseReloadConf::ResponseReloadConf()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void ResponseReloadConf::InitAsDefaultInstance() {
}

ResponseReloadConf::ResponseReloadConf(const ResponseReloadConf& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void ResponseReloadConf::SharedCtor() {
  _cached_size_ = 0;
  errcode_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ResponseReloadConf::~ResponseReloadConf() {
  SharedDtor();
}

void ResponseReloadConf::SharedDtor() {
  if (this != default_instance_) {
  }
}

void ResponseReloadConf::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ResponseReloadConf::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ResponseReloadConf_descriptor_;
}

const ResponseReloadConf& ResponseReloadConf::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_ServerCmd_2eproto();  return *default_instance_;
}

ResponseReloadConf* ResponseReloadConf::default_instance_ = NULL;

ResponseReloadConf* ResponseReloadConf::New() const {
  return new ResponseReloadConf;
}

void ResponseReloadConf::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    errcode_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool ResponseReloadConf::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional uint32 errCode = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &errcode_)));
          set_has_errcode();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void ResponseReloadConf::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional uint32 errCode = 1;
  if (has_errcode()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->errcode(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* ResponseReloadConf::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional uint32 errCode = 1;
  if (has_errcode()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->errcode(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int ResponseReloadConf::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional uint32 errCode = 1;
    if (has_errcode()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->errcode());
    }
    
  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ResponseReloadConf::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const ResponseReloadConf* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const ResponseReloadConf*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ResponseReloadConf::MergeFrom(const ResponseReloadConf& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_errcode()) {
      set_errcode(from.errcode());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void ResponseReloadConf::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ResponseReloadConf::CopyFrom(const ResponseReloadConf& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ResponseReloadConf::IsInitialized() const {
  
  return true;
}

void ResponseReloadConf::Swap(ResponseReloadConf* other) {
  if (other != this) {
    std::swap(errcode_, other->errcode_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata ResponseReloadConf::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ResponseReloadConf_descriptor_;
  metadata.reflection = ResponseReloadConf_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace scmd

// @@protoc_insertion_point(global_scope)
