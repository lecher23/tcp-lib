// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: main.proto

#ifndef PROTOBUF_main_2eproto__INCLUDED
#define PROTOBUF_main_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3001000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3001000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace tutorial {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_main_2eproto();
void protobuf_InitDefaults_main_2eproto();
void protobuf_AssignDesc_main_2eproto();
void protobuf_ShutdownFile_main_2eproto();

class AddressBook;
class Person;
class Person_PhoneNumber;

enum Person_PhoneType {
  Person_PhoneType_MOBILE = 0,
  Person_PhoneType_HOME = 1,
  Person_PhoneType_WORK = 2
};
bool Person_PhoneType_IsValid(int value);
const Person_PhoneType Person_PhoneType_PhoneType_MIN = Person_PhoneType_MOBILE;
const Person_PhoneType Person_PhoneType_PhoneType_MAX = Person_PhoneType_WORK;
const int Person_PhoneType_PhoneType_ARRAYSIZE = Person_PhoneType_PhoneType_MAX + 1;

const ::google::protobuf::EnumDescriptor* Person_PhoneType_descriptor();
inline const ::std::string& Person_PhoneType_Name(Person_PhoneType value) {
  return ::google::protobuf::internal::NameOfEnum(
    Person_PhoneType_descriptor(), value);
}
inline bool Person_PhoneType_Parse(
    const ::std::string& name, Person_PhoneType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Person_PhoneType>(
    Person_PhoneType_descriptor(), name, value);
}
// ===================================================================

class Person_PhoneNumber : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tutorial.Person.PhoneNumber) */ {
 public:
  Person_PhoneNumber();
  virtual ~Person_PhoneNumber();

  Person_PhoneNumber(const Person_PhoneNumber& from);

  inline Person_PhoneNumber& operator=(const Person_PhoneNumber& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Person_PhoneNumber& default_instance();

  static const Person_PhoneNumber* internal_default_instance();

  void Swap(Person_PhoneNumber* other);

  // implements Message ----------------------------------------------

  inline Person_PhoneNumber* New() const { return New(NULL); }

  Person_PhoneNumber* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Person_PhoneNumber& from);
  void MergeFrom(const Person_PhoneNumber& from);
  void Clear();
  bool IsInitialized() const;

  size_t ByteSizeLong() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Person_PhoneNumber* other);
  void UnsafeMergeFrom(const Person_PhoneNumber& from);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string number = 1;
  bool has_number() const;
  void clear_number();
  static const int kNumberFieldNumber = 1;
  const ::std::string& number() const;
  void set_number(const ::std::string& value);
  void set_number(const char* value);
  void set_number(const char* value, size_t size);
  ::std::string* mutable_number();
  ::std::string* release_number();
  void set_allocated_number(::std::string* number);

  // optional .tutorial.Person.PhoneType type = 2 [default = HOME];
  bool has_type() const;
  void clear_type();
  static const int kTypeFieldNumber = 2;
  ::tutorial::Person_PhoneType type() const;
  void set_type(::tutorial::Person_PhoneType value);

  // @@protoc_insertion_point(class_scope:tutorial.Person.PhoneNumber)
 private:
  inline void set_has_number();
  inline void clear_has_number();
  inline void set_has_type();
  inline void clear_has_type();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr number_;
  int type_;
  friend void  protobuf_InitDefaults_main_2eproto_impl();
  friend void  protobuf_AddDesc_main_2eproto_impl();
  friend void protobuf_AssignDesc_main_2eproto();
  friend void protobuf_ShutdownFile_main_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<Person_PhoneNumber> Person_PhoneNumber_default_instance_;

// -------------------------------------------------------------------

class Person : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tutorial.Person) */ {
 public:
  Person();
  virtual ~Person();

  Person(const Person& from);

  inline Person& operator=(const Person& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Person& default_instance();

  static const Person* internal_default_instance();

  void Swap(Person* other);

  // implements Message ----------------------------------------------

  inline Person* New() const { return New(NULL); }

  Person* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Person& from);
  void MergeFrom(const Person& from);
  void Clear();
  bool IsInitialized() const;

