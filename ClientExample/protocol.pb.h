// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protocol.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protocol_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_protocol_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3010000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3010000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_protocol_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protocol_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_protocol_2eproto;
namespace chat {
class Client;
class ClientDefaultTypeInternal;
extern ClientDefaultTypeInternal _Client_default_instance_;
class Clients;
class ClientsDefaultTypeInternal;
extern ClientsDefaultTypeInternal _Clients_default_instance_;
}  // namespace chat
PROTOBUF_NAMESPACE_OPEN
template<> ::chat::Client* Arena::CreateMaybeMessage<::chat::Client>(Arena*);
template<> ::chat::Clients* Arena::CreateMaybeMessage<::chat::Clients>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace chat {

enum Client_MessageType : int {
  Client_MessageType_JOIN_ROOM = 0,
  Client_MessageType_SEND_MESSAGE = 1,
  Client_MessageType_LEAVE_ROOM = 2
};
bool Client_MessageType_IsValid(int value);
constexpr Client_MessageType Client_MessageType_MessageType_MIN = Client_MessageType_JOIN_ROOM;
constexpr Client_MessageType Client_MessageType_MessageType_MAX = Client_MessageType_LEAVE_ROOM;
constexpr int Client_MessageType_MessageType_ARRAYSIZE = Client_MessageType_MessageType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Client_MessageType_descriptor();
template<typename T>
inline const std::string& Client_MessageType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, Client_MessageType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function Client_MessageType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    Client_MessageType_descriptor(), enum_t_value);
}
inline bool Client_MessageType_Parse(
    const std::string& name, Client_MessageType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<Client_MessageType>(
    Client_MessageType_descriptor(), name, value);
}
// ===================================================================

class Client :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:chat.Client) */ {
 public:
  Client();
  virtual ~Client();

  Client(const Client& from);
  Client(Client&& from) noexcept
    : Client() {
    *this = ::std::move(from);
  }

