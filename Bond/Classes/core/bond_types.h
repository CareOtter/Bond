
//------------------------------------------------------------------------------
// This code was generated by a tool.
//
//   Tool : Bond Compiler 0.3.0.5
//   File : bond_types.h
//
// Changes to this file may cause incorrect behavior and will be lost when
// the code is regenerated.
// <auto-generated />
//------------------------------------------------------------------------------

#pragma once

#include <bond/core/bond_version.h>

#if BOND_VERSION < 0x302
#error This file was generated by a newer version of Bond compiler
#error and is incompatible with your version Bond library.
#endif

#if BOND_MIN_CODEGEN_VERSION > 0x0305
#error This file was generated by an older version of Bond compiler
#error and is incompatible with your version Bond library.
#endif

#include <bond/core/config.h>
#include <bond/core/containers.h>
#include <bond/core/nullable.h>
#include "bond_enum.h"
#include "bond_const_types.h"

namespace bond
{
    
    struct SerializableExceptionBase
    {
        std::string message;
        
        SerializableExceptionBase()
        {
        }

        
#ifndef BOND_NO_CXX11_DEFAULTED_FUNCTIONS
        // Compiler generated copy ctor OK
        SerializableExceptionBase(const SerializableExceptionBase& other) = default;
#endif
        
#ifndef BOND_NO_CXX11_RVALUE_REFERENCES
        SerializableExceptionBase(SerializableExceptionBase&& other)
          : message(std::move(other.message))
        {
        }
#endif
        
        
#ifndef BOND_NO_CXX11_DEFAULTED_FUNCTIONS
        // Compiler generated operator= OK
        SerializableExceptionBase& operator=(const SerializableExceptionBase& other) = default;
#endif

        bool operator==(const SerializableExceptionBase& other) const
        {
            return true
                && (message == other.message);
        }

        bool operator!=(const SerializableExceptionBase& other) const
        {
            return !(*this == other);
        }

        void swap(SerializableExceptionBase& other)
        {
            using std::swap;
            swap(message, other.message);
        }

        struct Schema;

    protected:
        void InitMetadata(const char*, const char*)
        {
        }
    };

    inline void swap(SerializableExceptionBase& left, SerializableExceptionBase& right)
    {
        left.swap(right);
    }

    
    struct Void
    {
        
        Void()
        {
        }

        
#ifndef BOND_NO_CXX11_DEFAULTED_FUNCTIONS
        // Compiler generated copy ctor OK
        Void(const Void& other) = default;
#endif
        
#ifndef BOND_NO_CXX11_RVALUE_REFERENCES
        Void(Void&&)
        {
        }
#endif
        
        
#ifndef BOND_NO_CXX11_DEFAULTED_FUNCTIONS
        // Compiler generated operator= OK
        Void& operator=(const Void& other) = default;
#endif

        bool operator==(const Void&) const
        {
            return true;
        }

        bool operator!=(const Void& other) const
        {
            return !(*this == other);
        }

        void swap(Void&)
        {
            using std::swap;
        }

        struct Schema;

    protected:
        void InitMetadata(const char*, const char*)
        {
        }
    };

    inline void swap(Void& left, Void& right)
    {
        left.swap(right);
    }

    
    struct GUID
    {
        uint32_t Data1;
        uint16_t Data2;
        uint16_t Data3;
        uint64_t Data4;
        
        GUID()
          : Data1(),
            Data2(),
            Data3(),
            Data4()
        {
        }

        
#ifndef BOND_NO_CXX11_DEFAULTED_FUNCTIONS
        // Compiler generated copy ctor OK
        GUID(const GUID& other) = default;
#endif
        
#ifndef BOND_NO_CXX11_RVALUE_REFERENCES
        GUID(GUID&& other)
          : Data1(std::move(other.Data1)),
            Data2(std::move(other.Data2)),
            Data3(std::move(other.Data3)),
            Data4(std::move(other.Data4))
        {
        }
#endif
        
        
#ifndef BOND_NO_CXX11_DEFAULTED_FUNCTIONS
        // Compiler generated operator= OK
        GUID& operator=(const GUID& other) = default;
#endif

        bool operator==(const GUID& other) const
        {
            return true
                && (Data1 == other.Data1)
                && (Data2 == other.Data2)
                && (Data3 == other.Data3)
                && (Data4 == other.Data4);
        }