  size_t ByteSizeLong() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Person* other);
  void UnsafeMergeFrom(const Person& from);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef Person_PhoneNumber PhoneNumber;

  typedef Person_PhoneType PhoneType;
  static const PhoneType MOBILE =
    Person_PhoneType_MOBILE;
  static const PhoneType HOME =
    Person_PhoneType_HOME;
  static const PhoneType WORK =
    Person_PhoneType_WORK;
  static inline bool PhoneType_IsValid(int value) {
    return Person_PhoneType_IsValid(value);
  }
  static const PhoneType PhoneType_MIN =
    Person_PhoneType_PhoneType_MIN;
  static const PhoneType PhoneType_MAX =
    Person_PhoneType_PhoneType_MAX;
  static const int PhoneType_ARRAYSIZE =
    Person_PhoneType_PhoneType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  PhoneType_descriptor() {
    return Person_PhoneType_descriptor();
  }
  static inline const ::std::string& PhoneType_Name(PhoneType value) {
    return Person_PhoneType_Name(value);
  }
  static inline bool PhoneType_Parse(const ::std::string& name,
      PhoneType* value) {
    return Person_PhoneType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // required string name = 1;
  bool has_name() const;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // required int32 id = 2;
  bool has_id() const;
  void clear_id();
  static const int kIdFieldNumber = 2;
  ::google::protobuf::int32 id() const;
  void set_id(::google::protobuf::int32 value);

  // optional string email = 3;
  bool has_email() const;
  void clear_email();
  static const int kEmailFieldNumber = 3;
  const ::std::string& email() const;
  void set_email(const ::std::string& value);
  void set_email(const char* value);
  void set_email(const char* value, size_t size);
  ::std::string* mutable_email();
  ::std::string* release_email();
  void set_allocated_email(::std::string* email);

  // repeated .tutorial.Person.PhoneNumber phones = 4;
  int phones_size() const;
  void clear_phones();
  static const int kPhonesFieldNumber = 4;
  const ::tutorial::Person_PhoneNumber& phones(int index) const;
  ::tutorial::Person_PhoneNumber* mutable_phones(int index);
  ::tutorial::Person_PhoneNumber* add_phones();
  ::google::protobuf::RepeatedPtrField< ::tutorial::Person_PhoneNumber >*
      mutable_phones();
  const ::google::protobuf::RepeatedPtrField< ::tutorial::Person_PhoneNumber >&
      phones() const;

  // @@protoc_insertion_point(class_scope:tutorial.Person)
 private:
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_email();
  inline void clear_has_email();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::tutorial::Person_PhoneNumber > phones_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr email_;
  ::google::protobuf::int32 id_;
  friend void  protobuf_InitDefaults_main_2eproto_impl();
  friend void  protobuf_AddDesc_main_2eproto_impl();
  friend void protobuf_AssignDesc_main_2eproto();
  friend void protobuf_ShutdownFile_main_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<Person> Person_default_instance_;

// -------------------------------------------------------------------

class AddressBook : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tutorial.AddressBook) */ {
 public:
  AddressBook();
  virtual ~AddressBook();

  AddressBook(const AddressBook& from);

  inline AddressBook& operator=(const AddressBook& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const AddressBook& default_instance();

  static const AddressBook* internal_default_instance();

  void Swap(AddressBook* other);

  // implements Message ----------------------------------------------

  inline AddressBook* New() const { return New(NULL); }

  AddressBook* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const AddressBook& from);
  void MergeFrom(const AddressBook& from);
  void Clear();
  bool IsInitialized() const;

  size_t ByteSizeLong() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(AddressBook* other);
  void UnsafeMergeFrom(const AddressBook& from);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .tutorial.Person people = 1;
  int people_size() const;
  void clear_people();
  static const int kPeopleFieldNumber = 1;
  const ::tutorial::Person& people(int index) const;
  ::tutorial::Person* mutable_people(int index);
  ::tutorial::Person* add_people();
  ::google::protobuf::RepeatedPtrField< ::tutorial::Person >*
      mutable_people();
  const ::google::protobuf::RepeatedPtrField< ::tutorial::Person >&
      people() const;

