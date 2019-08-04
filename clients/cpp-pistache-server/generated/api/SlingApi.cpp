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

#include "SlingApi.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

SlingApi::SlingApi(Pistache::Address addr)
    : httpEndpoint(addr)
{ };

void SlingApi::init(size_t thr = 2) {
    auto opts = Pistache::Http::Endpoint::options()
        .threads(thr)
        .flags(Pistache::Tcp::Options::InstallSignalHandler);
    httpEndpoint.init(opts);
    setupRoutes();
}

void SlingApi::start() {
    httpEndpoint.setHandler(router.handler());
    httpEndpoint.serve();
}

void SlingApi::shutdown() {
    httpEndpoint.shutdown();
}

void SlingApi::setupRoutes() {
    using namespace Pistache::Rest;

    Routes::Delete(router, base + "/etc/replication/agents.:runmode/:name", Routes::bind(&SlingApi::delete_agent_handler, this));
    Routes::Delete(router, base + "/:path/:name", Routes::bind(&SlingApi::delete_node_handler, this));
    Routes::Get(router, base + "/etc/replication/agents.:runmode/:name", Routes::bind(&SlingApi::get_agent_handler, this));
    Routes::Get(router, base + "/etc/replication/agents.:runmode.-1.json", Routes::bind(&SlingApi::get_agents_handler, this));
    Routes::Get(router, base + "/:intermediatePath/:authorizableId.ks.json", Routes::bind(&SlingApi::get_authorizable_keystore_handler, this));
    Routes::Get(router, base + "/:intermediatePath/:authorizableId/keystore/store.p12", Routes::bind(&SlingApi::get_keystore_handler, this));
    Routes::Get(router, base + "/:path/:name", Routes::bind(&SlingApi::get_node_handler, this));
    Routes::Get(router, base + "/etc/packages/:group/:name-:version.zip", Routes::bind(&SlingApi::get_package_handler, this));
    Routes::Get(router, base + "/etc/packages/:group/:name-:version.zip/jcr:content/vlt:definition/filter.tidy.2.json", Routes::bind(&SlingApi::get_package_filter_handler, this));
    Routes::Get(router, base + "/bin/querybuilder.json", Routes::bind(&SlingApi::get_query_handler, this));
    Routes::Get(router, base + "/etc/truststore/truststore.p12", Routes::bind(&SlingApi::get_truststore_handler, this));
    Routes::Get(router, base + "/libs/granite/security/truststore.json", Routes::bind(&SlingApi::get_truststore_info_handler, this));
    Routes::Post(router, base + "/etc/replication/agents.:runmode/:name", Routes::bind(&SlingApi::post_agent_handler, this));
    Routes::Post(router, base + "/:intermediatePath/:authorizableId.ks.html", Routes::bind(&SlingApi::post_authorizable_keystore_handler, this));
    Routes::Post(router, base + "/libs/granite/security/post/authorizables", Routes::bind(&SlingApi::post_authorizables_handler, this));
    Routes::Post(router, base + "/apps/system/config/com.adobe.granite.auth.saml.SamlAuthenticationHandler.config", Routes::bind(&SlingApi::post_config_adobe_granite_saml_authentication_handler_handler, this));
    Routes::Post(router, base + "/apps/system/config/org.apache.felix.http", Routes::bind(&SlingApi::post_config_apache_felix_jetty_based_http_service_handler, this));
    Routes::Post(router, base + "/apps/system/config/org.apache.http.proxyconfigurator.config", Routes::bind(&SlingApi::post_config_apache_http_components_proxy_configuration_handler, this));
    Routes::Post(router, base + "/apps/system/config/org.apache.sling.jcr.davex.impl.servlets.SlingDavExServlet", Routes::bind(&SlingApi::post_config_apache_sling_dav_ex_servlet_handler, this));
    Routes::Post(router, base + "/apps/system/config/org.apache.sling.servlets.get.DefaultGetServlet", Routes::bind(&SlingApi::post_config_apache_sling_get_servlet_handler, this));
    Routes::Post(router, base + "/apps/system/config/org.apache.sling.security.impl.ReferrerFilter", Routes::bind(&SlingApi::post_config_apache_sling_referrer_filter_handler, this));
    Routes::Post(router, base + "/:path/:name", Routes::bind(&SlingApi::post_node_handler, this));
    Routes::Post(router, base + "/:path/:name.rw.html", Routes::bind(&SlingApi::post_node_rw_handler, this));
    Routes::Post(router, base + "/:path/", Routes::bind(&SlingApi::post_path_handler, this));
    Routes::Post(router, base + "/bin/querybuilder.json", Routes::bind(&SlingApi::post_query_handler, this));
    Routes::Post(router, base + "/etc/replication/treeactivation.html", Routes::bind(&SlingApi::post_tree_activation_handler, this));
    Routes::Post(router, base + "/libs/granite/security/post/truststore", Routes::bind(&SlingApi::post_truststore_handler, this));
    Routes::Post(router, base + "/etc/truststore", Routes::bind(&SlingApi::post_truststore_pkcs12_handler, this));

    // Default handler, called when a route is not found
    router.addCustomHandler(Routes::bind(&SlingApi::sling_api_default_handler, this));
}