        bool operator!=(const GUID& other) const
        {
            return !(*this == other);
        }

        void swap(GUID& other)
        {
            using std::swap;
            swap(Data1, other.Data1);
            swap(Data2, other.Data2);
            swap(Data3, other.Data3);
            swap(Data4, other.Data4);
        }

        struct Schema;

    protected:
        void InitMetadata(const char*, const char*)
        {
        }
    };

    inline void swap(GUID& left, GUID& right)
    {
        left.swap(right);
    }

    
    namespace _bond_enumerators
    {
    namespace Modifier
    {
        
        extern const std::map<enum Modifier, std::string> _value_to_name_Modifier;
        extern const std::map<std::string, enum Modifier> _name_to_value_Modifier;

        inline
        const char* GetTypeName(enum Modifier)
        {
            return "Modifier";
        }

        inline
        const char* GetTypeName(enum Modifier, const bond::qualified_name_tag&)
        {
            return "bond.Modifier";
        }

        inline
        const std::map<enum Modifier, std::string>& GetValueToNameMap(enum Modifier)
        {
            return _value_to_name_Modifier;
        }

        inline
        const std::map<std::string, enum Modifier>& GetNameToValueMap(enum Modifier)
        {
            return _name_to_value_Modifier;
        }

        const std::string& ToString(enum Modifier value);

        void FromString(const std::string& name, enum Modifier& value);

        inline
        bool ToEnum(enum Modifier& value, const std::string& name)
        {
            std::map<std::string, enum Modifier>::const_iterator it =
                _name_to_value_Modifier.find(name);

            if (_name_to_value_Modifier.end() == it)
                return false;

            value = it->second;

            return true;
        }
    } // namespace Modifier
    } // namespace _bond_enumerators

    

    
    struct Variant
    {
        uint64_t uint_value;
        int64_t int_value;
        double double_value;
        std::string string_value;
        std::wstring wstring_value;
        bool nothing;
        
        Variant()
          : uint_value(),
            int_value(),
            double_value(),
            nothing()
        {
        }

        
#ifndef BOND_NO_CXX11_DEFAULTED_FUNCTIONS
        // Compiler generated copy ctor OK
        Variant(const Variant& other) = default;
#endif
        
#ifndef BOND_NO_CXX11_RVALUE_REFERENCES
        Variant(Variant&& other)
          : uint_value(std::move(other.uint_value)),
            int_value(std::move(other.int_value)),
            double_value(std::move(other.double_value)),
            string_value(std::move(other.string_value)),
            wstring_value(std::move(other.wstring_value)),
            nothing(std::move(other.nothing))
        {
        }
#endif
        
        
#ifndef BOND_NO_CXX11_DEFAULTED_FUNCTIONS
        // Compiler generated operator= OK
        Variant& operator=(const Variant& other) = default;
#endif

        bool operator==(const Variant& other) const
        {
            return true
                && (uint_value == other.uint_value)
                && (int_value == other.int_value)
                && (double_value == other.double_value)
                && (string_value == other.string_value)
                && (wstring_value == other.wstring_value)
                && (nothing == other.nothing);
        }

        bool operator!=(const Variant& other) const
        {
            return !(*this == other);
        }

        void swap(Variant& other)
        {
            using std::swap;
            swap(uint_value, other.uint_value);
            swap(int_value, other.int_value);
            swap(double_value, other.double_value);
            swap(string_value, other.string_value);
            swap(wstring_value, other.wstring_value);
            swap(nothing, other.nothing);
        }

        struct Schema;

    protected:
        void InitMetadata(const char*, const char*)
        {
        }
    };

    inline void swap(Variant& left, Variant& right)
    {
        left.swap(right);
    }

    
    struct Metadata
    {
        std::string name;
        std::string qualified_name;
        std::map<std::string, std::string> attributes;
        ::bond::Modifier modifier;
        ::bond::Variant default_value;
        
