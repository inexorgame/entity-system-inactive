// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: entity-system.proto

#ifndef PROTOBUF_INCLUDED_entity_2dsystem_2eproto
#define PROTOBUF_INCLUDED_entity_2dsystem_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include <google/protobuf/any.pb.h>
#include <google/protobuf/empty.pb.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_entity_2dsystem_2eproto 

namespace protobuf_entity_2dsystem_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[4];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_entity_2dsystem_2eproto
namespace inexor {
namespace entity_system {
class Attribute;
class AttributeDefaultTypeInternal;
extern AttributeDefaultTypeInternal _Attribute_default_instance_;
class Entity;
class EntityDefaultTypeInternal;
extern EntityDefaultTypeInternal _Entity_default_instance_;
class Operation;
class OperationDefaultTypeInternal;
extern OperationDefaultTypeInternal _Operation_default_instance_;
class Relation;
class RelationDefaultTypeInternal;
extern RelationDefaultTypeInternal _Relation_default_instance_;
}  // namespace entity_system
}  // namespace inexor
namespace google {
namespace protobuf {
template<> ::inexor::entity_system::Attribute* Arena::CreateMaybeMessage<::inexor::entity_system::Attribute>(Arena*);
template<> ::inexor::entity_system::Entity* Arena::CreateMaybeMessage<::inexor::entity_system::Entity>(Arena*);
template<> ::inexor::entity_system::Operation* Arena::CreateMaybeMessage<::inexor::entity_system::Operation>(Arena*);
template<> ::inexor::entity_system::Relation* Arena::CreateMaybeMessage<::inexor::entity_system::Relation>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace inexor {
namespace entity_system {

enum DataType {
  Undefined = 0,
  Int = 1,
  BigInt = 2,
  Float = 3,
  String = 4,
  Double = 5,
  Bool = 6,
  DataType_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  DataType_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool DataType_IsValid(int value);
const DataType DataType_MIN = Undefined;
const DataType DataType_MAX = Bool;
const int DataType_ARRAYSIZE = DataType_MAX + 1;

const ::google::protobuf::EnumDescriptor* DataType_descriptor();
inline const ::std::string& DataType_Name(DataType value) {
  return ::google::protobuf::internal::NameOfEnum(
    DataType_descriptor(), value);
}
inline bool DataType_Parse(
    const ::std::string& name, DataType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<DataType>(
    DataType_descriptor(), name, value);
}
// ===================================================================

class Attribute : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:inexor.entity_system.Attribute) */ {
 public:
  Attribute();
  virtual ~Attribute();

  Attribute(const Attribute& from);

  inline Attribute& operator=(const Attribute& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Attribute(Attribute&& from) noexcept
    : Attribute() {
    *this = ::std::move(from);
  }

  inline Attribute& operator=(Attribute&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Attribute& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Attribute* internal_default_instance() {
    return reinterpret_cast<const Attribute*>(
               &_Attribute_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Attribute* other);
  friend void swap(Attribute& a, Attribute& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Attribute* New() const final {
    return CreateMaybeMessage<Attribute>(NULL);
  }

  Attribute* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Attribute>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Attribute& from);
  void MergeFrom(const Attribute& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Attribute* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string name = 1;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // .google.protobuf.Any value = 3;
  bool has_value() const;
  void clear_value();
  static const int kValueFieldNumber = 3;
  private:
  const ::google::protobuf::Any& _internal_value() const;
  public:
  const ::google::protobuf::Any& value() const;
  ::google::protobuf::Any* release_value();
  ::google::protobuf::Any* mutable_value();
  void set_allocated_value(::google::protobuf::Any* value);

  // .inexor.entity_system.DataType data_type = 2;
  void clear_data_type();
  static const int kDataTypeFieldNumber = 2;
  ::inexor::entity_system::DataType data_type() const;
  void set_data_type(::inexor::entity_system::DataType value);

  // @@protoc_insertion_point(class_scope:inexor.entity_system.Attribute)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::Any* value_;
  int data_type_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_entity_2dsystem_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class Entity : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:inexor.entity_system.Entity) */ {
 public:
  Entity();
  virtual ~Entity();

  Entity(const Entity& from);

  inline Entity& operator=(const Entity& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Entity(Entity&& from) noexcept
    : Entity() {
    *this = ::std::move(from);
  }

  inline Entity& operator=(Entity&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Entity& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Entity* internal_default_instance() {
    return reinterpret_cast<const Entity*>(
               &_Entity_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(Entity* other);
  friend void swap(Entity& a, Entity& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Entity* New() const final {
    return CreateMaybeMessage<Entity>(NULL);
  }

  Entity* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Entity>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Entity& from);
  void MergeFrom(const Entity& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Entity* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .inexor.entity_system.Attribute attribute = 2;
  int attribute_size() const;
  void clear_attribute();
  static const int kAttributeFieldNumber = 2;
  ::inexor::entity_system::Attribute* mutable_attribute(int index);
  ::google::protobuf::RepeatedPtrField< ::inexor::entity_system::Attribute >*
      mutable_attribute();
  const ::inexor::entity_system::Attribute& attribute(int index) const;
  ::inexor::entity_system::Attribute* add_attribute();
  const ::google::protobuf::RepeatedPtrField< ::inexor::entity_system::Attribute >&
      attribute() const;

  // string name = 1;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // @@protoc_insertion_point(class_scope:inexor.entity_system.Entity)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::inexor::entity_system::Attribute > attribute_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_entity_2dsystem_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class Relation : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:inexor.entity_system.Relation) */ {
 public:
  Relation();
  virtual ~Relation();

  Relation(const Relation& from);

  inline Relation& operator=(const Relation& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Relation(Relation&& from) noexcept
    : Relation() {
    *this = ::std::move(from);
  }

  inline Relation& operator=(Relation&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Relation& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Relation* internal_default_instance() {
    return reinterpret_cast<const Relation*>(
               &_Relation_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  void Swap(Relation* other);
  friend void swap(Relation& a, Relation& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Relation* New() const final {
    return CreateMaybeMessage<Relation>(NULL);
  }

  Relation* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Relation>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Relation& from);
  void MergeFrom(const Relation& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Relation* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string name = 1;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // .inexor.entity_system.Entity source = 2;
  bool has_source() const;
  void clear_source();
  static const int kSourceFieldNumber = 2;
  private:
  const ::inexor::entity_system::Entity& _internal_source() const;
  public:
  const ::inexor::entity_system::Entity& source() const;
  ::inexor::entity_system::Entity* release_source();
  ::inexor::entity_system::Entity* mutable_source();
  void set_allocated_source(::inexor::entity_system::Entity* source);

  // .inexor.entity_system.Entity target = 3;
  bool has_target() const;
  void clear_target();
  static const int kTargetFieldNumber = 3;
  private:
  const ::inexor::entity_system::Entity& _internal_target() const;
  public:
  const ::inexor::entity_system::Entity& target() const;
  ::inexor::entity_system::Entity* release_target();
  ::inexor::entity_system::Entity* mutable_target();
  void set_allocated_target(::inexor::entity_system::Entity* target);

  // @@protoc_insertion_point(class_scope:inexor.entity_system.Relation)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::inexor::entity_system::Entity* source_;
  ::inexor::entity_system::Entity* target_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_entity_2dsystem_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class Operation : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:inexor.entity_system.Operation) */ {
 public:
  Operation();
  virtual ~Operation();

  Operation(const Operation& from);

  inline Operation& operator=(const Operation& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Operation(Operation&& from) noexcept
    : Operation() {
    *this = ::std::move(from);
  }

  inline Operation& operator=(Operation&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Operation& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Operation* internal_default_instance() {
    return reinterpret_cast<const Operation*>(
               &_Operation_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  void Swap(Operation* other);
  friend void swap(Operation& a, Operation& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Operation* New() const final {
    return CreateMaybeMessage<Operation>(NULL);
  }

  Operation* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Operation>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Operation& from);
  void MergeFrom(const Operation& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Operation* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string status = 2;
  void clear_status();
  static const int kStatusFieldNumber = 2;
  const ::std::string& status() const;
  void set_status(const ::std::string& value);
  #if LANG_CXX11
  void set_status(::std::string&& value);
  #endif
  void set_status(const char* value);
  void set_status(const char* value, size_t size);
  ::std::string* mutable_status();
  ::std::string* release_status();
  void set_allocated_status(::std::string* status);

  // bool successful = 1;
  void clear_successful();
  static const int kSuccessfulFieldNumber = 1;
  bool successful() const;
  void set_successful(bool value);

  // @@protoc_insertion_point(class_scope:inexor.entity_system.Operation)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr status_;
  bool successful_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_entity_2dsystem_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Attribute

// string name = 1;
inline void Attribute::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Attribute::name() const {
  // @@protoc_insertion_point(field_get:inexor.entity_system.Attribute.name)
  return name_.GetNoArena();
}
inline void Attribute::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:inexor.entity_system.Attribute.name)
}
#if LANG_CXX11
inline void Attribute::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:inexor.entity_system.Attribute.name)
}
#endif
inline void Attribute::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:inexor.entity_system.Attribute.name)
}
inline void Attribute::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:inexor.entity_system.Attribute.name)
}
inline ::std::string* Attribute::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:inexor.entity_system.Attribute.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Attribute::release_name() {
  // @@protoc_insertion_point(field_release:inexor.entity_system.Attribute.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Attribute::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:inexor.entity_system.Attribute.name)
}

// .inexor.entity_system.DataType data_type = 2;
inline void Attribute::clear_data_type() {
  data_type_ = 0;
}
inline ::inexor::entity_system::DataType Attribute::data_type() const {
  // @@protoc_insertion_point(field_get:inexor.entity_system.Attribute.data_type)
  return static_cast< ::inexor::entity_system::DataType >(data_type_);
}
inline void Attribute::set_data_type(::inexor::entity_system::DataType value) {
  
  data_type_ = value;
  // @@protoc_insertion_point(field_set:inexor.entity_system.Attribute.data_type)
}

// .google.protobuf.Any value = 3;
inline bool Attribute::has_value() const {
  return this != internal_default_instance() && value_ != NULL;
}
inline const ::google::protobuf::Any& Attribute::_internal_value() const {
  return *value_;
}
inline const ::google::protobuf::Any& Attribute::value() const {
  const ::google::protobuf::Any* p = value_;
  // @@protoc_insertion_point(field_get:inexor.entity_system.Attribute.value)
  return p != NULL ? *p : *reinterpret_cast<const ::google::protobuf::Any*>(
      &::google::protobuf::_Any_default_instance_);
}
inline ::google::protobuf::Any* Attribute::release_value() {
  // @@protoc_insertion_point(field_release:inexor.entity_system.Attribute.value)
  
  ::google::protobuf::Any* temp = value_;
  value_ = NULL;
  return temp;
}
inline ::google::protobuf::Any* Attribute::mutable_value() {
  
  if (value_ == NULL) {
    auto* p = CreateMaybeMessage<::google::protobuf::Any>(GetArenaNoVirtual());
    value_ = p;
  }
  // @@protoc_insertion_point(field_mutable:inexor.entity_system.Attribute.value)
  return value_;
}
inline void Attribute::set_allocated_value(::google::protobuf::Any* value) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(value_);
  }
  if (value) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      value = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, value, submessage_arena);
    }
    
  } else {
    
  }
  value_ = value;
  // @@protoc_insertion_point(field_set_allocated:inexor.entity_system.Attribute.value)
}

// -------------------------------------------------------------------

// Entity

// string name = 1;
inline void Entity::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Entity::name() const {
  // @@protoc_insertion_point(field_get:inexor.entity_system.Entity.name)
  return name_.GetNoArena();
}
inline void Entity::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:inexor.entity_system.Entity.name)
}
#if LANG_CXX11
inline void Entity::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:inexor.entity_system.Entity.name)
}
#endif
inline void Entity::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:inexor.entity_system.Entity.name)
}
inline void Entity::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:inexor.entity_system.Entity.name)
}
inline ::std::string* Entity::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:inexor.entity_system.Entity.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Entity::release_name() {
  // @@protoc_insertion_point(field_release:inexor.entity_system.Entity.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Entity::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:inexor.entity_system.Entity.name)
}

// repeated .inexor.entity_system.Attribute attribute = 2;
inline int Entity::attribute_size() const {
  return attribute_.size();
}
inline void Entity::clear_attribute() {
  attribute_.Clear();
}
inline ::inexor::entity_system::Attribute* Entity::mutable_attribute(int index) {
  // @@protoc_insertion_point(field_mutable:inexor.entity_system.Entity.attribute)
  return attribute_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::inexor::entity_system::Attribute >*
Entity::mutable_attribute() {
  // @@protoc_insertion_point(field_mutable_list:inexor.entity_system.Entity.attribute)
  return &attribute_;
}
inline const ::inexor::entity_system::Attribute& Entity::attribute(int index) const {
  // @@protoc_insertion_point(field_get:inexor.entity_system.Entity.attribute)
  return attribute_.Get(index);
}
inline ::inexor::entity_system::Attribute* Entity::add_attribute() {
  // @@protoc_insertion_point(field_add:inexor.entity_system.Entity.attribute)
  return attribute_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::inexor::entity_system::Attribute >&
Entity::attribute() const {
  // @@protoc_insertion_point(field_list:inexor.entity_system.Entity.attribute)
  return attribute_;
}

// -------------------------------------------------------------------

// Relation

// string name = 1;
inline void Relation::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Relation::name() const {
  // @@protoc_insertion_point(field_get:inexor.entity_system.Relation.name)
  return name_.GetNoArena();
}
inline void Relation::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:inexor.entity_system.Relation.name)
}
#if LANG_CXX11
inline void Relation::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:inexor.entity_system.Relation.name)
}
#endif
inline void Relation::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:inexor.entity_system.Relation.name)
}
inline void Relation::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:inexor.entity_system.Relation.name)
}
inline ::std::string* Relation::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:inexor.entity_system.Relation.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Relation::release_name() {
  // @@protoc_insertion_point(field_release:inexor.entity_system.Relation.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Relation::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:inexor.entity_system.Relation.name)
}

