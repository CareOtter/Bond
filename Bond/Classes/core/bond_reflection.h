
//------------------------------------------------------------------------------
// This code was generated by a tool.
//
//   Tool : Bond Compiler 0.3.0.5
//   File : bond_reflection.h
//
// Changes to this file may cause incorrect behavior and will be lost when
// the code is regenerated.
// <auto-generated />
//------------------------------------------------------------------------------

#pragma once

#include "bond_types.h"
#include <bond/core/reflection.h>
#include "bond_const_reflection.h"

namespace bond
{
    //
    // SerializableExceptionBase
    //
    struct SerializableExceptionBase::Schema
    {
        typedef bond::no_base base;

        static const bond::Metadata metadata;
        
        private: static const bond::Metadata s_message_metadata;

        public: struct var
        {
            // message
            typedef bond::reflection::FieldTemplate<
                8189,
                bond::reflection::optional_field_modifier,
                SerializableExceptionBase,
                std::string,
                &SerializableExceptionBase::message,
                &s_message_metadata
            > message;
        };

        private: typedef boost::mpl::list<> fields0;
        private: typedef boost::mpl::push_front<fields0, var::message>::type fields1;

        public: typedef fields1::type fields;
        
        
        static bond::Metadata GetMetadata()
        {
            return bond::reflection::MetadataInit("SerializableExceptionBase", "bond.SerializableExceptionBase",
                bond::reflection::Attributes()
            );
        }
    };
    

    //
    // Void
    //
    struct Void::Schema
    {
        typedef bond::no_base base;

        static const bond::Metadata metadata;
        

        public: struct var
        {};

        private: typedef boost::mpl::list<> fields0;
        

        public: typedef fields0::type fields;
        
        
        static bond::Metadata GetMetadata()
        {
            return bond::reflection::MetadataInit("Void", "bond.Void",
                bond::reflection::Attributes()
            );
        }
    };
    

    //
    // GUID
    //
    struct GUID::Schema
    {
        typedef bond::no_base base;

        static const bond::Metadata metadata;
        
        private: static const bond::Metadata s_Data1_metadata;
        private: static const bond::Metadata s_Data2_metadata;
        private: static const bond::Metadata s_Data3_metadata;
        private: static const bond::Metadata s_Data4_metadata;

        public: struct var
        {
            // Data1
            typedef bond::reflection::FieldTemplate<
                0,
                bond::reflection::optional_field_modifier,
                GUID,
                uint32_t,
                &GUID::Data1,
                &s_Data1_metadata
            > Data1;
        
            // Data2
            typedef bond::reflection::FieldTemplate<
                1,
                bond::reflection::optional_field_modifier,
                GUID,
                uint16_t,
                &GUID::Data2,
                &s_Data2_metadata
            > Data2;
        
            // Data3
            typedef bond::reflection::FieldTemplate<
                2,
                bond::reflection::optional_field_modifier,
                GUID,
                uint16_t,
                &GUID::Data3,
                &s_Data3_metadata
            > Data3;
        
            // Data4
            typedef bond::reflection::FieldTemplate<
                3,
                bond::reflection::optional_field_modifier,
                GUID,
                uint64_t,
                &GUID::Data4,
                &s_Data4_metadata
            > Data4;
        };

        private: typedef boost::mpl::list<> fields0;
        private: typedef boost::mpl::push_front<fields0, var::Data4>::type fields1;
        private: typedef boost::mpl::push_front<fields1, var::Data3>::type fields2;
        private: typedef boost::mpl::push_front<fields2, var::Data2>::type fields3;
        private: typedef boost::mpl::push_front<fields3, var::Data1>::type fields4;

        public: typedef fields4::type fields;
        
        
        static bond::Metadata GetMetadata()
        {
            return bond::reflection::MetadataInit("GUID", "bond.GUID",
                bond::reflection::Attributes()
            );
        }
    };
    

    //
    // Variant
    //
    struct Variant::Schema
    {
        typedef bond::no_base base;

        static const bond::Metadata metadata;
        
        private: static const bond::Metadata s_uint_value_metadata;
        private: static const bond::Metadata s_int_value_metadata;
        private: static const bond::Metadata s_double_value_metadata;
        private: static const bond::Metadata s_string_value_metadata;
        private: static const bond::Metadata s_wstring_value_metadata;
        private: static const bond::Metadata s_nothing_metadata;

