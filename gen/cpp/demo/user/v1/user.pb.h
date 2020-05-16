// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: demo/user/v1/user.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_demo_2fuser_2fv1_2fuser_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_demo_2fuser_2fv1_2fuser_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3011000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3011002 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/unknown_field_set.h>
#include <google/protobuf/timestamp.pb.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_demo_2fuser_2fv1_2fuser_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_demo_2fuser_2fv1_2fuser_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_demo_2fuser_2fv1_2fuser_2eproto;
namespace demo {
namespace user {
namespace v1 {
class User;
class UserDefaultTypeInternal;
extern UserDefaultTypeInternal _User_default_instance_;
}  // namespace v1
}  // namespace user
}  // namespace demo
PROTOBUF_NAMESPACE_OPEN
template<> ::demo::user::v1::User* Arena::CreateMaybeMessage<::demo::user::v1::User>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace demo {
namespace user {
namespace v1 {

// ===================================================================

class User :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:demo.user.v1.User) */ {
 public:
  User();
  virtual ~User();

  User(const User& from);
  User(User&& from) noexcept
    : User() {
    *this = ::std::move(from);
  }

  inline User& operator=(const User& from) {
    CopyFrom(from);
    return *this;
  }
  inline User& operator=(User&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
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
  static const User& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const User* internal_default_instance() {
    return reinterpret_cast<const User*>(
               &_User_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(User& a, User& b) {
    a.Swap(&b);
  }
  inline void Swap(User* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline User* New() const final {
    return CreateMaybeMessage<User>(nullptr);
  }

  User* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<User>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const User& from);
  void MergeFrom(const User& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(User* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "demo.user.v1.User";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_demo_2fuser_2fv1_2fuser_2eproto);
    return ::descriptor_table_demo_2fuser_2fv1_2fuser_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kUserIdFieldNumber = 1,
    kCreatedTimestampFieldNumber = 2,
  };
  // string user_id = 1;
  void clear_user_id();
  const std::string& user_id() const;
  void set_user_id(const std::string& value);
  void set_user_id(std::string&& value);
  void set_user_id(const char* value);
  void set_user_id(const char* value, size_t size);
  std::string* mutable_user_id();
  std::string* release_user_id();
  void set_allocated_user_id(std::string* user_id);
  private:
  const std::string& _internal_user_id() const;
  void _internal_set_user_id(const std::string& value);
  std::string* _internal_mutable_user_id();
  public:

  // .google.protobuf.Timestamp created_timestamp = 2;
  bool has_created_timestamp() const;
  private:
  bool _internal_has_created_timestamp() const;
  public:
  void clear_created_timestamp();
  const PROTOBUF_NAMESPACE_ID::Timestamp& created_timestamp() const;
  PROTOBUF_NAMESPACE_ID::Timestamp* release_created_timestamp();
  PROTOBUF_NAMESPACE_ID::Timestamp* mutable_created_timestamp();
  void set_allocated_created_timestamp(PROTOBUF_NAMESPACE_ID::Timestamp* created_timestamp);
  private:
  const PROTOBUF_NAMESPACE_ID::Timestamp& _internal_created_timestamp() const;
  PROTOBUF_NAMESPACE_ID::Timestamp* _internal_mutable_created_timestamp();
  public:

  // @@protoc_insertion_point(class_scope:demo.user.v1.User)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr user_id_;
  PROTOBUF_NAMESPACE_ID::Timestamp* created_timestamp_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_demo_2fuser_2fv1_2fuser_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// User

// string user_id = 1;
inline void User::clear_user_id() {
  user_id_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& User::user_id() const {
  // @@protoc_insertion_point(field_get:demo.user.v1.User.user_id)
  return _internal_user_id();
}
inline void User::set_user_id(const std::string& value) {
  _internal_set_user_id(value);
  // @@protoc_insertion_point(field_set:demo.user.v1.User.user_id)
}
inline std::string* User::mutable_user_id() {
  // @@protoc_insertion_point(field_mutable:demo.user.v1.User.user_id)
  return _internal_mutable_user_id();
}
inline const std::string& User::_internal_user_id() const {
  return user_id_.GetNoArena();
}
inline void User::_internal_set_user_id(const std::string& value) {
  
  user_id_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void User::set_user_id(std::string&& value) {
  
  user_id_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:demo.user.v1.User.user_id)
}
inline void User::set_user_id(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  user_id_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:demo.user.v1.User.user_id)
}
inline void User::set_user_id(const char* value, size_t size) {
  
  user_id_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:demo.user.v1.User.user_id)
}
inline std::string* User::_internal_mutable_user_id() {
  
  return user_id_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* User::release_user_id() {
  // @@protoc_insertion_point(field_release:demo.user.v1.User.user_id)
  
  return user_id_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void User::set_allocated_user_id(std::string* user_id) {
  if (user_id != nullptr) {
    
  } else {
    
  }
  user_id_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), user_id);
  // @@protoc_insertion_point(field_set_allocated:demo.user.v1.User.user_id)
}

// .google.protobuf.Timestamp created_timestamp = 2;
inline bool User::_internal_has_created_timestamp() const {
  return this != internal_default_instance() && created_timestamp_ != nullptr;
}
inline bool User::has_created_timestamp() const {
  return _internal_has_created_timestamp();
}
inline const PROTOBUF_NAMESPACE_ID::Timestamp& User::_internal_created_timestamp() const {
  const PROTOBUF_NAMESPACE_ID::Timestamp* p = created_timestamp_;
  return p != nullptr ? *p : *reinterpret_cast<const PROTOBUF_NAMESPACE_ID::Timestamp*>(
      &PROTOBUF_NAMESPACE_ID::_Timestamp_default_instance_);
}
inline const PROTOBUF_NAMESPACE_ID::Timestamp& User::created_timestamp() const {
  // @@protoc_insertion_point(field_get:demo.user.v1.User.created_timestamp)
  return _internal_created_timestamp();
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* User::release_created_timestamp() {
  // @@protoc_insertion_point(field_release:demo.user.v1.User.created_timestamp)
  
  PROTOBUF_NAMESPACE_ID::Timestamp* temp = created_timestamp_;
  created_timestamp_ = nullptr;
  return temp;
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* User::_internal_mutable_created_timestamp() {
  
  if (created_timestamp_ == nullptr) {
    auto* p = CreateMaybeMessage<PROTOBUF_NAMESPACE_ID::Timestamp>(GetArenaNoVirtual());
    created_timestamp_ = p;
  }
  return created_timestamp_;
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* User::mutable_created_timestamp() {
  // @@protoc_insertion_point(field_mutable:demo.user.v1.User.created_timestamp)
  return _internal_mutable_created_timestamp();
}
inline void User::set_allocated_created_timestamp(PROTOBUF_NAMESPACE_ID::Timestamp* created_timestamp) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(created_timestamp_);
  }
  if (created_timestamp) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(created_timestamp)->GetArena();
    if (message_arena != submessage_arena) {
      created_timestamp = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, created_timestamp, submessage_arena);
    }
    
  } else {
    
  }
  created_timestamp_ = created_timestamp;
  // @@protoc_insertion_point(field_set_allocated:demo.user.v1.User.created_timestamp)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace v1
}  // namespace user
}  // namespace demo

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_demo_2fuser_2fv1_2fuser_2eproto
