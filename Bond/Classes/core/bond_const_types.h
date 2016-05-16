
//------------------------------------------------------------------------------
// This code was generated by a tool.
//
//   Tool : Bond Compiler 0.3.0.5
//   File : bond_const_types.h
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

#include "bond_const_enum.h"

namespace bond
{
    
    namespace _bond_enumerators
    {
    namespace BondDataType
    {
        
        extern const std::map<enum BondDataType, std::string> _value_to_name_BondDataType;
        extern const std::map<std::string, enum BondDataType> _name_to_value_BondDataType;

        inline
        const char* GetTypeName(enum BondDataType)
        {
            return "BondDataType";
        }

        inline
        const char* GetTypeName(enum BondDataType, const bond::qualified_name_tag&)
        {
            return "bond.BondDataType";
        }

        inline
        const std::map<enum BondDataType, std::string>& GetValueToNameMap(enum BondDataType)
        {
            return _value_to_name_BondDataType;
        }

        inline
        const std::map<std::string, enum BondDataType>& GetNameToValueMap(enum BondDataType)
        {
            return _name_to_value_BondDataType;
        }

        const std::string& ToString(enum BondDataType value);

        void FromString(const std::string& name, enum BondDataType& value);

        inline
        bool ToEnum(enum BondDataType& value, const std::string& name)
        {
            std::map<std::string, enum BondDataType>::const_iterator it =
                _name_to_value_BondDataType.find(name);

            if (_name_to_value_BondDataType.end() == it)
                return false;

            value = it->second;

            return true;
        }
    } // namespace BondDataType
    } // namespace _bond_enumerators

    

    
    namespace _bond_enumerators
    {
    namespace ProtocolType
    {
        
        extern const std::map<enum ProtocolType, std::string> _value_to_name_ProtocolType;
        extern const std::map<std::string, enum ProtocolType> _name_to_value_ProtocolType;

        inline
        const char* GetTypeName(enum ProtocolType)
        {
            return "ProtocolType";
        }

        inline
        const char* GetTypeName(enum ProtocolType, const bond::qualified_name_tag&)
        {
            return "bond.ProtocolType";
        }

        inline
        const std::map<enum ProtocolType, std::string>& GetValueToNameMap(enum ProtocolType)
        {
            return _value_to_name_ProtocolType;
        }

        inline
        const std::map<std::string, enum ProtocolType>& GetNameToValueMap(enum ProtocolType)
        {
            return _name_to_value_ProtocolType;
        }

        const std::string& ToString(enum ProtocolType value);

        void FromString(const std::string& name, enum ProtocolType& value);

        inline
        bool ToEnum(enum ProtocolType& value, const std::string& name)
        {
            std::map<std::string, enum ProtocolType>::const_iterator it =
                _name_to_value_ProtocolType.find(name);

            if (_name_to_value_ProtocolType.end() == it)
                return false;

            value = it->second;

            return true;
        }
    } // namespace ProtocolType
    } // namespace _bond_enumerators

    
} // namespace bond