        public: struct var
        {
            // uint_value
            typedef bond::reflection::FieldTemplate<
                0,
                bond::reflection::optional_field_modifier,
                Variant,
                uint64_t,
                &Variant::uint_value,
                &s_uint_value_metadata
            > uint_value;
        
            // int_value
            typedef bond::reflection::FieldTemplate<
                1,
                bond::reflection::optional_field_modifier,
                Variant,
                int64_t,
                &Variant::int_value,
                &s_int_value_metadata
            > int_value;
        
            // double_value
            typedef bond::reflection::FieldTemplate<
                2,
                bond::reflection::optional_field_modifier,
                Variant,
                double,
                &Variant::double_value,
                &s_double_value_metadata
            > double_value;
        
            // string_value
            typedef bond::reflection::FieldTemplate<
                3,
                bond::reflection::optional_field_modifier,
                Variant,
                std::string,
                &Variant::string_value,
                &s_string_value_metadata
            > string_value;
        
            // wstring_value
            typedef bond::reflection::FieldTemplate<
                4,
                bond::reflection::optional_field_modifier,
                Variant,
                std::wstring,
                &Variant::wstring_value,
                &s_wstring_value_metadata
            > wstring_value;
        
            // nothing
            typedef bond::reflection::FieldTemplate<
                5,
                bond::reflection::optional_field_modifier,
                Variant,
                bool,
                &Variant::nothing,
                &s_nothing_metadata
            > nothing;
        };

        private: typedef boost::mpl::list<> fields0;
        private: typedef boost::mpl::push_front<fields0, var::nothing>::type fields1;
        private: typedef boost::mpl::push_front<fields1, var::wstring_value>::type fields2;
        private: typedef boost::mpl::push_front<fields2, var::string_value>::type fields3;
        private: typedef boost::mpl::push_front<fields3, var::double_value>::type fields4;
        private: typedef boost::mpl::push_front<fields4, var::int_value>::type fields5;
        private: typedef boost::mpl::push_front<fields5, var::uint_value>::type fields6;

        public: typedef fields6::type fields;
        
        
        static bond::Metadata GetMetadata()
        {
            return bond::reflection::MetadataInit("Variant", "bond.Variant",
                bond::reflection::Attributes()
            );
        }
    };
    

    //
    // Metadata
    //
    struct Metadata::Schema
    {
        typedef bond::no_base base;

        static const bond::Metadata metadata;
        
        private: static const bond::Metadata s_name_metadata;
        private: static const bond::Metadata s_qualified_name_metadata;
        private: static const bond::Metadata s_attributes_metadata;
        private: static const bond::Metadata s_modifier_metadata;
        private: static const bond::Metadata s_default_value_metadata;

        public: struct var
        {
            // name
            typedef bond::reflection::FieldTemplate<
                0,
                bond::reflection::optional_field_modifier,
                Metadata,
                std::string,
                &Metadata::name,
                &s_name_metadata
            > name;
        
            // qualified_name
            typedef bond::reflection::FieldTemplate<
                1,
                bond::reflection::optional_field_modifier,
                Metadata,
                std::string,
                &Metadata::qualified_name,
                &s_qualified_name_metadata
            > qualified_name;
        
            // attributes
            typedef bond::reflection::FieldTemplate<
                2,
                bond::reflection::optional_field_modifier,
                Metadata,
                std::map<std::string, std::string>,
                &Metadata::attributes,
                &s_attributes_metadata
            > attributes;
        
            // modifier
            typedef bond::reflection::FieldTemplate<
                3,
                bond::reflection::optional_field_modifier,
                Metadata,
                ::bond::Modifier,
                &Metadata::modifier,
                &s_modifier_metadata
            > modifier;
        
            // default_value
            typedef bond::reflection::FieldTemplate<
                4,
                bond::reflection::optional_field_modifier,
                Metadata,
                ::bond::Variant,
                &Metadata::default_value,
                &s_default_value_metadata
            > default_value;
        };

        private: typedef boost::mpl::list<> fields0;
        private: typedef boost::mpl::push_front<fields0, var::default_value>::type fields1;
        private: typedef boost::mpl::push_front<fields1, var::modifier>::type fields2;
        private: typedef boost::mpl::push_front<fields2, var::attributes>::type fields3;
        private: typedef boost::mpl::push_front<fields3, var::qualified_name>::type fields4;
        private: typedef boost::mpl::push_front<fields4, var::name>::type fields5;

