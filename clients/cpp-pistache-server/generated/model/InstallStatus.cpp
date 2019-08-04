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


#include "InstallStatus.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

InstallStatus::InstallStatus()
{
    m_StatusIsSet = false;
    
}

InstallStatus::~InstallStatus()
{
}

void InstallStatus::validate()
{
    // TODO: implement validation
}

nlohmann::json InstallStatus::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_StatusIsSet)
    {
        val["status"] = ModelBase::toJson(m_Status);
    }
    

    return val;
}

void InstallStatus::fromJson(nlohmann::json& val)
{
    if(val.find("status") != val.end())
    {
        if(!val["status"].is_null())
        {
            InstallStatus_status newItem;
            newItem.fromJson(val["status"]);
            setStatus( newItem );
        }
        
    }
    
}


InstallStatus_status InstallStatus::getStatus() const
{
    return m_Status;
}
void InstallStatus::setStatus(InstallStatus_status const& value)
{
    m_Status = value;
    m_StatusIsSet = true;
}
bool InstallStatus::statusIsSet() const
{
    return m_StatusIsSet;
}
void InstallStatus::unsetStatus()
{
    m_StatusIsSet = false;
}

}
}
}
}