void SlingApi::delete_agent_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    // Getting the path params
    auto runmode = request.param(":runmode").as<std::string>();
    auto name = request.param(":name").as<std::string>();
    
    try {
      this->delete_agent(runmode, name, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void SlingApi::delete_node_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    // Getting the path params
    auto path = request.param(":path").as<std::string>();
    auto name = request.param(":name").as<std::string>();
    
    try {
      this->delete_node(path, name, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void SlingApi::get_agent_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    // Getting the path params
    auto runmode = request.param(":runmode").as<std::string>();
    auto name = request.param(":name").as<std::string>();
    
    try {
      this->get_agent(runmode, name, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void SlingApi::get_agents_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    // Getting the path params
    auto runmode = request.param(":runmode").as<std::string>();
    
    try {
      this->get_agents(runmode, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void SlingApi::get_authorizable_keystore_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    // Getting the path params
    auto intermediatePath = request.param(":intermediatePath").as<std::string>();
    auto authorizableId = request.param(":authorizableId").as<std::string>();
    
    try {
      this->get_authorizable_keystore(intermediatePath, authorizableId, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void SlingApi::get_keystore_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    // Getting the path params
    auto intermediatePath = request.param(":intermediatePath").as<std::string>();
    auto authorizableId = request.param(":authorizableId").as<std::string>();
    
    try {
      this->get_keystore(intermediatePath, authorizableId, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void SlingApi::get_node_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    // Getting the path params
    auto path = request.param(":path").as<std::string>();
    auto name = request.param(":name").as<std::string>();
    
    try {
      this->get_node(path, name, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void SlingApi::get_package_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    // Getting the path params
    auto group = request.param(":group").as<std::string>();
    auto name = request.param(":name").as<std::string>();
    auto version = request.param(":version").as<std::string>();
    
    try {
      this->get_package(group, name, version, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void SlingApi::get_package_filter_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    // Getting the path params
    auto group = request.param(":group").as<std::string>();
    auto name = request.param(":name").as<std::string>();
    auto version = request.param(":version").as<std::string>();
    
    try {
      this->get_package_filter(group, name, version, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void SlingApi::get_query_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {

    // Getting the query params
    auto path = request.query().get("path");
    auto pPeriodlimit = request.query().get("p.limit");
    auto _1_property = request.query().get("1_property");
    auto _1_property_value = request.query().get("1_property.value");
    
    try {
      this->get_query(path, pPeriodlimit, _1_property, _1_property_value, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void SlingApi::get_truststore_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {

    try {
      this->get_truststore(response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void SlingApi::get_truststore_info_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {

    try {
      this->get_truststore_info(response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void SlingApi::post_agent_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    // Getting the path params
    auto runmode = request.param(":runmode").as<std::string>();
    auto name = request.param(":name").as<std::string>();
    
    // Getting the query params
    auto jcrContentSlashcqDistribute = request.query().get("jcr:content/cq:distribute");
    auto jcrContentSlashcqDistributeAtTypeHint = request.query().get("jcr:content/cq:distribute@TypeHint");
    auto jcrContentSlashcqName = request.query().get("jcr:content/cq:name");
    auto jcrContentSlashcqTemplate = request.query().get("jcr:content/cq:template");
    auto jcrContentSlashenabled = request.query().get("jcr:content/enabled");
    auto jcrContentSlashjcrDescription = request.query().get("jcr:content/jcr:description");
    auto jcrContentSlashjcrLastModified = request.query().get("jcr:content/jcr:lastModified");
    auto jcrContentSlashjcrLastModifiedBy = request.query().get("jcr:content/jcr:lastModifiedBy");
    auto jcrContentSlashjcrMixinTypes = request.query().get("jcr:content/jcr:mixinTypes");
    auto jcrContentSlashjcrTitle = request.query().get("jcr:content/jcr:title");
    auto jcrContentSlashlogLevel = request.query().get("jcr:content/logLevel");
    auto jcrContentSlashnoStatusUpdate = request.query().get("jcr:content/noStatusUpdate");
    auto jcrContentSlashnoVersioning = request.query().get("jcr:content/noVersioning");
    auto jcrContentSlashprotocolConnectTimeout = request.query().get("jcr:content/protocolConnectTimeout");
    auto jcrContentSlashprotocolHTTPConnectionClosed = request.query().get("jcr:content/protocolHTTPConnectionClosed");
    auto jcrContentSlashprotocolHTTPExpired = request.query().get("jcr:content/protocolHTTPExpired");
    auto jcrContentSlashprotocolHTTPHeaders = request.query().get("jcr:content/protocolHTTPHeaders");
    auto jcrContentSlashprotocolHTTPHeadersAtTypeHint = request.query().get("jcr:content/protocolHTTPHeaders@TypeHint");
    auto jcrContentSlashprotocolHTTPMethod = request.query().get("jcr:content/protocolHTTPMethod");
    auto jcrContentSlashprotocolHTTPSRelaxed = request.query().get("jcr:content/protocolHTTPSRelaxed");
    auto jcrContentSlashprotocolInterface = request.query().get("jcr:content/protocolInterface");
    auto jcrContentSlashprotocolSocketTimeout = request.query().get("jcr:content/protocolSocketTimeout");
    auto jcrContentSlashprotocolVersion = request.query().get("jcr:content/protocolVersion");
    auto jcrContentSlashproxyNTLMDomain = request.query().get("jcr:content/proxyNTLMDomain");
    auto jcrContentSlashproxyNTLMHost = request.query().get("jcr:content/proxyNTLMHost");
    auto jcrContentSlashproxyHost = request.query().get("jcr:content/proxyHost");
    auto jcrContentSlashproxyPassword = request.query().get("jcr:content/proxyPassword");
    auto jcrContentSlashproxyPort = request.query().get("jcr:content/proxyPort");
    auto jcrContentSlashproxyUser = request.query().get("jcr:content/proxyUser");
    auto jcrContentSlashqueueBatchMaxSize = request.query().get("jcr:content/queueBatchMaxSize");
    auto jcrContentSlashqueueBatchMode = request.query().get("jcr:content/queueBatchMode");
    auto jcrContentSlashqueueBatchWaitTime = request.query().get("jcr:content/queueBatchWaitTime");
    auto jcrContentSlashretryDelay = request.query().get("jcr:content/retryDelay");
    auto jcrContentSlashreverseReplication = request.query().get("jcr:content/reverseReplication");
    auto jcrContentSlashserializationType = request.query().get("jcr:content/serializationType");
    auto jcrContentSlashslingResourceType = request.query().get("jcr:content/sling:resourceType");
    auto jcrContentSlashssl = request.query().get("jcr:content/ssl");
    auto jcrContentSlashtransportNTLMDomain = request.query().get("jcr:content/transportNTLMDomain");
    auto jcrContentSlashtransportNTLMHost = request.query().get("jcr:content/transportNTLMHost");
    auto jcrContentSlashtransportPassword = request.query().get("jcr:content/transportPassword");
    auto jcrContentSlashtransportUri = request.query().get("jcr:content/transportUri");
    auto jcrContentSlashtransportUser = request.query().get("jcr:content/transportUser");
    auto jcrContentSlashtriggerDistribute = request.query().get("jcr:content/triggerDistribute");
    auto jcrContentSlashtriggerModified = request.query().get("jcr:content/triggerModified");
    auto jcrContentSlashtriggerOnOffTime = request.query().get("jcr:content/triggerOnOffTime");
    auto jcrContentSlashtriggerReceive = request.query().get("jcr:content/triggerReceive");
    auto jcrContentSlashtriggerSpecific = request.query().get("jcr:content/triggerSpecific");
    auto jcrContentSlashuserId = request.query().get("jcr:content/userId");
    auto jcrPrimaryType = request.query().get("jcr:primaryType");
    auto operation = request.query().get(":operation");
    
    try {
      this->post_agent(runmode, name, jcrContentSlashcqDistribute, jcrContentSlashcqDistributeAtTypeHint, jcrContentSlashcqName, jcrContentSlashcqTemplate, jcrContentSlashenabled, jcrContentSlashjcrDescription, jcrContentSlashjcrLastModified, jcrContentSlashjcrLastModifiedBy, jcrContentSlashjcrMixinTypes, jcrContentSlashjcrTitle, jcrContentSlashlogLevel, jcrContentSlashnoStatusUpdate, jcrContentSlashnoVersioning, jcrContentSlashprotocolConnectTimeout, jcrContentSlashprotocolHTTPConnectionClosed, jcrContentSlashprotocolHTTPExpired, jcrContentSlashprotocolHTTPHeaders, jcrContentSlashprotocolHTTPHeadersAtTypeHint, jcrContentSlashprotocolHTTPMethod, jcrContentSlashprotocolHTTPSRelaxed, jcrContentSlashprotocolInterface, jcrContentSlashprotocolSocketTimeout, jcrContentSlashprotocolVersion, jcrContentSlashproxyNTLMDomain, jcrContentSlashproxyNTLMHost, jcrContentSlashproxyHost, jcrContentSlashproxyPassword, jcrContentSlashproxyPort, jcrContentSlashproxyUser, jcrContentSlashqueueBatchMaxSize, jcrContentSlashqueueBatchMode, jcrContentSlashqueueBatchWaitTime, jcrContentSlashretryDelay, jcrContentSlashreverseReplication, jcrContentSlashserializationType, jcrContentSlashslingResourceType, jcrContentSlashssl, jcrContentSlashtransportNTLMDomain, jcrContentSlashtransportNTLMHost, jcrContentSlashtransportPassword, jcrContentSlashtransportUri, jcrContentSlashtransportUser, jcrContentSlashtriggerDistribute, jcrContentSlashtriggerModified, jcrContentSlashtriggerOnOffTime, jcrContentSlashtriggerReceive, jcrContentSlashtriggerSpecific, jcrContentSlashuserId, jcrPrimaryType, operation, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void SlingApi::post_authorizable_keystore_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    try {
      this->post_authorizable_keystore(request, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void SlingApi::post_authorizables_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {

    // Getting the query params
    auto authorizableId = request.query().get("authorizableId");
    auto intermediatePath = request.query().get("intermediatePath");
    auto createUser = request.query().get("createUser");
    auto createGroup = request.query().get("createGroup");
    auto repPassword = request.query().get("rep:password");
    auto profileSlashgivenName = request.query().get("profile/givenName");
    
    try {
      this->post_authorizables(authorizableId, intermediatePath, createUser, createGroup, repPassword, profileSlashgivenName, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void SlingApi::post_config_adobe_granite_saml_authentication_handler_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {

    // Getting the query params
    auto keyStorePassword = request.query().get("keyStorePassword");
    auto keyStorePasswordAtTypeHint = request.query().get("keyStorePassword@TypeHint");
    auto servicePeriodranking = request.query().get("service.ranking");
    auto servicePeriodrankingAtTypeHint = request.query().get("service.ranking@TypeHint");
    auto idpHttpRedirect = request.query().get("idpHttpRedirect");
    auto idpHttpRedirectAtTypeHint = request.query().get("idpHttpRedirect@TypeHint");
    auto createUser = request.query().get("createUser");
    auto createUserAtTypeHint = request.query().get("createUser@TypeHint");
    auto defaultRedirectUrl = request.query().get("defaultRedirectUrl");
    auto defaultRedirectUrlAtTypeHint = request.query().get("defaultRedirectUrl@TypeHint");
    auto userIDAttribute = request.query().get("userIDAttribute");
    auto userIDAttributeAtTypeHint = request.query().get("userIDAttribute@TypeHint");
    auto defaultGroups = request.query().get("defaultGroups");
    auto defaultGroupsAtTypeHint = request.query().get("defaultGroups@TypeHint");
    auto idpCertAlias = request.query().get("idpCertAlias");
    auto idpCertAliasAtTypeHint = request.query().get("idpCertAlias@TypeHint");
    auto addGroupMemberships = request.query().get("addGroupMemberships");
    auto addGroupMembershipsAtTypeHint = request.query().get("addGroupMemberships@TypeHint");
    auto path = request.query().get("path");
    auto pathAtTypeHint = request.query().get("path@TypeHint");
    auto synchronizeAttributes = request.query().get("synchronizeAttributes");
    auto synchronizeAttributesAtTypeHint = request.query().get("synchronizeAttributes@TypeHint");
    auto clockTolerance = request.query().get("clockTolerance");
    auto clockToleranceAtTypeHint = request.query().get("clockTolerance@TypeHint");
    auto groupMembershipAttribute = request.query().get("groupMembershipAttribute");
    auto groupMembershipAttributeAtTypeHint = request.query().get("groupMembershipAttribute@TypeHint");
    auto idpUrl = request.query().get("idpUrl");
    auto idpUrlAtTypeHint = request.query().get("idpUrl@TypeHint");
    auto logoutUrl = request.query().get("logoutUrl");
    auto logoutUrlAtTypeHint = request.query().get("logoutUrl@TypeHint");
    auto serviceProviderEntityId = request.query().get("serviceProviderEntityId");
    auto serviceProviderEntityIdAtTypeHint = request.query().get("serviceProviderEntityId@TypeHint");
    auto assertionConsumerServiceURL = request.query().get("assertionConsumerServiceURL");
    auto assertionConsumerServiceURLAtTypeHint = request.query().get("assertionConsumerServiceURL@TypeHint");
    auto handleLogout = request.query().get("handleLogout");
    auto handleLogoutAtTypeHint = request.query().get("handleLogout@TypeHint");
    auto spPrivateKeyAlias = request.query().get("spPrivateKeyAlias");
    auto spPrivateKeyAliasAtTypeHint = request.query().get("spPrivateKeyAlias@TypeHint");
    auto useEncryption = request.query().get("useEncryption");
    auto useEncryptionAtTypeHint = request.query().get("useEncryption@TypeHint");
    auto nameIdFormat = request.query().get("nameIdFormat");
    auto nameIdFormatAtTypeHint = request.query().get("nameIdFormat@TypeHint");
    auto digestMethod = request.query().get("digestMethod");
    auto digestMethodAtTypeHint = request.query().get("digestMethod@TypeHint");
    auto signatureMethod = request.query().get("signatureMethod");
    auto signatureMethodAtTypeHint = request.query().get("signatureMethod@TypeHint");
    auto userIntermediatePath = request.query().get("userIntermediatePath");
    auto userIntermediatePathAtTypeHint = request.query().get("userIntermediatePath@TypeHint");
    
    try {
      this->post_config_adobe_granite_saml_authentication_handler(keyStorePassword, keyStorePasswordAtTypeHint, servicePeriodranking, servicePeriodrankingAtTypeHint, idpHttpRedirect, idpHttpRedirectAtTypeHint, createUser, createUserAtTypeHint, defaultRedirectUrl, defaultRedirectUrlAtTypeHint, userIDAttribute, userIDAttributeAtTypeHint, defaultGroups, defaultGroupsAtTypeHint, idpCertAlias, idpCertAliasAtTypeHint, addGroupMemberships, addGroupMembershipsAtTypeHint, path, pathAtTypeHint, synchronizeAttributes, synchronizeAttributesAtTypeHint, clockTolerance, clockToleranceAtTypeHint, groupMembershipAttribute, groupMembershipAttributeAtTypeHint, idpUrl, idpUrlAtTypeHint, logoutUrl, logoutUrlAtTypeHint, serviceProviderEntityId, serviceProviderEntityIdAtTypeHint, assertionConsumerServiceURL, assertionConsumerServiceURLAtTypeHint, handleLogout, handleLogoutAtTypeHint, spPrivateKeyAlias, spPrivateKeyAliasAtTypeHint, useEncryption, useEncryptionAtTypeHint, nameIdFormat, nameIdFormatAtTypeHint, digestMethod, digestMethodAtTypeHint, signatureMethod, signatureMethodAtTypeHint, userIntermediatePath, userIntermediatePathAtTypeHint, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void SlingApi::post_config_apache_felix_jetty_based_http_service_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {

    // Getting the query params
    auto orgPeriodapachePeriodfelixPeriodhttpsPeriodnio = request.query().get("org.apache.felix.https.nio");
    auto orgPeriodapachePeriodfelixPeriodhttpsPeriodnioAtTypeHint = request.query().get("org.apache.felix.https.nio@TypeHint");
    auto orgPeriodapachePeriodfelixPeriodhttpsPeriodkeystore = request.query().get("org.apache.felix.https.keystore");
    auto orgPeriodapachePeriodfelixPeriodhttpsPeriodkeystoreAtTypeHint = request.query().get("org.apache.felix.https.keystore@TypeHint");
    auto orgPeriodapachePeriodfelixPeriodhttpsPeriodkeystorePeriodpassword = request.query().get("org.apache.felix.https.keystore.password");
    auto orgPeriodapachePeriodfelixPeriodhttpsPeriodkeystorePeriodpasswordAtTypeHint = request.query().get("org.apache.felix.https.keystore.password@TypeHint");
    auto orgPeriodapachePeriodfelixPeriodhttpsPeriodkeystorePeriodkey = request.query().get("org.apache.felix.https.keystore.key");
    auto orgPeriodapachePeriodfelixPeriodhttpsPeriodkeystorePeriodkeyAtTypeHint = request.query().get("org.apache.felix.https.keystore.key@TypeHint");
    auto orgPeriodapachePeriodfelixPeriodhttpsPeriodkeystorePeriodkeyPeriodpassword = request.query().get("org.apache.felix.https.keystore.key.password");
    auto orgPeriodapachePeriodfelixPeriodhttpsPeriodkeystorePeriodkeyPeriodpasswordAtTypeHint = request.query().get("org.apache.felix.https.keystore.key.password@TypeHint");
    auto orgPeriodapachePeriodfelixPeriodhttpsPeriodtruststore = request.query().get("org.apache.felix.https.truststore");
    auto orgPeriodapachePeriodfelixPeriodhttpsPeriodtruststoreAtTypeHint = request.query().get("org.apache.felix.https.truststore@TypeHint");
    auto orgPeriodapachePeriodfelixPeriodhttpsPeriodtruststorePeriodpassword = request.query().get("org.apache.felix.https.truststore.password");
    auto orgPeriodapachePeriodfelixPeriodhttpsPeriodtruststorePeriodpasswordAtTypeHint = request.query().get("org.apache.felix.https.truststore.password@TypeHint");
    auto orgPeriodapachePeriodfelixPeriodhttpsPeriodclientcertificate = request.query().get("org.apache.felix.https.clientcertificate");
    auto orgPeriodapachePeriodfelixPeriodhttpsPeriodclientcertificateAtTypeHint = request.query().get("org.apache.felix.https.clientcertificate@TypeHint");
    auto orgPeriodapachePeriodfelixPeriodhttpsPeriodenable = request.query().get("org.apache.felix.https.enable");
    auto orgPeriodapachePeriodfelixPeriodhttpsPeriodenableAtTypeHint = request.query().get("org.apache.felix.https.enable@TypeHint");
    auto orgPeriodosgiPeriodservicePeriodhttpPeriodportPeriodsecure = request.query().get("org.osgi.service.http.port.secure");
    auto orgPeriodosgiPeriodservicePeriodhttpPeriodportPeriodsecureAtTypeHint = request.query().get("org.osgi.service.http.port.secure@TypeHint");
    
    try {
      this->post_config_apache_felix_jetty_based_http_service(orgPeriodapachePeriodfelixPeriodhttpsPeriodnio, orgPeriodapachePeriodfelixPeriodhttpsPeriodnioAtTypeHint, orgPeriodapachePeriodfelixPeriodhttpsPeriodkeystore, orgPeriodapachePeriodfelixPeriodhttpsPeriodkeystoreAtTypeHint, orgPeriodapachePeriodfelixPeriodhttpsPeriodkeystorePeriodpassword, orgPeriodapachePeriodfelixPeriodhttpsPeriodkeystorePeriodpasswordAtTypeHint, orgPeriodapachePeriodfelixPeriodhttpsPeriodkeystorePeriodkey, orgPeriodapachePeriodfelixPeriodhttpsPeriodkeystorePeriodkeyAtTypeHint, orgPeriodapachePeriodfelixPeriodhttpsPeriodkeystorePeriodkeyPeriodpassword, orgPeriodapachePeriodfelixPeriodhttpsPeriodkeystorePeriodkeyPeriodpasswordAtTypeHint, orgPeriodapachePeriodfelixPeriodhttpsPeriodtruststore, orgPeriodapachePeriodfelixPeriodhttpsPeriodtruststoreAtTypeHint, orgPeriodapachePeriodfelixPeriodhttpsPeriodtruststorePeriodpassword, orgPeriodapachePeriodfelixPeriodhttpsPeriodtruststorePeriodpasswordAtTypeHint, orgPeriodapachePeriodfelixPeriodhttpsPeriodclientcertificate, orgPeriodapachePeriodfelixPeriodhttpsPeriodclientcertificateAtTypeHint, orgPeriodapachePeriodfelixPeriodhttpsPeriodenable, orgPeriodapachePeriodfelixPeriodhttpsPeriodenableAtTypeHint, orgPeriodosgiPeriodservicePeriodhttpPeriodportPeriodsecure, orgPeriodosgiPeriodservicePeriodhttpPeriodportPeriodsecureAtTypeHint, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void SlingApi::post_config_apache_http_components_proxy_configuration_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {

    // Getting the query params
    auto proxyPeriodhost = request.query().get("proxy.host");
    auto proxyPeriodhostAtTypeHint = request.query().get("proxy.host@TypeHint");
    auto proxyPeriodport = request.query().get("proxy.port");
    auto proxyPeriodportAtTypeHint = request.query().get("proxy.port@TypeHint");
    auto proxyPeriodexceptions = request.query().get("proxy.exceptions");
    auto proxyPeriodexceptionsAtTypeHint = request.query().get("proxy.exceptions@TypeHint");
    auto proxyPeriodenabled = request.query().get("proxy.enabled");
    auto proxyPeriodenabledAtTypeHint = request.query().get("proxy.enabled@TypeHint");
    auto proxyPerioduser = request.query().get("proxy.user");
    auto proxyPerioduserAtTypeHint = request.query().get("proxy.user@TypeHint");
    auto proxyPeriodpassword = request.query().get("proxy.password");
    auto proxyPeriodpasswordAtTypeHint = request.query().get("proxy.password@TypeHint");
    
    try {
      this->post_config_apache_http_components_proxy_configuration(proxyPeriodhost, proxyPeriodhostAtTypeHint, proxyPeriodport, proxyPeriodportAtTypeHint, proxyPeriodexceptions, proxyPeriodexceptionsAtTypeHint, proxyPeriodenabled, proxyPeriodenabledAtTypeHint, proxyPerioduser, proxyPerioduserAtTypeHint, proxyPeriodpassword, proxyPeriodpasswordAtTypeHint, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void SlingApi::post_config_apache_sling_dav_ex_servlet_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {

    // Getting the query params
    auto alias = request.query().get("alias");
    auto aliasAtTypeHint = request.query().get("alias@TypeHint");
    auto davPeriodcreateAbsoluteUri = request.query().get("dav.create-absolute-uri");
    auto davPeriodcreateAbsoluteUriAtTypeHint = request.query().get("dav.create-absolute-uri@TypeHint");
    
    try {
      this->post_config_apache_sling_dav_ex_servlet(alias, aliasAtTypeHint, davPeriodcreateAbsoluteUri, davPeriodcreateAbsoluteUriAtTypeHint, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void SlingApi::post_config_apache_sling_get_servlet_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {

    // Getting the query params
    auto jsonPeriodmaximumresults = request.query().get("json.maximumresults");
    auto jsonPeriodmaximumresultsAtTypeHint = request.query().get("json.maximumresults@TypeHint");
    auto enablePeriodhtml = request.query().get("enable.html");
    auto enablePeriodhtmlAtTypeHint = request.query().get("enable.html@TypeHint");
    auto enablePeriodtxt = request.query().get("enable.txt");
    auto enablePeriodtxtAtTypeHint = request.query().get("enable.txt@TypeHint");
    auto enablePeriodxml = request.query().get("enable.xml");
    auto enablePeriodxmlAtTypeHint = request.query().get("enable.xml@TypeHint");
    
    try {
      this->post_config_apache_sling_get_servlet(jsonPeriodmaximumresults, jsonPeriodmaximumresultsAtTypeHint, enablePeriodhtml, enablePeriodhtmlAtTypeHint, enablePeriodtxt, enablePeriodtxtAtTypeHint, enablePeriodxml, enablePeriodxmlAtTypeHint, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void SlingApi::post_config_apache_sling_referrer_filter_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {

    // Getting the query params
    auto allowPeriodempty = request.query().get("allow.empty");
    auto allowPeriodemptyAtTypeHint = request.query().get("allow.empty@TypeHint");
    auto allowPeriodhosts = request.query().get("allow.hosts");
    auto allowPeriodhostsAtTypeHint = request.query().get("allow.hosts@TypeHint");
    auto allowPeriodhostsPeriodregexp = request.query().get("allow.hosts.regexp");
    auto allowPeriodhostsPeriodregexpAtTypeHint = request.query().get("allow.hosts.regexp@TypeHint");
    auto filterPeriodmethods = request.query().get("filter.methods");
    auto filterPeriodmethodsAtTypeHint = request.query().get("filter.methods@TypeHint");
    
    try {
      this->post_config_apache_sling_referrer_filter(allowPeriodempty, allowPeriodemptyAtTypeHint, allowPeriodhosts, allowPeriodhostsAtTypeHint, allowPeriodhostsPeriodregexp, allowPeriodhostsPeriodregexpAtTypeHint, filterPeriodmethods, filterPeriodmethodsAtTypeHint, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void SlingApi::post_node_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    try {
      this->post_node(request, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void SlingApi::post_node_rw_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    // Getting the path params
    auto path = request.param(":path").as<std::string>();
    auto name = request.param(":name").as<std::string>();
    
    // Getting the query params
    auto addMembers = request.query().get("addMembers");
    
    try {
      this->post_node_rw(path, name, addMembers, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void SlingApi::post_path_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    // Getting the path params
    auto path = request.param(":path").as<std::string>();
    
    // Getting the query params
    auto jcrPrimaryType = request.query().get("jcr:primaryType");
    auto name = request.query().get(":name");
    
    try {
      this->post_path(path, jcrPrimaryType, name, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void SlingApi::post_query_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {

    // Getting the query params
    auto path = request.query().get("path");
    auto pPeriodlimit = request.query().get("p.limit");
    auto _1_property = request.query().get("1_property");
    auto _1_property_value = request.query().get("1_property.value");
    
    try {
      this->post_query(path, pPeriodlimit, _1_property, _1_property_value, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void SlingApi::post_tree_activation_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {

    // Getting the query params
    auto ignoredeactivated = request.query().get("ignoredeactivated");
    auto onlymodified = request.query().get("onlymodified");
    auto path = request.query().get("path");
    
    try {
      this->post_tree_activation(ignoredeactivated, onlymodified, path, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void SlingApi::post_truststore_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    try {
      this->post_truststore(request, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void SlingApi::post_truststore_pkcs12_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    try {
      this->post_truststore_pkcs12(request, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}

void SlingApi::sling_api_default_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    response.send(Pistache::Http::Code::Not_Found, "The requested method does not exist");
}

}
}
}
}