        public: typedef fields5::type fields;
        
        
        static bond::Metadata GetMetadata()
        {
            return bond::reflection::MetadataInit("Metadata", "bond.Metadata",
                bond::reflection::Attributes()
            );
        }
    };
    

    //
    // TypeDef
    //
    struct TypeDef::Schema
    {
        typedef bond::no_base base;

        static const bond::Metadata metadata;
        
        private: static const bond::Metadata s_id_metadata;
        private: static const bond::Metadata s_struct_def_metadata;
        private: static const bond::Metadata s_element_metadata;
        private: static const bond::Metadata s_key_metadata;
        private: static const bond::Metadata s_bonded_type_metadata;

        public: struct var
        {
            // id
            typedef bond::reflection::FieldTemplate<
                0,
                bond::reflection::optional_field_modifier,
                TypeDef,
                ::bond::BondDataType,
                &TypeDef::id,
                &s_id_metadata
            > id;
        
            // struct_def
            typedef bond::reflection::FieldTemplate<
                1,
                bond::reflection::optional_field_modifier,
                TypeDef,
                uint16_t,
                &TypeDef::struct_def,
                &s_struct_def_metadata
            > struct_def;
        
            // element
            typedef bond::reflection::FieldTemplate<
                2,
                bond::reflection::optional_field_modifier,
                TypeDef,
                bond::nullable< ::bond::TypeDef>,
                &TypeDef::element,
                &s_element_metadata
            > element;
        
            // key
            typedef bond::reflection::FieldTemplate<
                3,
                bond::reflection::optional_field_modifier,
                TypeDef,
                bond::nullable< ::bond::TypeDef>,
                &TypeDef::key,
                &s_key_metadata
            > key;
        
            // bonded_type
            typedef bond::reflection::FieldTemplate<
                4,
                bond::reflection::optional_field_modifier,
                TypeDef,
                bool,
                &TypeDef::bonded_type,
                &s_bonded_type_metadata
            > bonded_type;
        };

        private: typedef boost::mpl::list<> fields0;
        private: typedef boost::mpl::push_front<fields0, var::bonded_type>::type fields1;
        private: typedef boost::mpl::push_front<fields1, var::key>::type fields2;
        private: typedef boost::mpl::push_front<fields2, var::element>::type fields3;
        private: typedef boost::mpl::push_front<fields3, var::struct_def>::type fields4;
        private: typedef boost::mpl::push_front<fields4, var::id>::type fields5;

        public: typedef fields5::type fields;
        
        
        static bond::Metadata GetMetadata()
        {
            return bond::reflection::MetadataInit("TypeDef", "bond.TypeDef",
                bond::reflection::Attributes()
            );
        }
    };
    

    //
    // FieldDef
    //
    struct FieldDef::Schema
    {
        typedef bond::no_base base;

        static const bond::Metadata metadata;
        
        private: static const bond::Metadata s_metadata_metadata;
        private: static const bond::Metadata s_id_metadata;
        private: static const bond::Metadata s_type_metadata;

        public: struct var
        {
            // metadata
            typedef bond::reflection::FieldTemplate<
                0,
                bond::reflection::optional_field_modifier,
                FieldDef,
                ::bond::Metadata,
                &FieldDef::metadata,
                &s_metadata_metadata
            > metadata;
        
            // id
            typedef bond::reflection::FieldTemplate<
                1,
                bond::reflection::optional_field_modifier,
                FieldDef,
                uint16_t,
                &FieldDef::id,
                &s_id_metadata
            > id;
        
            // type
            typedef bond::reflection::FieldTemplate<
                2,
                bond::reflection::optional_field_modifier,
                FieldDef,
                ::bond::TypeDef,
                &FieldDef::type,
                &s_type_metadata
            > type;
        };

        private: typedef boost::mpl::list<> fields0;
        private: typedef boost::mpl::push_front<fields0, var::type>::type fields1;
        private: typedef boost::mpl::push_front<fields1, var::id>::type fields2;
        private: typedef boost::mpl::push_front<fields2, var::metadata>::type fields3;

        public: typedef fields3::type fields;
        
        
        static bond::Metadata GetMetadata()
        {
            return bond::reflection::MetadataInit("FieldDef", "bond.FieldDef",
                bond::reflection::Attributes()
            );
        }
    };
    

