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

/*
* ConsoleApiImpl.h
*
* 
*/

#ifndef CONSOLE_API_IMPL_H_
#define CONSOLE_API_IMPL_H_


#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>
#include <memory>

#include <ConsoleApi.h>

#include <pistache/optional.h>

#include "SamlConfigurationInfo.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class ConsoleApiImpl : public org::openapitools::server::api::ConsoleApi {
public:
    ConsoleApiImpl(Pistache::Address addr);
    ~ConsoleApiImpl() { };

    void get_aem_product_info(Pistache::Http::ResponseWriter &response);
    void get_config_mgr(Pistache::Http::ResponseWriter &response);
    void post_bundle(const std::string &name, const Pistache::Optional<std::string> &action, Pistache::Http::ResponseWriter &response);
    void post_jmx_repository(const std::string &action, Pistache::Http::ResponseWriter &response);
    void post_saml_configuration(const Pistache::Optional<bool> &post, const Pistache::Optional<bool> &apply, const Pistache::Optional<bool> &delete, const Pistache::Optional<std::string> &action, const Pistache::Optional<std::string> &Dollarlocation, const Pistache::Optional<std::string> &path, const Pistache::Optional<int32_t> &servicePeriodranking, const Pistache::Optional<std::string> &idpUrl, const Pistache::Optional<std::string> &idpCertAlias, const Pistache::Optional<bool> &idpHttpRedirect, const Pistache::Optional<std::string> &serviceProviderEntityId, const Pistache::Optional<std::string> &assertionConsumerServiceURL, const Pistache::Optional<std::string> &spPrivateKeyAlias, const Pistache::Optional<std::string> &keyStorePassword, const Pistache::Optional<std::string> &defaultRedirectUrl, const Pistache::Optional<std::string> &userIDAttribute, const Pistache::Optional<bool> &useEncryption, const Pistache::Optional<bool> &createUser, const Pistache::Optional<bool> &addGroupMemberships, const Pistache::Optional<std::string> &groupMembershipAttribute, const Pistache::Optional<std::string> &defaultGroups, const Pistache::Optional<std::string> &nameIdFormat, const Pistache::Optional<std::string> &synchronizeAttributes, const Pistache::Optional<bool> &handleLogout, const Pistache::Optional<std::string> &logoutUrl, const Pistache::Optional<int32_t> &clockTolerance, const Pistache::Optional<std::string> &digestMethod, const Pistache::Optional<std::string> &signatureMethod, const Pistache::Optional<std::string> &userIntermediatePath, const Pistache::Optional<std::string> &propertylist, Pistache::Http::ResponseWriter &response);

};

}
}
}
}



#endif