// .inexor.entity_system.Entity source = 2;
inline bool Relation::has_source() const {
  return this != internal_default_instance() && source_ != NULL;
}
inline void Relation::clear_source() {
  if (GetArenaNoVirtual() == NULL && source_ != NULL) {
    delete source_;
  }
  source_ = NULL;
}
inline const ::inexor::entity_system::Entity& Relation::_internal_source() const {
  return *source_;
}
inline const ::inexor::entity_system::Entity& Relation::source() const {
  const ::inexor::entity_system::Entity* p = source_;
  // @@protoc_insertion_point(field_get:inexor.entity_system.Relation.source)
  return p != NULL ? *p : *reinterpret_cast<const ::inexor::entity_system::Entity*>(
      &::inexor::entity_system::_Entity_default_instance_);
}
inline ::inexor::entity_system::Entity* Relation::release_source() {
  // @@protoc_insertion_point(field_release:inexor.entity_system.Relation.source)
  
  ::inexor::entity_system::Entity* temp = source_;
  source_ = NULL;
  return temp;
}
inline ::inexor::entity_system::Entity* Relation::mutable_source() {
  
  if (source_ == NULL) {
    auto* p = CreateMaybeMessage<::inexor::entity_system::Entity>(GetArenaNoVirtual());
    source_ = p;
  }
  // @@protoc_insertion_point(field_mutable:inexor.entity_system.Relation.source)
  return source_;
}
inline void Relation::set_allocated_source(::inexor::entity_system::Entity* source) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete source_;
  }
  if (source) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      source = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, source, submessage_arena);
    }
    
  } else {
    
  }
  source_ = source;
  // @@protoc_insertion_point(field_set_allocated:inexor.entity_system.Relation.source)
}