    //
    // StructDef
    //
    struct StructDef::Schema
    {
        typedef bond::no_base base;

        static const bond::Metadata metadata;
        
        private: static const bond::Metadata s_metadata_metadata;
        private: static const bond::Metadata s_base_def_metadata;
        private: static const bond::Metadata s_fields_metadata;

        public: struct var
        {
            // metadata
            typedef bond::reflection::FieldTemplate<
                0,
                bond::reflection::optional_field_modifier,
                StructDef,
                ::bond::Metadata,
                &StructDef::metadata,
                &s_metadata_metadata
            > metadata;
        
            // base_def
            typedef bond::reflection::FieldTemplate<
                1,
                bond::reflection::optional_field_modifier,
                StructDef,
                bond::nullable< ::bond::TypeDef>,
                &StructDef::base_def,
                &s_base_def_metadata
            > base_def;
        
            // fields
            typedef bond::reflection::FieldTemplate<
                2,
                bond::reflection::optional_field_modifier,
                StructDef,
                std::vector< ::bond::FieldDef>,
                &StructDef::fields,
                &s_fields_metadata
            > fields;
        };

        private: typedef boost::mpl::list<> fields0;
        private: typedef boost::mpl::push_front<fields0, var::fields>::type fields1;
        private: typedef boost::mpl::push_front<fields1, var::base_def>::type fields2;
        private: typedef boost::mpl::push_front<fields2, var::metadata>::type fields3;

        public: typedef fields3::type fields;
        
        
        static bond::Metadata GetMetadata()
        {
            return bond::reflection::MetadataInit("StructDef", "bond.StructDef",
                bond::reflection::Attributes()
            );
        }
    };
    

    //
    // SchemaDef
    //
    struct SchemaDef::Schema
    {
        typedef bond::no_base base;

        static const bond::Metadata metadata;
        
        private: static const bond::Metadata s_structs_metadata;
        private: static const bond::Metadata s_root_metadata;

        public: struct var
        {
            // structs
            typedef bond::reflection::FieldTemplate<
                0,
                bond::reflection::optional_field_modifier,
                SchemaDef,
                std::vector< ::bond::StructDef>,
                &SchemaDef::structs,
                &s_structs_metadata
            > structs;
        
            // root
            typedef bond::reflection::FieldTemplate<
                1,
                bond::reflection::optional_field_modifier,
                SchemaDef,
                ::bond::TypeDef,
                &SchemaDef::root,
                &s_root_metadata
            > root;
        };

        private: typedef boost::mpl::list<> fields0;
        private: typedef boost::mpl::push_front<fields0, var::root>::type fields1;
        private: typedef boost::mpl::push_front<fields1, var::structs>::type fields2;

        public: typedef fields2::type fields;
        
        
        static bond::Metadata GetMetadata()
        {
            return bond::reflection::MetadataInit("SchemaDef", "bond.SchemaDef",
                bond::reflection::Attributes()
            );
        }
    };
    

    //
    // Box
    //
    template <typename T>
    struct Box<T>::Schema
    {
        typedef bond::no_base base;

        static const bond::Metadata metadata;
        
        private: static const bond::Metadata s_value_metadata;

        public: struct var
        {
            // value
            typedef bond::reflection::FieldTemplate<
                0,
                bond::reflection::optional_field_modifier,
                Box<T>,
                T,
                &Box<T>::value,
                &s_value_metadata
            > value;
        };

        private: typedef boost::mpl::list<> fields0;
        private: typedef typename boost::mpl::push_front<fields0, typename var::value>::type fields1;

        public: typedef typename fields1::type fields;
        
        Schema()
        {
            // Force instantiation of template statics
            (void)metadata;
            (void)s_value_metadata;
        }
        
        static bond::Metadata GetMetadata()
        {
            return bond::reflection::MetadataInit<boost::mpl::list<T> >("Box", "bond.Box",
                bond::reflection::Attributes()
            );
        }
    };
    
    template <typename T>
    const bond::Metadata Box<T>::Schema::metadata
        = Box<T>::Schema::GetMetadata();
    
    template <typename T>
    const bond::Metadata Box<T>::Schema::s_value_metadata
        = bond::reflection::MetadataInit("value");

    
} // namespace bond