  // @@protoc_insertion_point(class_scope:tutorial.AddressBook)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::tutorial::Person > people_;
  friend void  protobuf_InitDefaults_main_2eproto_impl();
  friend void  protobuf_AddDesc_main_2eproto_impl();
  friend void protobuf_AssignDesc_main_2eproto();
  friend void protobuf_ShutdownFile_main_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<AddressBook> AddressBook_default_instance_;

// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Person_PhoneNumber

// required string number = 1;
inline bool Person_PhoneNumber::has_number() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Person_PhoneNumber::set_has_number() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Person_PhoneNumber::clear_has_number() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Person_PhoneNumber::clear_number() {
  number_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_number();
}
inline const ::std::string& Person_PhoneNumber::number() const {
  // @@protoc_insertion_point(field_get:tutorial.Person.PhoneNumber.number)
  return number_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Person_PhoneNumber::set_number(const ::std::string& value) {
  set_has_number();
  number_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:tutorial.Person.PhoneNumber.number)
}
inline void Person_PhoneNumber::set_number(const char* value) {
  set_has_number();
  number_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:tutorial.Person.PhoneNumber.number)
}
inline void Person_PhoneNumber::set_number(const char* value, size_t size) {
  set_has_number();
  number_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:tutorial.Person.PhoneNumber.number)
}
inline ::std::string* Person_PhoneNumber::mutable_number() {
  set_has_number();
  // @@protoc_insertion_point(field_mutable:tutorial.Person.PhoneNumber.number)
  return number_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Person_PhoneNumber::release_number() {
  // @@protoc_insertion_point(field_release:tutorial.Person.PhoneNumber.number)
  clear_has_number();
  return number_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Person_PhoneNumber::set_allocated_number(::std::string* number) {
  if (number != NULL) {
    set_has_number();
  } else {
    clear_has_number();
  }
  number_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), number);
  // @@protoc_insertion_point(field_set_allocated:tutorial.Person.PhoneNumber.number)
}

// optional .tutorial.Person.PhoneType type = 2 [default = HOME];
inline bool Person_PhoneNumber::has_type() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Person_PhoneNumber::set_has_type() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Person_PhoneNumber::clear_has_type() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Person_PhoneNumber::clear_type() {
  type_ = 1;
  clear_has_type();
}
inline ::tutorial::Person_PhoneType Person_PhoneNumber::type() const {
  // @@protoc_insertion_point(field_get:tutorial.Person.PhoneNumber.type)
  return static_cast< ::tutorial::Person_PhoneType >(type_);
}
inline void Person_PhoneNumber::set_type(::tutorial::Person_PhoneType value) {
  assert(::tutorial::Person_PhoneType_IsValid(value));
  set_has_type();
  type_ = value;
  // @@protoc_insertion_point(field_set:tutorial.Person.PhoneNumber.type)
}

inline const Person_PhoneNumber* Person_PhoneNumber::internal_default_instance() {
  return &Person_PhoneNumber_default_instance_.get();
}
// -------------------------------------------------------------------

// Person

// required string name = 1;
inline bool Person::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Person::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Person::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Person::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_name();
}
inline const ::std::string& Person::name() const {
  // @@protoc_insertion_point(field_get:tutorial.Person.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Person::set_name(const ::std::string& value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:tutorial.Person.name)
}
inline void Person::set_name(const char* value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:tutorial.Person.name)
}
inline void Person::set_name(const char* value, size_t size) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:tutorial.Person.name)
}
inline ::std::string* Person::mutable_name() {
  set_has_name();
  // @@protoc_insertion_point(field_mutable:tutorial.Person.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Person::release_name() {
  // @@protoc_insertion_point(field_release:tutorial.Person.name)
  clear_has_name();
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Person::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    set_has_name();
  } else {
    clear_has_name();
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:tutorial.Person.name)
}