// .inexor.entity_system.Entity target = 3;
inline bool Relation::has_target() const {
  return this != internal_default_instance() && target_ != NULL;
}
inline void Relation::clear_target() {
  if (GetArenaNoVirtual() == NULL && target_ != NULL) {
    delete target_;
  }
  target_ = NULL;
}
inline const ::inexor::entity_system::Entity& Relation::_internal_target() const {
  return *target_;
}
inline const ::inexor::entity_system::Entity& Relation::target() const {
  const ::inexor::entity_system::Entity* p = target_;
  // @@protoc_insertion_point(field_get:inexor.entity_system.Relation.target)
  return p != NULL ? *p : *reinterpret_cast<const ::inexor::entity_system::Entity*>(
      &::inexor::entity_system::_Entity_default_instance_);
}
inline ::inexor::entity_system::Entity* Relation::release_target() {
  // @@protoc_insertion_point(field_release:inexor.entity_system.Relation.target)
  
  ::inexor::entity_system::Entity* temp = target_;
  target_ = NULL;
  return temp;
}
inline ::inexor::entity_system::Entity* Relation::mutable_target() {
  
  if (target_ == NULL) {
    auto* p = CreateMaybeMessage<::inexor::entity_system::Entity>(GetArenaNoVirtual());
    target_ = p;
  }
  // @@protoc_insertion_point(field_mutable:inexor.entity_system.Relation.target)
  return target_;
}
inline void Relation::set_allocated_target(::inexor::entity_system::Entity* target) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete target_;
  }
  if (target) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      target = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, target, submessage_arena);
    }
    
  } else {
    
  }
  target_ = target;
  // @@protoc_insertion_point(field_set_allocated:inexor.entity_system.Relation.target)
}