        Metadata()
          : modifier(::bond::_bond_enumerators::Modifier::Optional)
        {
        }

        
#ifndef BOND_NO_CXX11_DEFAULTED_FUNCTIONS
        // Compiler generated copy ctor OK
        Metadata(const Metadata& other) = default;
#endif
        
#ifndef BOND_NO_CXX11_RVALUE_REFERENCES
        Metadata(Metadata&& other)
          : name(std::move(other.name)),
            qualified_name(std::move(other.qualified_name)),
            attributes(std::move(other.attributes)),
            modifier(std::move(other.modifier)),
            default_value(std::move(other.default_value))
        {
        }
#endif
        
        
#ifndef BOND_NO_CXX11_DEFAULTED_FUNCTIONS
        // Compiler generated operator= OK
        Metadata& operator=(const Metadata& other) = default;
#endif

        bool operator==(const Metadata& other) const
        {
            return true
                && (name == other.name)
                && (qualified_name == other.qualified_name)
                && (attributes == other.attributes)
                && (modifier == other.modifier)
                && (default_value == other.default_value);
        }

        bool operator!=(const Metadata& other) const
        {
            return !(*this == other);
        }

        void swap(Metadata& other)
        {
            using std::swap;
            swap(name, other.name);
            swap(qualified_name, other.qualified_name);
            swap(attributes, other.attributes);
            swap(modifier, other.modifier);
            swap(default_value, other.default_value);
        }

        struct Schema;

    protected:
        void InitMetadata(const char*, const char*)
        {
        }
    };

    inline void swap(Metadata& left, Metadata& right)
    {
        left.swap(right);
    }

    
    struct TypeDef
    {
        ::bond::BondDataType id;
        uint16_t struct_def;
        bond::nullable< ::bond::TypeDef> element;
        bond::nullable< ::bond::TypeDef> key;
        bool bonded_type;
        
        TypeDef()
          : id(::bond::_bond_enumerators::BondDataType::BT_STRUCT),
            struct_def(0),
            bonded_type()
        {
        }

        
#ifndef BOND_NO_CXX11_DEFAULTED_FUNCTIONS
        // Compiler generated copy ctor OK
        TypeDef(const TypeDef& other) = default;
#endif
        
#ifndef BOND_NO_CXX11_RVALUE_REFERENCES
        TypeDef(TypeDef&& other)
          : id(std::move(other.id)),
            struct_def(std::move(other.struct_def)),
            element(std::move(other.element)),
            key(std::move(other.key)),
            bonded_type(std::move(other.bonded_type))
        {
        }
#endif
        
        
#ifndef BOND_NO_CXX11_DEFAULTED_FUNCTIONS
        // Compiler generated operator= OK
        TypeDef& operator=(const TypeDef& other) = default;
#endif

        bool operator==(const TypeDef& other) const
        {
            return true
                && (id == other.id)
                && (struct_def == other.struct_def)
                && (element == other.element)
                && (key == other.key)
                && (bonded_type == other.bonded_type);
        }

        bool operator!=(const TypeDef& other) const
        {
            return !(*this == other);
        }

        void swap(TypeDef& other)
        {
            using std::swap;
            swap(id, other.id);
            swap(struct_def, other.struct_def);
            swap(element, other.element);
            swap(key, other.key);
            swap(bonded_type, other.bonded_type);
        }

        struct Schema;

    protected:
        void InitMetadata(const char*, const char*)
        {
        }
    };

    inline void swap(TypeDef& left, TypeDef& right)
    {
        left.swap(right);
    }

    
    struct FieldDef
    {
        ::bond::Metadata metadata;
        uint16_t id;
        ::bond::TypeDef type;
        
        FieldDef()
          : id()
        {
        }

        
#ifndef BOND_NO_CXX11_DEFAULTED_FUNCTIONS
        // Compiler generated copy ctor OK
        FieldDef(const FieldDef& other) = default;
#endif
        
#ifndef BOND_NO_CXX11_RVALUE_REFERENCES
        FieldDef(FieldDef&& other)
          : metadata(std::move(other.metadata)),
            id(std::move(other.id)),
            type(std::move(other.type))
        {
        }
#endif
        
        
#ifndef BOND_NO_CXX11_DEFAULTED_FUNCTIONS
        // Compiler generated operator= OK
        FieldDef& operator=(const FieldDef& other) = default;
#endif

        bool operator==(const FieldDef& other) const
        {
            return true
                && (metadata == other.metadata)
                && (id == other.id)
                && (type == other.type);
        }

        bool operator!=(const FieldDef& other) const
        {
            return !(*this == other);
        }

