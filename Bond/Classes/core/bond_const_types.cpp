
//------------------------------------------------------------------------------
// This code was generated by a tool.
//
//   Tool : Bond Compiler 0.3.0.5
//   File : bond_const_types.cpp
//
// Changes to this file may cause incorrect behavior and will be lost when
// the code is regenerated.
// <auto-generated />
//------------------------------------------------------------------------------

#include "bond_const_reflection.h"
#include <bond/core/exception.h>

namespace bond
{
    
    namespace _bond_enumerators
    {
    namespace BondDataType
    {
        const
        std::map<std::string, enum BondDataType> _name_to_value_BondDataType =
            boost::assign::map_list_of<std::string, enum BondDataType>
                ("BT_STOP", BT_STOP)
                ("BT_STOP_BASE", BT_STOP_BASE)
                ("BT_BOOL", BT_BOOL)
                ("BT_UINT8", BT_UINT8)
                ("BT_UINT16", BT_UINT16)
                ("BT_UINT32", BT_UINT32)
                ("BT_UINT64", BT_UINT64)
                ("BT_FLOAT", BT_FLOAT)
                ("BT_DOUBLE", BT_DOUBLE)
                ("BT_STRING", BT_STRING)
                ("BT_STRUCT", BT_STRUCT)
                ("BT_LIST", BT_LIST)
                ("BT_SET", BT_SET)
                ("BT_MAP", BT_MAP)
                ("BT_INT8", BT_INT8)
                ("BT_INT16", BT_INT16)
                ("BT_INT32", BT_INT32)
                ("BT_INT64", BT_INT64)
                ("BT_WSTRING", BT_WSTRING)
                ("BT_UNAVAILABLE", BT_UNAVAILABLE);

        const
        std::map<enum BondDataType, std::string> _value_to_name_BondDataType =
            bond::reverse_map(_name_to_value_BondDataType);

        const std::string& ToString(enum BondDataType value)
        {
            std::map<enum BondDataType, std::string>::const_iterator it =
                GetValueToNameMap(value).find(value);

            if (GetValueToNameMap(value).end() == it)
                bond::InvalidEnumValueException(value, "BondDataType");

            return it->second;
        }

        void FromString(const std::string& name, enum BondDataType& value)
        {
            std::map<std::string, enum BondDataType>::const_iterator it =
                _name_to_value_BondDataType.find(name);

            if (_name_to_value_BondDataType.end() == it)
                bond::InvalidEnumValueException(name.c_str(), "BondDataType");

            value = it->second;
        }

    } // namespace BondDataType
    } // namespace _bond_enumerators

    
    namespace _bond_enumerators
    {
    namespace ProtocolType
    {
        const
        std::map<std::string, enum ProtocolType> _name_to_value_ProtocolType =
            boost::assign::map_list_of<std::string, enum ProtocolType>
                ("MARSHALED_PROTOCOL", MARSHALED_PROTOCOL)
                ("FAST_PROTOCOL", FAST_PROTOCOL)
                ("COMPACT_PROTOCOL", COMPACT_PROTOCOL)
                ("SIMPLE_JSON_PROTOCOL", SIMPLE_JSON_PROTOCOL)
                ("SIMPLE_PROTOCOL", SIMPLE_PROTOCOL);

        const
        std::map<enum ProtocolType, std::string> _value_to_name_ProtocolType =
            bond::reverse_map(_name_to_value_ProtocolType);

        const std::string& ToString(enum ProtocolType value)
        {
            std::map<enum ProtocolType, std::string>::const_iterator it =
                GetValueToNameMap(value).find(value);

            if (GetValueToNameMap(value).end() == it)
                bond::InvalidEnumValueException(value, "ProtocolType");

            return it->second;
        }

        void FromString(const std::string& name, enum ProtocolType& value)
        {
            std::map<std::string, enum ProtocolType>::const_iterator it =
                _name_to_value_ProtocolType.find(name);

            if (_name_to_value_ProtocolType.end() == it)
                bond::InvalidEnumValueException(name.c_str(), "ProtocolType");

            value = it->second;
        }

    } // namespace ProtocolType
    } // namespace _bond_enumerators

    
} // namespace bond