// required int32 id = 2;
inline bool Person::has_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Person::set_has_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Person::clear_has_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Person::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 Person::id() const {
  // @@protoc_insertion_point(field_get:tutorial.Person.id)
  return id_;
}
inline void Person::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
  // @@protoc_insertion_point(field_set:tutorial.Person.id)
}

// optional string email = 3;
inline bool Person::has_email() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Person::set_has_email() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Person::clear_has_email() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Person::clear_email() {
  email_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_email();
}
inline const ::std::string& Person::email() const {
  // @@protoc_insertion_point(field_get:tutorial.Person.email)
  return email_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Person::set_email(const ::std::string& value) {
  set_has_email();
  email_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:tutorial.Person.email)
}
inline void Person::set_email(const char* value) {
  set_has_email();
  email_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:tutorial.Person.email)
}
inline void Person::set_email(const char* value, size_t size) {
  set_has_email();
  email_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:tutorial.Person.email)
}
inline ::std::string* Person::mutable_email() {
  set_has_email();
  // @@protoc_insertion_point(field_mutable:tutorial.Person.email)
  return email_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Person::release_email() {
  // @@protoc_insertion_point(field_release:tutorial.Person.email)
  clear_has_email();
  return email_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Person::set_allocated_email(::std::string* email) {
  if (email != NULL) {
    set_has_email();
  } else {
    clear_has_email();
  }
  email_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), email);
  // @@protoc_insertion_point(field_set_allocated:tutorial.Person.email)
}

// repeated .tutorial.Person.PhoneNumber phones = 4;
inline int Person::phones_size() const {
  return phones_.size();
}
inline void Person::clear_phones() {
  phones_.Clear();
}
inline const ::tutorial::Person_PhoneNumber& Person::phones(int index) const {
  // @@protoc_insertion_point(field_get:tutorial.Person.phones)
  return phones_.Get(index);
}
inline ::tutorial::Person_PhoneNumber* Person::mutable_phones(int index) {
  // @@protoc_insertion_point(field_mutable:tutorial.Person.phones)
  return phones_.Mutable(index);
}
inline ::tutorial::Person_PhoneNumber* Person::add_phones() {
  // @@protoc_insertion_point(field_add:tutorial.Person.phones)
  return phones_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::tutorial::Person_PhoneNumber >*
Person::mutable_phones() {
  // @@protoc_insertion_point(field_mutable_list:tutorial.Person.phones)
  return &phones_;
}
inline const ::google::protobuf::RepeatedPtrField< ::tutorial::Person_PhoneNumber >&
Person::phones() const {
  // @@protoc_insertion_point(field_list:tutorial.Person.phones)
  return phones_;
}

inline const Person* Person::internal_default_instance() {
  return &Person_default_instance_.get();
}
// -------------------------------------------------------------------

// AddressBook

// repeated .tutorial.Person people = 1;
inline int AddressBook::people_size() const {
  return people_.size();
}
inline void AddressBook::clear_people() {
  people_.Clear();
}
inline const ::tutorial::Person& AddressBook::people(int index) const {
  // @@protoc_insertion_point(field_get:tutorial.AddressBook.people)
  return people_.Get(index);
}
inline ::tutorial::Person* AddressBook::mutable_people(int index) {
  // @@protoc_insertion_point(field_mutable:tutorial.AddressBook.people)
  return people_.Mutable(index);
}
inline ::tutorial::Person* AddressBook::add_people() {
  // @@protoc_insertion_point(field_add:tutorial.AddressBook.people)
  return people_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::tutorial::Person >*
AddressBook::mutable_people() {
  // @@protoc_insertion_point(field_mutable_list:tutorial.AddressBook.people)
  return &people_;
}
inline const ::google::protobuf::RepeatedPtrField< ::tutorial::Person >&
AddressBook::people() const {
  // @@protoc_insertion_point(field_list:tutorial.AddressBook.people)
  return people_;
}

inline const AddressBook* AddressBook::internal_default_instance() {
  return &AddressBook_default_instance_.get();
}
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace tutorial

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::tutorial::Person_PhoneType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::tutorial::Person_PhoneType>() {
  return ::tutorial::Person_PhoneType_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_main_2eproto__INCLUDED