// -------------------------------------------------------------------

// Operation

// bool successful = 1;
inline void Operation::clear_successful() {
  successful_ = false;
}
inline bool Operation::successful() const {
  // @@protoc_insertion_point(field_get:inexor.entity_system.Operation.successful)
  return successful_;
}
inline void Operation::set_successful(bool value) {
  
  successful_ = value;
  // @@protoc_insertion_point(field_set:inexor.entity_system.Operation.successful)
}

// string status = 2;
inline void Operation::clear_status() {
  status_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Operation::status() const {
  // @@protoc_insertion_point(field_get:inexor.entity_system.Operation.status)
  return status_.GetNoArena();
}
inline void Operation::set_status(const ::std::string& value) {
  
  status_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:inexor.entity_system.Operation.status)
}
#if LANG_CXX11
inline void Operation::set_status(::std::string&& value) {
  
  status_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:inexor.entity_system.Operation.status)
}
#endif
inline void Operation::set_status(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  status_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:inexor.entity_system.Operation.status)
}
inline void Operation::set_status(const char* value, size_t size) {
  
  status_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:inexor.entity_system.Operation.status)
}
inline ::std::string* Operation::mutable_status() {
  
  // @@protoc_insertion_point(field_mutable:inexor.entity_system.Operation.status)
  return status_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Operation::release_status() {
  // @@protoc_insertion_point(field_release:inexor.entity_system.Operation.status)
  
  return status_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Operation::set_allocated_status(::std::string* status) {
  if (status != NULL) {
    
  } else {
    
  }
  status_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), status);
  // @@protoc_insertion_point(field_set_allocated:inexor.entity_system.Operation.status)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace entity_system
}  // namespace inexor

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::inexor::entity_system::DataType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::inexor::entity_system::DataType>() {
  return ::inexor::entity_system::DataType_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_entity_2dsystem_2eproto