  inline Client& operator=(const Client& from) {
    CopyFrom(from);
    return *this;
  }
  inline Client& operator=(Client&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Client& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Client* internal_default_instance() {
    return reinterpret_cast<const Client*>(
               &_Client_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Client& a, Client& b) {
    a.Swap(&b);
  }
  inline void Swap(Client* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Client* New() const final {
    return CreateMaybeMessage<Client>(nullptr);
  }

  Client* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Client>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Client& from);
  void MergeFrom(const Client& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Client* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "chat.Client";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_protocol_2eproto);
    return ::descriptor_table_protocol_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef Client_MessageType MessageType;
  static constexpr MessageType JOIN_ROOM =
    Client_MessageType_JOIN_ROOM;
  static constexpr MessageType SEND_MESSAGE =
    Client_MessageType_SEND_MESSAGE;
  static constexpr MessageType LEAVE_ROOM =
    Client_MessageType_LEAVE_ROOM;
  static inline bool MessageType_IsValid(int value) {
    return Client_MessageType_IsValid(value);
  }
  static constexpr MessageType MessageType_MIN =
    Client_MessageType_MessageType_MIN;
  static constexpr MessageType MessageType_MAX =
    Client_MessageType_MessageType_MAX;
  static constexpr int MessageType_ARRAYSIZE =
    Client_MessageType_MessageType_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  MessageType_descriptor() {
    return Client_MessageType_descriptor();
  }
  template<typename T>
  static inline const std::string& MessageType_Name(T enum_t_value) {
    static_assert(::std::is_same<T, MessageType>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function MessageType_Name.");
    return Client_MessageType_Name(enum_t_value);
  }
  static inline bool MessageType_Parse(const std::string& name,
      MessageType* value) {
    return Client_MessageType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kEmailFieldNumber = 2,
    kPasswordFieldNumber = 3,
    kMessageFieldNumber = 4,
    kNameFieldNumber = 5,
    kRoomnameFieldNumber = 6,
    kRequestIdFieldNumber = 1,
    kTypeFieldNumber = 7,
  };
  // optional string email = 2;
  bool has_email() const;
  private:
  bool _internal_has_email() const;
  public:
  void clear_email();
  const std::string& email() const;
  void set_email(const std::string& value);
  void set_email(std::string&& value);
  void set_email(const char* value);
  void set_email(const char* value, size_t size);
  std::string* mutable_email();
  std::string* release_email();
  void set_allocated_email(std::string* email);
  private:
  const std::string& _internal_email() const;
  void _internal_set_email(const std::string& value);
  std::string* _internal_mutable_email();
  public:

  // optional string password = 3;
  bool has_password() const;
  private:
  bool _internal_has_password() const;
  public:
  void clear_password();
  const std::string& password() const;
  void set_password(const std::string& value);
  void set_password(std::string&& value);
  void set_password(const char* value);
  void set_password(const char* value, size_t size);
  std::string* mutable_password();
  std::string* release_password();
  void set_allocated_password(std::string* password);
  private:
  const std::string& _internal_password() const;
  void _internal_set_password(const std::string& value);
  std::string* _internal_mutable_password();
  public:

  // optional string message = 4;
  bool has_message() const;
  private:
  bool _internal_has_message() const;
  public:
  void clear_message();
  const std::string& message() const;
  void set_message(const std::string& value);
  void set_message(std::string&& value);
  void set_message(const char* value);
  void set_message(const char* value, size_t size);
  std::string* mutable_message();
  std::string* release_message();
  void set_allocated_message(std::string* message);
  private:
  const std::string& _internal_message() const;
  void _internal_set_message(const std::string& value);
  std::string* _internal_mutable_message();
  public:

  // optional string name = 5;
  bool has_name() const;
  private:
  bool _internal_has_name() const;
  public:
  void clear_name();
  const std::string& name() const;
  void set_name(const std::string& value);
  void set_name(std::string&& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  std::string* mutable_name();
  std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // optional string roomname = 6;
  bool has_roomname() const;
  private:
  bool _internal_has_roomname() const;
  public:
  void clear_roomname();
  const std::string& roomname() const;
  void set_roomname(const std::string& value);
  void set_roomname(std::string&& value);
  void set_roomname(const char* value);
  void set_roomname(const char* value, size_t size);
  std::string* mutable_roomname();
  std::string* release_roomname();
  void set_allocated_roomname(std::string* roomname);
  private:
  const std::string& _internal_roomname() const;
  void _internal_set_roomname(const std::string& value);
  std::string* _internal_mutable_roomname();
  public:

  // required int32 requestId = 1;
  bool has_requestid() const;
  private:
  bool _internal_has_requestid() const;
  public:
  void clear_requestid();
  ::PROTOBUF_NAMESPACE_ID::int32 requestid() const;
  void set_requestid(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_requestid() const;
  void _internal_set_requestid(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // optional .chat.Client.MessageType type = 7;
  bool has_type() const;
  private:
  bool _internal_has_type() const;
  public:
  void clear_type();
  ::chat::Client_MessageType type() const;
  void set_type(::chat::Client_MessageType value);
  private:
  ::chat::Client_MessageType _internal_type() const;
  void _internal_set_type(::chat::Client_MessageType value);
  public:

  // @@protoc_insertion_point(class_scope:chat.Client)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr email_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr password_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr message_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr roomname_;
  ::PROTOBUF_NAMESPACE_ID::int32 requestid_;
  int type_;
  friend struct ::TableStruct_protocol_2eproto;
};
// -------------------------------------------------------------------

class Clients :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:chat.Clients) */ {
 public:
  Clients();
  virtual ~Clients();

  Clients(const Clients& from);
  Clients(Clients&& from) noexcept
    : Clients() {
    *this = ::std::move(from);
  }

  inline Clients& operator=(const Clients& from) {
    CopyFrom(from);
    return *this;
  }
  inline Clients& operator=(Clients&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Clients& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Clients* internal_default_instance() {
    return reinterpret_cast<const Clients*>(
               &_Clients_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Clients& a, Clients& b) {
    a.Swap(&b);
  }
  inline void Swap(Clients* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Clients* New() const final {
    return CreateMaybeMessage<Clients>(nullptr);
  }

  Clients* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Clients>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Clients& from);
  void MergeFrom(const Clients& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Clients* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "chat.Clients";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_protocol_2eproto);
    return ::descriptor_table_protocol_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kClientsFieldNumber = 1,
  };
  // repeated .chat.Client clients = 1;
  int clients_size() const;
  private:
  int _internal_clients_size() const;
  public:
  void clear_clients();
  ::chat::Client* mutable_clients(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::chat::Client >*
      mutable_clients();
  private:
  const ::chat::Client& _internal_clients(int index) const;
  ::chat::Client* _internal_add_clients();
  public:
  const ::chat::Client& clients(int index) const;
  ::chat::Client* add_clients();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::chat::Client >&
      clients() const;

  // @@protoc_insertion_point(class_scope:chat.Clients)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::chat::Client > clients_;
  friend struct ::TableStruct_protocol_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Client

// required int32 requestId = 1;
inline bool Client::_internal_has_requestid() const {
  bool value = (_has_bits_[0] & 0x00000020u) != 0;
  return value;
}
inline bool Client::has_requestid() const {
  return _internal_has_requestid();
}
inline void Client::clear_requestid() {
  requestid_ = 0;
  _has_bits_[0] &= ~0x00000020u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Client::_internal_requestid() const {
  return requestid_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Client::requestid() const {
  // @@protoc_insertion_point(field_get:chat.Client.requestId)
  return _internal_requestid();
}
inline void Client::_internal_set_requestid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000020u;
  requestid_ = value;
}
inline void Client::set_requestid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_requestid(value);
  // @@protoc_insertion_point(field_set:chat.Client.requestId)
}

// optional string email = 2;
inline bool Client::_internal_has_email() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool Client::has_email() const {
  return _internal_has_email();
}
inline void Client::clear_email() {
  email_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& Client::email() const {
  // @@protoc_insertion_point(field_get:chat.Client.email)
  return _internal_email();
}
inline void Client::set_email(const std::string& value) {
  _internal_set_email(value);
  // @@protoc_insertion_point(field_set:chat.Client.email)
}
inline std::string* Client::mutable_email() {
  // @@protoc_insertion_point(field_mutable:chat.Client.email)
  return _internal_mutable_email();
}
inline const std::string& Client::_internal_email() const {
  return email_.GetNoArena();
}
inline void Client::_internal_set_email(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  email_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void Client::set_email(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  email_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:chat.Client.email)
}
inline void Client::set_email(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  email_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:chat.Client.email)
}
inline void Client::set_email(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  email_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:chat.Client.email)
}
inline std::string* Client::_internal_mutable_email() {
  _has_bits_[0] |= 0x00000001u;
  return email_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Client::release_email() {
  // @@protoc_insertion_point(field_release:chat.Client.email)
  if (!has_email()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return email_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Client::set_allocated_email(std::string* email) {
  if (email != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  email_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), email);
  // @@protoc_insertion_point(field_set_allocated:chat.Client.email)
}

// optional string password = 3;
inline bool Client::_internal_has_password() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool Client::has_password() const {
  return _internal_has_password();
}
inline void Client::clear_password() {
  password_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000002u;
}
inline const std::string& Client::password() const {
  // @@protoc_insertion_point(field_get:chat.Client.password)
  return _internal_password();
}
inline void Client::set_password(const std::string& value) {
  _internal_set_password(value);
  // @@protoc_insertion_point(field_set:chat.Client.password)
}
inline std::string* Client::mutable_password() {
  // @@protoc_insertion_point(field_mutable:chat.Client.password)
  return _internal_mutable_password();
}
inline const std::string& Client::_internal_password() const {
  return password_.GetNoArena();
}
inline void Client::_internal_set_password(const std::string& value) {
  _has_bits_[0] |= 0x00000002u;
  password_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void Client::set_password(std::string&& value) {
  _has_bits_[0] |= 0x00000002u;
  password_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:chat.Client.password)
}
inline void Client::set_password(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000002u;
  password_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:chat.Client.password)
}
inline void Client::set_password(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000002u;
  password_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:chat.Client.password)
}
inline std::string* Client::_internal_mutable_password() {
  _has_bits_[0] |= 0x00000002u;
  return password_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Client::release_password() {
  // @@protoc_insertion_point(field_release:chat.Client.password)
  if (!has_password()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000002u;
  return password_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Client::set_allocated_password(std::string* password) {
  if (password != nullptr) {
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  password_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), password);
  // @@protoc_insertion_point(field_set_allocated:chat.Client.password)
}

// optional string message = 4;
inline bool Client::_internal_has_message() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool Client::has_message() const {
  return _internal_has_message();
}
inline void Client::clear_message() {
  message_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000004u;
}
inline const std::string& Client::message() const {
  // @@protoc_insertion_point(field_get:chat.Client.message)
  return _internal_message();
}
inline void Client::set_message(const std::string& value) {
  _internal_set_message(value);
  // @@protoc_insertion_point(field_set:chat.Client.message)
}
inline std::string* Client::mutable_message() {
  // @@protoc_insertion_point(field_mutable:chat.Client.message)
  return _internal_mutable_message();
}
inline const std::string& Client::_internal_message() const {
  return message_.GetNoArena();
}
inline void Client::_internal_set_message(const std::string& value) {
  _has_bits_[0] |= 0x00000004u;
  message_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void Client::set_message(std::string&& value) {
  _has_bits_[0] |= 0x00000004u;
  message_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:chat.Client.message)
}
inline void Client::set_message(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000004u;
  message_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:chat.Client.message)
}
inline void Client::set_message(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000004u;
  message_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:chat.Client.message)
}
inline std::string* Client::_internal_mutable_message() {
  _has_bits_[0] |= 0x00000004u;
  return message_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Client::release_message() {
  // @@protoc_insertion_point(field_release:chat.Client.message)
  if (!has_message()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000004u;
  return message_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Client::set_allocated_message(std::string* message) {
  if (message != nullptr) {
    _has_bits_[0] |= 0x00000004u;
  } else {
    _has_bits_[0] &= ~0x00000004u;
  }
  message_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), message);
  // @@protoc_insertion_point(field_set_allocated:chat.Client.message)
}

// optional string name = 5;
inline bool Client::_internal_has_name() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool Client::has_name() const {
  return _internal_has_name();
}
inline void Client::clear_name() {
  name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000008u;
}
inline const std::string& Client::name() const {
  // @@protoc_insertion_point(field_get:chat.Client.name)
  return _internal_name();
}
inline void Client::set_name(const std::string& value) {
  _internal_set_name(value);
  // @@protoc_insertion_point(field_set:chat.Client.name)
}
inline std::string* Client::mutable_name() {
  // @@protoc_insertion_point(field_mutable:chat.Client.name)
  return _internal_mutable_name();
}
inline const std::string& Client::_internal_name() const {
  return name_.GetNoArena();
}
inline void Client::_internal_set_name(const std::string& value) {
  _has_bits_[0] |= 0x00000008u;
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void Client::set_name(std::string&& value) {
  _has_bits_[0] |= 0x00000008u;
  name_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:chat.Client.name)
}
inline void Client::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000008u;
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:chat.Client.name)
}
inline void Client::set_name(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000008u;
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:chat.Client.name)
}
inline std::string* Client::_internal_mutable_name() {
  _has_bits_[0] |= 0x00000008u;
  return name_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Client::release_name() {
  // @@protoc_insertion_point(field_release:chat.Client.name)
  if (!has_name()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000008u;
  return name_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Client::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    _has_bits_[0] |= 0x00000008u;
  } else {
    _has_bits_[0] &= ~0x00000008u;
  }
  name_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:chat.Client.name)
}

// optional string roomname = 6;
inline bool Client::_internal_has_roomname() const {
  bool value = (_has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline bool Client::has_roomname() const {
  return _internal_has_roomname();
}
inline void Client::clear_roomname() {
  roomname_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000010u;
}
inline const std::string& Client::roomname() const {
  // @@protoc_insertion_point(field_get:chat.Client.roomname)
  return _internal_roomname();
}
inline void Client::set_roomname(const std::string& value) {
  _internal_set_roomname(value);
  // @@protoc_insertion_point(field_set:chat.Client.roomname)
}
inline std::string* Client::mutable_roomname() {
  // @@protoc_insertion_point(field_mutable:chat.Client.roomname)
  return _internal_mutable_roomname();
}
inline const std::string& Client::_internal_roomname() const {
  return roomname_.GetNoArena();
}
inline void Client::_internal_set_roomname(const std::string& value) {
  _has_bits_[0] |= 0x00000010u;
  roomname_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void Client::set_roomname(std::string&& value) {
  _has_bits_[0] |= 0x00000010u;
  roomname_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:chat.Client.roomname)
}
inline void Client::set_roomname(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000010u;
  roomname_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:chat.Client.roomname)
}
inline void Client::set_roomname(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000010u;
  roomname_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:chat.Client.roomname)
}
inline std::string* Client::_internal_mutable_roomname() {
  _has_bits_[0] |= 0x00000010u;
  return roomname_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Client::release_roomname() {
  // @@protoc_insertion_point(field_release:chat.Client.roomname)
  if (!has_roomname()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000010u;
  return roomname_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Client::set_allocated_roomname(std::string* roomname) {
  if (roomname != nullptr) {
    _has_bits_[0] |= 0x00000010u;
  } else {
    _has_bits_[0] &= ~0x00000010u;
  }
  roomname_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), roomname);
  // @@protoc_insertion_point(field_set_allocated:chat.Client.roomname)
}

// optional .chat.Client.MessageType type = 7;
inline bool Client::_internal_has_type() const {
  bool value = (_has_bits_[0] & 0x00000040u) != 0;
  return value;
}
inline bool Client::has_type() const {
  return _internal_has_type();
}
inline void Client::clear_type() {
  type_ = 0;
  _has_bits_[0] &= ~0x00000040u;
}
inline ::chat::Client_MessageType Client::_internal_type() const {
  return static_cast< ::chat::Client_MessageType >(type_);
}
inline ::chat::Client_MessageType Client::type() const {
  // @@protoc_insertion_point(field_get:chat.Client.type)
  return _internal_type();
}
inline void Client::_internal_set_type(::chat::Client_MessageType value) {
  assert(::chat::Client_MessageType_IsValid(value));
  _has_bits_[0] |= 0x00000040u;
  type_ = value;
}
inline void Client::set_type(::chat::Client_MessageType value) {
  _internal_set_type(value);
  // @@protoc_insertion_point(field_set:chat.Client.type)
}

// -------------------------------------------------------------------

// Clients

// repeated .chat.Client clients = 1;
inline int Clients::_internal_clients_size() const {
  return clients_.size();
}
inline int Clients::clients_size() const {
  return _internal_clients_size();
}
inline void Clients::clear_clients() {
  clients_.Clear();
}
inline ::chat::Client* Clients::mutable_clients(int index) {
  // @@protoc_insertion_point(field_mutable:chat.Clients.clients)
  return clients_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::chat::Client >*
Clients::mutable_clients() {
  // @@protoc_insertion_point(field_mutable_list:chat.Clients.clients)
  return &clients_;
}
inline const ::chat::Client& Clients::_internal_clients(int index) const {
  return clients_.Get(index);
}
inline const ::chat::Client& Clients::clients(int index) const {
  // @@protoc_insertion_point(field_get:chat.Clients.clients)
  return _internal_clients(index);
}
inline ::chat::Client* Clients::_internal_add_clients() {
  return clients_.Add();
}
inline ::chat::Client* Clients::add_clients() {
  // @@protoc_insertion_point(field_add:chat.Clients.clients)
  return _internal_add_clients();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::chat::Client >&
Clients::clients() const {
  // @@protoc_insertion_point(field_list:chat.Clients.clients)
  return clients_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace chat

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::chat::Client_MessageType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::chat::Client_MessageType>() {
  return ::chat::Client_MessageType_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_protocol_2eproto
