/**
* Adobe Experience Manager (AEM) API
* Swagger AEM is an OpenAPI specification for Adobe Experience Manager (AEM) API
*
* OpenAPI spec version: 3.2.0-pre.0
* Contact: opensource@shinesolutions.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#include "KeystoreInfo.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

KeystoreInfo::KeystoreInfo()
{
    m_AliasesIsSet = false;
    m_Exists = false;
    m_ExistsIsSet = false;
    
}

KeystoreInfo::~KeystoreInfo()
{
}

void KeystoreInfo::validate()
{
    // TODO: implement validation
}

nlohmann::json KeystoreInfo::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    {
        nlohmann::json jsonArray;
        for( auto& item : m_Aliases )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            val["aliases"] = jsonArray;
        }
    }
    if(m_ExistsIsSet)
    {
        val["exists"] = m_Exists;
    }
    

    return val;
}

void KeystoreInfo::fromJson(nlohmann::json& val)
{
    {
        m_Aliases.clear();
        nlohmann::json jsonArray;
        if(val.find("aliases") != val.end())
        {
        for( auto& item : val["aliases"] )
        {
            
            if(item.is_null())
            {
                m_Aliases.push_back( KeystoreItems() );
            }
            else
            {
                KeystoreItems newItem;
                newItem.fromJson(item);
                m_Aliases.push_back( newItem );
            }
            
        }
        }
    }
    if(val.find("exists") != val.end())
    {
        setExists(val.at("exists"));
    }
    
}


std::vector<KeystoreItems>& KeystoreInfo::getAliases()
{
    return m_Aliases;
}
bool KeystoreInfo::aliasesIsSet() const
{
    return m_AliasesIsSet;
}
void KeystoreInfo::unsetAliases()
{
    m_AliasesIsSet = false;
}
bool KeystoreInfo::isExists() const
{
    return m_Exists;
}
void KeystoreInfo::setExists(bool const value)
{
    m_Exists = value;
    m_ExistsIsSet = true;
}
bool KeystoreInfo::existsIsSet() const
{
    return m_ExistsIsSet;
}
void KeystoreInfo::unsetExists()
{
    m_ExistsIsSet = false;
}

}
}
}
}

