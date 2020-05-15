/**
 * Adobe Experience Manager (AEM) API
 * Swagger AEM is an OpenAPI specification for Adobe Experience Manager (AEM) API
 *
 * OpenAPI spec version: 3.2.0-pre.0
 * Contact: opensource@shinesolutions.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 3.2.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "KeystoreInfo.h"

namespace org {
namespace openapitools {
namespace client {
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

web::json::value KeystoreInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Aliases )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[utility::conversions::to_string_t("aliases")] = web::json::value::array(jsonArray);
        }
    }
    if(m_ExistsIsSet)
    {
        val[utility::conversions::to_string_t("exists")] = ModelBase::toJson(m_Exists);
    }

    return val;
}

void KeystoreInfo::fromJson(web::json::value& val)
{
    {
        m_Aliases.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(utility::conversions::to_string_t("aliases")))
        {
        for( auto& item : val[utility::conversions::to_string_t("aliases")].as_array() )
        {
            if(item.is_null())
            {
                m_Aliases.push_back( std::shared_ptr<KeystoreItems>(nullptr) );
            }
            else
            {
                std::shared_ptr<KeystoreItems> newItem(new KeystoreItems());
                newItem->fromJson(item);
                m_Aliases.push_back( newItem );
            }
        }
        }
    }
    if(val.has_field(utility::conversions::to_string_t("exists")))
    {
        setExists(ModelBase::boolFromJson(val[utility::conversions::to_string_t("exists")]));
    }
}

void KeystoreInfo::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Aliases )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("aliases"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
        }
    }
    if(m_ExistsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("exists"), m_Exists));
    }
}

void KeystoreInfo::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    {
        m_Aliases.clear();
        if(multipart->hasContent(utility::conversions::to_string_t("aliases")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("aliases"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_Aliases.push_back( std::shared_ptr<KeystoreItems>(nullptr) );
            }
            else
            {
                std::shared_ptr<KeystoreItems> newItem(new KeystoreItems());
                newItem->fromJson(item);
                m_Aliases.push_back( newItem );
            }
        }
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("exists")))
    {
        setExists(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("exists"))));
    }
}

std::vector<std::shared_ptr<KeystoreItems>>& KeystoreInfo::getAliases()
{
    return m_Aliases;
}

void KeystoreInfo::setAliases(std::vector<std::shared_ptr<KeystoreItems>> value)
{
    m_Aliases = value;
    m_AliasesIsSet = true;
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


void KeystoreInfo::setExists(bool value)
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
