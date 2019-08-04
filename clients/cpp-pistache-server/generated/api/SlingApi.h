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
 * SlingApi.h
 *
 * 
 */

#ifndef SlingApi_H_
#define SlingApi_H_


#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>
#include <pistache/http_headers.h>

#include <pistache/optional.h>

#include "KeystoreInfo.h"
#include "TruststoreInfo.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class  SlingApi {
public:
    SlingApi(Pistache::Address addr);
    virtual ~SlingApi() {};
    void init(size_t thr);
    void start();
    void shutdown();

    const std::string base = "/";

private:
    void setupRoutes();

    void delete_agent_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void delete_node_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void get_agent_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void get_agents_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void get_authorizable_keystore_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void get_keystore_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void get_node_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void get_package_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void get_package_filter_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void get_query_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void get_truststore_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void get_truststore_info_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void post_agent_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void post_authorizable_keystore_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void post_authorizables_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void post_config_adobe_granite_saml_authentication_handler_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void post_config_apache_felix_jetty_based_http_service_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void post_config_apache_http_components_proxy_configuration_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void post_config_apache_sling_dav_ex_servlet_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void post_config_apache_sling_get_servlet_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void post_config_apache_sling_referrer_filter_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void post_node_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void post_node_rw_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void post_path_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void post_query_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void post_tree_activation_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void post_truststore_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void post_truststore_pkcs12_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void sling_api_default_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);

    Pistache::Http::Endpoint httpEndpoint;
    Pistache::Rest::Router router;


    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="runmode"></param>
    /// <param name="name"></param>
    virtual void delete_agent(const std::string &runmode, const std::string &name, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="path"></param>
    /// <param name="name"></param>
    virtual void delete_node(const std::string &path, const std::string &name, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="runmode"></param>
    /// <param name="name"></param>
    virtual void get_agent(const std::string &runmode, const std::string &name, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="runmode"></param>
    virtual void get_agents(const std::string &runmode, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="intermediatePath"></param>
    /// <param name="authorizableId"></param>
    virtual void get_authorizable_keystore(const std::string &intermediatePath, const std::string &authorizableId, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="intermediatePath"></param>
    /// <param name="authorizableId"></param>
    virtual void get_keystore(const std::string &intermediatePath, const std::string &authorizableId, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="path"></param>
    /// <param name="name"></param>
    virtual void get_node(const std::string &path, const std::string &name, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="group"></param>
    /// <param name="name"></param>
    /// <param name="version"></param>
    virtual void get_package(const std::string &group, const std::string &name, const std::string &version, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="group"></param>
    /// <param name="name"></param>
    /// <param name="version"></param>
    virtual void get_package_filter(const std::string &group, const std::string &name, const std::string &version, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="path"></param>
    /// <param name="pPeriodlimit"></param>
    /// <param name="_1_property"></param>
    /// <param name="_1_property_value"></param>
    virtual void get_query(const Pistache::Optional<std::string> &path, const Pistache::Optional<double> &pPeriodlimit, const Pistache::Optional<std::string> &_1_property, const Pistache::Optional<std::string> &_1_property_value, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    virtual void get_truststore(Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    virtual void get_truststore_info(Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="runmode"></param>
    /// <param name="name"></param>
    /// <param name="jcrContentSlashcqDistribute"> (optional)</param>
    /// <param name="jcrContentSlashcqDistributeAtTypeHint"> (optional)</param>
    /// <param name="jcrContentSlashcqName"> (optional)</param>
    /// <param name="jcrContentSlashcqTemplate"> (optional)</param>
    /// <param name="jcrContentSlashenabled"> (optional)</param>
    /// <param name="jcrContentSlashjcrDescription"> (optional)</param>
    /// <param name="jcrContentSlashjcrLastModified"> (optional)</param>
    /// <param name="jcrContentSlashjcrLastModifiedBy"> (optional)</param>
    /// <param name="jcrContentSlashjcrMixinTypes"> (optional)</param>
    /// <param name="jcrContentSlashjcrTitle"> (optional)</param>
    /// <param name="jcrContentSlashlogLevel"> (optional)</param>
    /// <param name="jcrContentSlashnoStatusUpdate"> (optional)</param>
    /// <param name="jcrContentSlashnoVersioning"> (optional)</param>
    /// <param name="jcrContentSlashprotocolConnectTimeout"> (optional)</param>
    /// <param name="jcrContentSlashprotocolHTTPConnectionClosed"> (optional)</param>
    /// <param name="jcrContentSlashprotocolHTTPExpired"> (optional)</param>
    /// <param name="jcrContentSlashprotocolHTTPHeaders"> (optional)</param>
    /// <param name="jcrContentSlashprotocolHTTPHeadersAtTypeHint"> (optional)</param>
    /// <param name="jcrContentSlashprotocolHTTPMethod"> (optional)</param>
    /// <param name="jcrContentSlashprotocolHTTPSRelaxed"> (optional)</param>
    /// <param name="jcrContentSlashprotocolInterface"> (optional)</param>
    /// <param name="jcrContentSlashprotocolSocketTimeout"> (optional)</param>
    /// <param name="jcrContentSlashprotocolVersion"> (optional)</param>
    /// <param name="jcrContentSlashproxyNTLMDomain"> (optional)</param>
    /// <param name="jcrContentSlashproxyNTLMHost"> (optional)</param>
    /// <param name="jcrContentSlashproxyHost"> (optional)</param>
    /// <param name="jcrContentSlashproxyPassword"> (optional)</param>
    /// <param name="jcrContentSlashproxyPort"> (optional)</param>
    /// <param name="jcrContentSlashproxyUser"> (optional)</param>
    /// <param name="jcrContentSlashqueueBatchMaxSize"> (optional)</param>
    /// <param name="jcrContentSlashqueueBatchMode"> (optional)</param>
    /// <param name="jcrContentSlashqueueBatchWaitTime"> (optional)</param>
    /// <param name="jcrContentSlashretryDelay"> (optional)</param>
    /// <param name="jcrContentSlashreverseReplication"> (optional)</param>
    /// <param name="jcrContentSlashserializationType"> (optional)</param>
    /// <param name="jcrContentSlashslingResourceType"> (optional)</param>
    /// <param name="jcrContentSlashssl"> (optional)</param>
    /// <param name="jcrContentSlashtransportNTLMDomain"> (optional)</param>
    /// <param name="jcrContentSlashtransportNTLMHost"> (optional)</param>
    /// <param name="jcrContentSlashtransportPassword"> (optional)</param>
    /// <param name="jcrContentSlashtransportUri"> (optional)</param>
    /// <param name="jcrContentSlashtransportUser"> (optional)</param>
    /// <param name="jcrContentSlashtriggerDistribute"> (optional)</param>
    /// <param name="jcrContentSlashtriggerModified"> (optional)</param>
    /// <param name="jcrContentSlashtriggerOnOffTime"> (optional)</param>
    /// <param name="jcrContentSlashtriggerReceive"> (optional)</param>
    /// <param name="jcrContentSlashtriggerSpecific"> (optional)</param>
    /// <param name="jcrContentSlashuserId"> (optional)</param>
    /// <param name="jcrPrimaryType"> (optional)</param>
    /// <param name="operation"> (optional)</param>
    virtual void post_agent(const std::string &runmode, const std::string &name, const Pistache::Optional<bool> &jcrContentSlashcqDistribute, const Pistache::Optional<std::string> &jcrContentSlashcqDistributeAtTypeHint, const Pistache::Optional<std::string> &jcrContentSlashcqName, const Pistache::Optional<std::string> &jcrContentSlashcqTemplate, const Pistache::Optional<bool> &jcrContentSlashenabled, const Pistache::Optional<std::string> &jcrContentSlashjcrDescription, const Pistache::Optional<std::string> &jcrContentSlashjcrLastModified, const Pistache::Optional<std::string> &jcrContentSlashjcrLastModifiedBy, const Pistache::Optional<std::string> &jcrContentSlashjcrMixinTypes, const Pistache::Optional<std::string> &jcrContentSlashjcrTitle, const Pistache::Optional<std::string> &jcrContentSlashlogLevel, const Pistache::Optional<bool> &jcrContentSlashnoStatusUpdate, const Pistache::Optional<bool> &jcrContentSlashnoVersioning, const Pistache::Optional<double> &jcrContentSlashprotocolConnectTimeout, const Pistache::Optional<bool> &jcrContentSlashprotocolHTTPConnectionClosed, const Pistache::Optional<std::string> &jcrContentSlashprotocolHTTPExpired, const Pistache::Optional<std::string> &jcrContentSlashprotocolHTTPHeaders, const Pistache::Optional<std::string> &jcrContentSlashprotocolHTTPHeadersAtTypeHint, const Pistache::Optional<std::string> &jcrContentSlashprotocolHTTPMethod, const Pistache::Optional<bool> &jcrContentSlashprotocolHTTPSRelaxed, const Pistache::Optional<std::string> &jcrContentSlashprotocolInterface, const Pistache::Optional<double> &jcrContentSlashprotocolSocketTimeout, const Pistache::Optional<std::string> &jcrContentSlashprotocolVersion, const Pistache::Optional<std::string> &jcrContentSlashproxyNTLMDomain, const Pistache::Optional<std::string> &jcrContentSlashproxyNTLMHost, const Pistache::Optional<std::string> &jcrContentSlashproxyHost, const Pistache::Optional<std::string> &jcrContentSlashproxyPassword, const Pistache::Optional<double> &jcrContentSlashproxyPort, const Pistache::Optional<std::string> &jcrContentSlashproxyUser, const Pistache::Optional<double> &jcrContentSlashqueueBatchMaxSize, const Pistache::Optional<std::string> &jcrContentSlashqueueBatchMode, const Pistache::Optional<double> &jcrContentSlashqueueBatchWaitTime, const Pistache::Optional<std::string> &jcrContentSlashretryDelay, const Pistache::Optional<bool> &jcrContentSlashreverseReplication, const Pistache::Optional<std::string> &jcrContentSlashserializationType, const Pistache::Optional<std::string> &jcrContentSlashslingResourceType, const Pistache::Optional<std::string> &jcrContentSlashssl, const Pistache::Optional<std::string> &jcrContentSlashtransportNTLMDomain, const Pistache::Optional<std::string> &jcrContentSlashtransportNTLMHost, const Pistache::Optional<std::string> &jcrContentSlashtransportPassword, const Pistache::Optional<std::string> &jcrContentSlashtransportUri, const Pistache::Optional<std::string> &jcrContentSlashtransportUser, const Pistache::Optional<bool> &jcrContentSlashtriggerDistribute, const Pistache::Optional<bool> &jcrContentSlashtriggerModified, const Pistache::Optional<bool> &jcrContentSlashtriggerOnOffTime, const Pistache::Optional<bool> &jcrContentSlashtriggerReceive, const Pistache::Optional<bool> &jcrContentSlashtriggerSpecific, const Pistache::Optional<std::string> &jcrContentSlashuserId, const Pistache::Optional<std::string> &jcrPrimaryType, const Pistache::Optional<std::string> &operation, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    virtual void post_authorizable_keystore(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="authorizableId"></param>
    /// <param name="intermediatePath"></param>
    /// <param name="createUser"> (optional)</param>
    /// <param name="createGroup"> (optional)</param>
    /// <param name="repPassword"> (optional)</param>
    /// <param name="profileSlashgivenName"> (optional)</param>
    virtual void post_authorizables(const Pistache::Optional<std::string> &authorizableId, const Pistache::Optional<std::string> &intermediatePath, const Pistache::Optional<std::string> &createUser, const Pistache::Optional<std::string> &createGroup, const Pistache::Optional<std::string> &repPassword, const Pistache::Optional<std::string> &profileSlashgivenName, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="keyStorePassword"> (optional)</param>
    /// <param name="keyStorePasswordAtTypeHint"> (optional)</param>
    /// <param name="servicePeriodranking"> (optional)</param>
    /// <param name="servicePeriodrankingAtTypeHint"> (optional)</param>
    /// <param name="idpHttpRedirect"> (optional)</param>
    /// <param name="idpHttpRedirectAtTypeHint"> (optional)</param>
    /// <param name="createUser"> (optional)</param>
    /// <param name="createUserAtTypeHint"> (optional)</param>
    /// <param name="defaultRedirectUrl"> (optional)</param>
    /// <param name="defaultRedirectUrlAtTypeHint"> (optional)</param>
    /// <param name="userIDAttribute"> (optional)</param>
    /// <param name="userIDAttributeAtTypeHint"> (optional)</param>
    /// <param name="defaultGroups"> (optional)</param>
    /// <param name="defaultGroupsAtTypeHint"> (optional)</param>
    /// <param name="idpCertAlias"> (optional)</param>
    /// <param name="idpCertAliasAtTypeHint"> (optional)</param>
    /// <param name="addGroupMemberships"> (optional)</param>
    /// <param name="addGroupMembershipsAtTypeHint"> (optional)</param>
    /// <param name="path"> (optional)</param>
    /// <param name="pathAtTypeHint"> (optional)</param>
    /// <param name="synchronizeAttributes"> (optional)</param>
    /// <param name="synchronizeAttributesAtTypeHint"> (optional)</param>
    /// <param name="clockTolerance"> (optional)</param>
    /// <param name="clockToleranceAtTypeHint"> (optional)</param>
    /// <param name="groupMembershipAttribute"> (optional)</param>
    /// <param name="groupMembershipAttributeAtTypeHint"> (optional)</param>
    /// <param name="idpUrl"> (optional)</param>
    /// <param name="idpUrlAtTypeHint"> (optional)</param>
    /// <param name="logoutUrl"> (optional)</param>
    /// <param name="logoutUrlAtTypeHint"> (optional)</param>
    /// <param name="serviceProviderEntityId"> (optional)</param>
    /// <param name="serviceProviderEntityIdAtTypeHint"> (optional)</param>
    /// <param name="assertionConsumerServiceURL"> (optional)</param>
    /// <param name="assertionConsumerServiceURLAtTypeHint"> (optional)</param>
    /// <param name="handleLogout"> (optional)</param>
    /// <param name="handleLogoutAtTypeHint"> (optional)</param>
    /// <param name="spPrivateKeyAlias"> (optional)</param>
    /// <param name="spPrivateKeyAliasAtTypeHint"> (optional)</param>
    /// <param name="useEncryption"> (optional)</param>
    /// <param name="useEncryptionAtTypeHint"> (optional)</param>
    /// <param name="nameIdFormat"> (optional)</param>
    /// <param name="nameIdFormatAtTypeHint"> (optional)</param>
    /// <param name="digestMethod"> (optional)</param>
    /// <param name="digestMethodAtTypeHint"> (optional)</param>
    /// <param name="signatureMethod"> (optional)</param>
    /// <param name="signatureMethodAtTypeHint"> (optional)</param>
    /// <param name="userIntermediatePath"> (optional)</param>
    /// <param name="userIntermediatePathAtTypeHint"> (optional)</param>
    virtual void post_config_adobe_granite_saml_authentication_handler(const Pistache::Optional<std::string> &keyStorePassword, const Pistache::Optional<std::string> &keyStorePasswordAtTypeHint, const Pistache::Optional<int32_t> &servicePeriodranking, const Pistache::Optional<std::string> &servicePeriodrankingAtTypeHint, const Pistache::Optional<bool> &idpHttpRedirect, const Pistache::Optional<std::string> &idpHttpRedirectAtTypeHint, const Pistache::Optional<bool> &createUser, const Pistache::Optional<std::string> &createUserAtTypeHint, const Pistache::Optional<std::string> &defaultRedirectUrl, const Pistache::Optional<std::string> &defaultRedirectUrlAtTypeHint, const Pistache::Optional<std::string> &userIDAttribute, const Pistache::Optional<std::string> &userIDAttributeAtTypeHint, const Pistache::Optional<std::string> &defaultGroups, const Pistache::Optional<std::string> &defaultGroupsAtTypeHint, const Pistache::Optional<std::string> &idpCertAlias, const Pistache::Optional<std::string> &idpCertAliasAtTypeHint, const Pistache::Optional<bool> &addGroupMemberships, const Pistache::Optional<std::string> &addGroupMembershipsAtTypeHint, const Pistache::Optional<std::string> &path, const Pistache::Optional<std::string> &pathAtTypeHint, const Pistache::Optional<std::string> &synchronizeAttributes, const Pistache::Optional<std::string> &synchronizeAttributesAtTypeHint, const Pistache::Optional<int32_t> &clockTolerance, const Pistache::Optional<std::string> &clockToleranceAtTypeHint, const Pistache::Optional<std::string> &groupMembershipAttribute, const Pistache::Optional<std::string> &groupMembershipAttributeAtTypeHint, const Pistache::Optional<std::string> &idpUrl, const Pistache::Optional<std::string> &idpUrlAtTypeHint, const Pistache::Optional<std::string> &logoutUrl, const Pistache::Optional<std::string> &logoutUrlAtTypeHint, const Pistache::Optional<std::string> &serviceProviderEntityId, const Pistache::Optional<std::string> &serviceProviderEntityIdAtTypeHint, const Pistache::Optional<std::string> &assertionConsumerServiceURL, const Pistache::Optional<std::string> &assertionConsumerServiceURLAtTypeHint, const Pistache::Optional<bool> &handleLogout, const Pistache::Optional<std::string> &handleLogoutAtTypeHint, const Pistache::Optional<std::string> &spPrivateKeyAlias, const Pistache::Optional<std::string> &spPrivateKeyAliasAtTypeHint, const Pistache::Optional<bool> &useEncryption, const Pistache::Optional<std::string> &useEncryptionAtTypeHint, const Pistache::Optional<std::string> &nameIdFormat, const Pistache::Optional<std::string> &nameIdFormatAtTypeHint, const Pistache::Optional<std::string> &digestMethod, const Pistache::Optional<std::string> &digestMethodAtTypeHint, const Pistache::Optional<std::string> &signatureMethod, const Pistache::Optional<std::string> &signatureMethodAtTypeHint, const Pistache::Optional<std::string> &userIntermediatePath, const Pistache::Optional<std::string> &userIntermediatePathAtTypeHint, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="orgPeriodapachePeriodfelixPeriodhttpsPeriodnio"> (optional)</param>
    /// <param name="orgPeriodapachePeriodfelixPeriodhttpsPeriodnioAtTypeHint"> (optional)</param>
    /// <param name="orgPeriodapachePeriodfelixPeriodhttpsPeriodkeystore"> (optional)</param>
    /// <param name="orgPeriodapachePeriodfelixPeriodhttpsPeriodkeystoreAtTypeHint"> (optional)</param>
    /// <param name="orgPeriodapachePeriodfelixPeriodhttpsPeriodkeystorePeriodpassword"> (optional)</param>
    /// <param name="orgPeriodapachePeriodfelixPeriodhttpsPeriodkeystorePeriodpasswordAtTypeHint"> (optional)</param>
    /// <param name="orgPeriodapachePeriodfelixPeriodhttpsPeriodkeystorePeriodkey"> (optional)</param>
    /// <param name="orgPeriodapachePeriodfelixPeriodhttpsPeriodkeystorePeriodkeyAtTypeHint"> (optional)</param>
    /// <param name="orgPeriodapachePeriodfelixPeriodhttpsPeriodkeystorePeriodkeyPeriodpassword"> (optional)</param>
    /// <param name="orgPeriodapachePeriodfelixPeriodhttpsPeriodkeystorePeriodkeyPeriodpasswordAtTypeHint"> (optional)</param>
    /// <param name="orgPeriodapachePeriodfelixPeriodhttpsPeriodtruststore"> (optional)</param>
    /// <param name="orgPeriodapachePeriodfelixPeriodhttpsPeriodtruststoreAtTypeHint"> (optional)</param>
    /// <param name="orgPeriodapachePeriodfelixPeriodhttpsPeriodtruststorePeriodpassword"> (optional)</param>
    /// <param name="orgPeriodapachePeriodfelixPeriodhttpsPeriodtruststorePeriodpasswordAtTypeHint"> (optional)</param>
    /// <param name="orgPeriodapachePeriodfelixPeriodhttpsPeriodclientcertificate"> (optional)</param>
    /// <param name="orgPeriodapachePeriodfelixPeriodhttpsPeriodclientcertificateAtTypeHint"> (optional)</param>
    /// <param name="orgPeriodapachePeriodfelixPeriodhttpsPeriodenable"> (optional)</param>
    /// <param name="orgPeriodapachePeriodfelixPeriodhttpsPeriodenableAtTypeHint"> (optional)</param>
    /// <param name="orgPeriodosgiPeriodservicePeriodhttpPeriodportPeriodsecure"> (optional)</param>
    /// <param name="orgPeriodosgiPeriodservicePeriodhttpPeriodportPeriodsecureAtTypeHint"> (optional)</param>
    virtual void post_config_apache_felix_jetty_based_http_service(const Pistache::Optional<bool> &orgPeriodapachePeriodfelixPeriodhttpsPeriodnio, const Pistache::Optional<std::string> &orgPeriodapachePeriodfelixPeriodhttpsPeriodnioAtTypeHint, const Pistache::Optional<std::string> &orgPeriodapachePeriodfelixPeriodhttpsPeriodkeystore, const Pistache::Optional<std::string> &orgPeriodapachePeriodfelixPeriodhttpsPeriodkeystoreAtTypeHint, const Pistache::Optional<std::string> &orgPeriodapachePeriodfelixPeriodhttpsPeriodkeystorePeriodpassword, const Pistache::Optional<std::string> &orgPeriodapachePeriodfelixPeriodhttpsPeriodkeystorePeriodpasswordAtTypeHint, const Pistache::Optional<std::string> &orgPeriodapachePeriodfelixPeriodhttpsPeriodkeystorePeriodkey, const Pistache::Optional<std::string> &orgPeriodapachePeriodfelixPeriodhttpsPeriodkeystorePeriodkeyAtTypeHint, const Pistache::Optional<std::string> &orgPeriodapachePeriodfelixPeriodhttpsPeriodkeystorePeriodkeyPeriodpassword, const Pistache::Optional<std::string> &orgPeriodapachePeriodfelixPeriodhttpsPeriodkeystorePeriodkeyPeriodpasswordAtTypeHint, const Pistache::Optional<std::string> &orgPeriodapachePeriodfelixPeriodhttpsPeriodtruststore, const Pistache::Optional<std::string> &orgPeriodapachePeriodfelixPeriodhttpsPeriodtruststoreAtTypeHint, const Pistache::Optional<std::string> &orgPeriodapachePeriodfelixPeriodhttpsPeriodtruststorePeriodpassword, const Pistache::Optional<std::string> &orgPeriodapachePeriodfelixPeriodhttpsPeriodtruststorePeriodpasswordAtTypeHint, const Pistache::Optional<std::string> &orgPeriodapachePeriodfelixPeriodhttpsPeriodclientcertificate, const Pistache::Optional<std::string> &orgPeriodapachePeriodfelixPeriodhttpsPeriodclientcertificateAtTypeHint, const Pistache::Optional<bool> &orgPeriodapachePeriodfelixPeriodhttpsPeriodenable, const Pistache::Optional<std::string> &orgPeriodapachePeriodfelixPeriodhttpsPeriodenableAtTypeHint, const Pistache::Optional<std::string> &orgPeriodosgiPeriodservicePeriodhttpPeriodportPeriodsecure, const Pistache::Optional<std::string> &orgPeriodosgiPeriodservicePeriodhttpPeriodportPeriodsecureAtTypeHint, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="proxyPeriodhost"> (optional)</param>
    /// <param name="proxyPeriodhostAtTypeHint"> (optional)</param>
    /// <param name="proxyPeriodport"> (optional)</param>
    /// <param name="proxyPeriodportAtTypeHint"> (optional)</param>
    /// <param name="proxyPeriodexceptions"> (optional)</param>
    /// <param name="proxyPeriodexceptionsAtTypeHint"> (optional)</param>
    /// <param name="proxyPeriodenabled"> (optional)</param>
    /// <param name="proxyPeriodenabledAtTypeHint"> (optional)</param>
    /// <param name="proxyPerioduser"> (optional)</param>
    /// <param name="proxyPerioduserAtTypeHint"> (optional)</param>
    /// <param name="proxyPeriodpassword"> (optional)</param>
    /// <param name="proxyPeriodpasswordAtTypeHint"> (optional)</param>
    virtual void post_config_apache_http_components_proxy_configuration(const Pistache::Optional<std::string> &proxyPeriodhost, const Pistache::Optional<std::string> &proxyPeriodhostAtTypeHint, const Pistache::Optional<int32_t> &proxyPeriodport, const Pistache::Optional<std::string> &proxyPeriodportAtTypeHint, const Pistache::Optional<std::string> &proxyPeriodexceptions, const Pistache::Optional<std::string> &proxyPeriodexceptionsAtTypeHint, const Pistache::Optional<bool> &proxyPeriodenabled, const Pistache::Optional<std::string> &proxyPeriodenabledAtTypeHint, const Pistache::Optional<std::string> &proxyPerioduser, const Pistache::Optional<std::string> &proxyPerioduserAtTypeHint, const Pistache::Optional<std::string> &proxyPeriodpassword, const Pistache::Optional<std::string> &proxyPeriodpasswordAtTypeHint, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="alias"> (optional)</param>
    /// <param name="aliasAtTypeHint"> (optional)</param>
    /// <param name="davPeriodcreateAbsoluteUri"> (optional)</param>
    /// <param name="davPeriodcreateAbsoluteUriAtTypeHint"> (optional)</param>
    virtual void post_config_apache_sling_dav_ex_servlet(const Pistache::Optional<std::string> &alias, const Pistache::Optional<std::string> &aliasAtTypeHint, const Pistache::Optional<bool> &davPeriodcreateAbsoluteUri, const Pistache::Optional<std::string> &davPeriodcreateAbsoluteUriAtTypeHint, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="jsonPeriodmaximumresults"> (optional)</param>
    /// <param name="jsonPeriodmaximumresultsAtTypeHint"> (optional)</param>
    /// <param name="enablePeriodhtml"> (optional)</param>
    /// <param name="enablePeriodhtmlAtTypeHint"> (optional)</param>
    /// <param name="enablePeriodtxt"> (optional)</param>
    /// <param name="enablePeriodtxtAtTypeHint"> (optional)</param>
    /// <param name="enablePeriodxml"> (optional)</param>
    /// <param name="enablePeriodxmlAtTypeHint"> (optional)</param>
    virtual void post_config_apache_sling_get_servlet(const Pistache::Optional<std::string> &jsonPeriodmaximumresults, const Pistache::Optional<std::string> &jsonPeriodmaximumresultsAtTypeHint, const Pistache::Optional<bool> &enablePeriodhtml, const Pistache::Optional<std::string> &enablePeriodhtmlAtTypeHint, const Pistache::Optional<bool> &enablePeriodtxt, const Pistache::Optional<std::string> &enablePeriodtxtAtTypeHint, const Pistache::Optional<bool> &enablePeriodxml, const Pistache::Optional<std::string> &enablePeriodxmlAtTypeHint, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="allowPeriodempty"> (optional)</param>
    /// <param name="allowPeriodemptyAtTypeHint"> (optional)</param>
    /// <param name="allowPeriodhosts"> (optional)</param>
    /// <param name="allowPeriodhostsAtTypeHint"> (optional)</param>
    /// <param name="allowPeriodhostsPeriodregexp"> (optional)</param>
    /// <param name="allowPeriodhostsPeriodregexpAtTypeHint"> (optional)</param>
    /// <param name="filterPeriodmethods"> (optional)</param>
    /// <param name="filterPeriodmethodsAtTypeHint"> (optional)</param>
    virtual void post_config_apache_sling_referrer_filter(const Pistache::Optional<bool> &allowPeriodempty, const Pistache::Optional<std::string> &allowPeriodemptyAtTypeHint, const Pistache::Optional<std::string> &allowPeriodhosts, const Pistache::Optional<std::string> &allowPeriodhostsAtTypeHint, const Pistache::Optional<std::string> &allowPeriodhostsPeriodregexp, const Pistache::Optional<std::string> &allowPeriodhostsPeriodregexpAtTypeHint, const Pistache::Optional<std::string> &filterPeriodmethods, const Pistache::Optional<std::string> &filterPeriodmethodsAtTypeHint, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    virtual void post_node(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="path"></param>
    /// <param name="name"></param>
    /// <param name="addMembers"> (optional)</param>
    virtual void post_node_rw(const std::string &path, const std::string &name, const Pistache::Optional<std::string> &addMembers, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="path"></param>
    /// <param name="jcrPrimaryType"></param>
    /// <param name="name"></param>
    virtual void post_path(const std::string &path, const Pistache::Optional<std::string> &jcrPrimaryType, const Pistache::Optional<std::string> &name, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="path"></param>
    /// <param name="pPeriodlimit"></param>
    /// <param name="_1_property"></param>
    /// <param name="_1_property_value"></param>
    virtual void post_query(const Pistache::Optional<std::string> &path, const Pistache::Optional<double> &pPeriodlimit, const Pistache::Optional<std::string> &_1_property, const Pistache::Optional<std::string> &_1_property_value, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="ignoredeactivated"></param>
    /// <param name="onlymodified"></param>
    /// <param name="path"></param>
    virtual void post_tree_activation(const Pistache::Optional<bool> &ignoredeactivated, const Pistache::Optional<bool> &onlymodified, const Pistache::Optional<std::string> &path, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    virtual void post_truststore(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    virtual void post_truststore_pkcs12(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter &response) = 0;

};

}
}
}
}

#endif /* SlingApi_H_ */