        void swap(FieldDef& other)
        {
            using std::swap;
            swap(metadata, other.metadata);
            swap(id, other.id);
            swap(type, other.type);
        }

        struct Schema;

    protected:
        void InitMetadata(const char*, const char*)
        {
        }
    };

    inline void swap(FieldDef& left, FieldDef& right)
    {
        left.swap(right);
    }

    
    struct StructDef
    {
        ::bond::Metadata metadata;
        bond::nullable< ::bond::TypeDef> base_def;
        std::vector< ::bond::FieldDef> fields;
        
        StructDef()
        {
        }

        
#ifndef BOND_NO_CXX11_DEFAULTED_FUNCTIONS
        // Compiler generated copy ctor OK
        StructDef(const StructDef& other) = default;
#endif
        
#ifndef BOND_NO_CXX11_RVALUE_REFERENCES
        StructDef(StructDef&& other)
          : metadata(std::move(other.metadata)),
            base_def(std::move(other.base_def)),
            fields(std::move(other.fields))
        {
        }
#endif
        
        
#ifndef BOND_NO_CXX11_DEFAULTED_FUNCTIONS
        // Compiler generated operator= OK
        StructDef& operator=(const StructDef& other) = default;
#endif

        bool operator==(const StructDef& other) const
        {
            return true
                && (metadata == other.metadata)
                && (base_def == other.base_def)
                && (fields == other.fields);
        }

        bool operator!=(const StructDef& other) const
        {
            return !(*this == other);
        }

        void swap(StructDef& other)
        {
            using std::swap;
            swap(metadata, other.metadata);
            swap(base_def, other.base_def);
            swap(fields, other.fields);
        }

        struct Schema;

    protected:
        void InitMetadata(const char*, const char*)
        {
        }
    };

    inline void swap(StructDef& left, StructDef& right)
    {
        left.swap(right);
    }

    
    struct SchemaDef
    {
        std::vector< ::bond::StructDef> structs;
        ::bond::TypeDef root;
        
        SchemaDef()
        {
        }

        
#ifndef BOND_NO_CXX11_DEFAULTED_FUNCTIONS
        // Compiler generated copy ctor OK
        SchemaDef(const SchemaDef& other) = default;
#endif
        
#ifndef BOND_NO_CXX11_RVALUE_REFERENCES
        SchemaDef(SchemaDef&& other)
          : structs(std::move(other.structs)),
            root(std::move(other.root))
        {
        }
#endif
        
        
#ifndef BOND_NO_CXX11_DEFAULTED_FUNCTIONS
        // Compiler generated operator= OK
        SchemaDef& operator=(const SchemaDef& other) = default;
#endif

        bool operator==(const SchemaDef& other) const
        {
            return true
                && (structs == other.structs)
                && (root == other.root);
        }

        bool operator!=(const SchemaDef& other) const
        {
            return !(*this == other);
        }

        void swap(SchemaDef& other)
        {
            using std::swap;
            swap(structs, other.structs);
            swap(root, other.root);
        }

        struct Schema;

    protected:
        void InitMetadata(const char*, const char*)
        {
        }
    };

    inline void swap(SchemaDef& left, SchemaDef& right)
    {
        left.swap(right);
    }

    
    template <typename T>
    struct Box
    {
        T value;
        
        Box()
          : value()
        {
        }

        
#ifndef BOND_NO_CXX11_DEFAULTED_FUNCTIONS
        // Compiler generated copy ctor OK
        Box(const Box& other) = default;
#endif
        
#ifndef BOND_NO_CXX11_RVALUE_REFERENCES
        Box(Box&& other)
          : value(std::move(other.value))
        {
        }
#endif
        
        
#ifndef BOND_NO_CXX11_DEFAULTED_FUNCTIONS
        // Compiler generated operator= OK
        Box& operator=(const Box& other) = default;
#endif

        bool operator==(const Box& other) const
        {
            return true
                && (value == other.value);
        }

        bool operator!=(const Box& other) const
        {
            return !(*this == other);
        }

        void swap(Box& other)
        {
            using std::swap;
            swap(value, other.value);
        }

        struct Schema;

    protected:
        void InitMetadata(const char*, const char*)
        {
        }
    };

    template <typename T>
    inline void swap(Box<T>& left, Box<T>& right)
    {
        left.swap(right);
    }
} // namespace bond

