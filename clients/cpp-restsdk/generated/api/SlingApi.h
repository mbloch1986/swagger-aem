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

/*
 * SlingApi.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_API_SlingApi_H_
#define ORG_OPENAPITOOLS_CLIENT_API_SlingApi_H_


#include "../ApiClient.h"

#include "HttpContent.h"
#include "KeystoreInfo.h"
#include "TruststoreInfo.h"
#include <cpprest/details/basic_types.h>

#include <boost/optional.hpp>

namespace org {
namespace openapitools {
namespace client {
namespace api {

using namespace org::openapitools::client::model;



class  SlingApi 
{
public:

    explicit SlingApi( std::shared_ptr<ApiClient> apiClient );

    virtual ~SlingApi() = default;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="runmode"></param>
    /// <param name="name"></param>
    pplx::task<void> deleteAgent(
        utility::string_t runmode,
        utility::string_t name
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="path"></param>
    /// <param name="name"></param>
    pplx::task<void> deleteNode(
        utility::string_t path,
        utility::string_t name
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="runmode"></param>
    /// <param name="name"></param>
    pplx::task<void> getAgent(
        utility::string_t runmode,
        utility::string_t name
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="runmode"></param>
    pplx::task<utility::string_t> getAgents(
        utility::string_t runmode
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="intermediatePath"></param>
    /// <param name="authorizableId"></param>
    pplx::task<std::shared_ptr<KeystoreInfo>> getAuthorizableKeystore(
        utility::string_t intermediatePath,
        utility::string_t authorizableId
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="intermediatePath"></param>
    /// <param name="authorizableId"></param>
    pplx::task<HttpContent> getKeystore(
        utility::string_t intermediatePath,
        utility::string_t authorizableId
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="path"></param>
    /// <param name="name"></param>
    pplx::task<void> getNode(
        utility::string_t path,
        utility::string_t name
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="group"></param>
    /// <param name="name"></param>
    /// <param name="version"></param>
    pplx::task<HttpContent> getPackage(
        utility::string_t group,
        utility::string_t name,
        utility::string_t version
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="group"></param>
    /// <param name="name"></param>
    /// <param name="version"></param>
    pplx::task<utility::string_t> getPackageFilter(
        utility::string_t group,
        utility::string_t name,
        utility::string_t version
    );
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
    pplx::task<utility::string_t> getQuery(
        utility::string_t path,
        double pPeriodlimit,
        utility::string_t _1_property,
        utility::string_t _1_property_value
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<HttpContent> getTruststore(
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<std::shared_ptr<TruststoreInfo>> getTruststoreInfo(
    );
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
    pplx::task<void> postAgent(
        utility::string_t runmode,
        utility::string_t name,
        boost::optional<bool> jcrContentSlashcqDistribute,
        boost::optional<utility::string_t> jcrContentSlashcqDistributeAtTypeHint,
        boost::optional<utility::string_t> jcrContentSlashcqName,
        boost::optional<utility::string_t> jcrContentSlashcqTemplate,
        boost::optional<bool> jcrContentSlashenabled,
        boost::optional<utility::string_t> jcrContentSlashjcrDescription,
        boost::optional<utility::string_t> jcrContentSlashjcrLastModified,
        boost::optional<utility::string_t> jcrContentSlashjcrLastModifiedBy,
        boost::optional<utility::string_t> jcrContentSlashjcrMixinTypes,
        boost::optional<utility::string_t> jcrContentSlashjcrTitle,
        boost::optional<utility::string_t> jcrContentSlashlogLevel,
        boost::optional<bool> jcrContentSlashnoStatusUpdate,
        boost::optional<bool> jcrContentSlashnoVersioning,
        boost::optional<double> jcrContentSlashprotocolConnectTimeout,
        boost::optional<bool> jcrContentSlashprotocolHTTPConnectionClosed,
        boost::optional<utility::string_t> jcrContentSlashprotocolHTTPExpired,
        boost::optional<std::vector<utility::string_t>> jcrContentSlashprotocolHTTPHeaders,
        boost::optional<utility::string_t> jcrContentSlashprotocolHTTPHeadersAtTypeHint,
        boost::optional<utility::string_t> jcrContentSlashprotocolHTTPMethod,
        boost::optional<bool> jcrContentSlashprotocolHTTPSRelaxed,
        boost::optional<utility::string_t> jcrContentSlashprotocolInterface,
        boost::optional<double> jcrContentSlashprotocolSocketTimeout,
        boost::optional<utility::string_t> jcrContentSlashprotocolVersion,
        boost::optional<utility::string_t> jcrContentSlashproxyNTLMDomain,
        boost::optional<utility::string_t> jcrContentSlashproxyNTLMHost,
        boost::optional<utility::string_t> jcrContentSlashproxyHost,
        boost::optional<utility::string_t> jcrContentSlashproxyPassword,
        boost::optional<double> jcrContentSlashproxyPort,
        boost::optional<utility::string_t> jcrContentSlashproxyUser,
        boost::optional<double> jcrContentSlashqueueBatchMaxSize,
        boost::optional<utility::string_t> jcrContentSlashqueueBatchMode,
        boost::optional<double> jcrContentSlashqueueBatchWaitTime,
        boost::optional<utility::string_t> jcrContentSlashretryDelay,
        boost::optional<bool> jcrContentSlashreverseReplication,
        boost::optional<utility::string_t> jcrContentSlashserializationType,
        boost::optional<utility::string_t> jcrContentSlashslingResourceType,
        boost::optional<utility::string_t> jcrContentSlashssl,
        boost::optional<utility::string_t> jcrContentSlashtransportNTLMDomain,
        boost::optional<utility::string_t> jcrContentSlashtransportNTLMHost,
        boost::optional<utility::string_t> jcrContentSlashtransportPassword,
        boost::optional<utility::string_t> jcrContentSlashtransportUri,
        boost::optional<utility::string_t> jcrContentSlashtransportUser,
        boost::optional<bool> jcrContentSlashtriggerDistribute,
        boost::optional<bool> jcrContentSlashtriggerModified,
        boost::optional<bool> jcrContentSlashtriggerOnOffTime,
        boost::optional<bool> jcrContentSlashtriggerReceive,
        boost::optional<bool> jcrContentSlashtriggerSpecific,
        boost::optional<utility::string_t> jcrContentSlashuserId,
        boost::optional<utility::string_t> jcrPrimaryType,
        boost::optional<utility::string_t> operation
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="intermediatePath"></param>
    /// <param name="authorizableId"></param>
    /// <param name="operation"> (optional)</param>
    /// <param name="currentPassword"> (optional)</param>
    /// <param name="newPassword"> (optional)</param>
    /// <param name="rePassword"> (optional)</param>
    /// <param name="keyPassword"> (optional)</param>
    /// <param name="keyStorePass"> (optional)</param>
    /// <param name="alias"> (optional)</param>
    /// <param name="newAlias"> (optional)</param>
    /// <param name="removeAlias"> (optional)</param>
    /// <param name="certChain"> (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="pk"> (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="keyStore"> (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<KeystoreInfo>> postAuthorizableKeystore(
        utility::string_t intermediatePath,
        utility::string_t authorizableId,
        boost::optional<utility::string_t> operation,
        boost::optional<utility::string_t> currentPassword,
        boost::optional<utility::string_t> newPassword,
        boost::optional<utility::string_t> rePassword,
        boost::optional<utility::string_t> keyPassword,
        boost::optional<utility::string_t> keyStorePass,
        boost::optional<utility::string_t> alias,
        boost::optional<utility::string_t> newAlias,
        boost::optional<utility::string_t> removeAlias,
        boost::optional<std::shared_ptr<HttpContent>> certChain,
        boost::optional<std::shared_ptr<HttpContent>> pk,
        boost::optional<std::shared_ptr<HttpContent>> keyStore
    );
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
    pplx::task<utility::string_t> postAuthorizables(
        utility::string_t authorizableId,
        utility::string_t intermediatePath,
        boost::optional<utility::string_t> createUser,
        boost::optional<utility::string_t> createGroup,
        boost::optional<utility::string_t> repPassword,
        boost::optional<utility::string_t> profileSlashgivenName
    );
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
    pplx::task<void> postConfigAdobeGraniteSamlAuthenticationHandler(
        boost::optional<utility::string_t> keyStorePassword,
        boost::optional<utility::string_t> keyStorePasswordAtTypeHint,
        boost::optional<int32_t> servicePeriodranking,
        boost::optional<utility::string_t> servicePeriodrankingAtTypeHint,
        boost::optional<bool> idpHttpRedirect,
        boost::optional<utility::string_t> idpHttpRedirectAtTypeHint,
        boost::optional<bool> createUser,
        boost::optional<utility::string_t> createUserAtTypeHint,
        boost::optional<utility::string_t> defaultRedirectUrl,
        boost::optional<utility::string_t> defaultRedirectUrlAtTypeHint,
        boost::optional<utility::string_t> userIDAttribute,
        boost::optional<utility::string_t> userIDAttributeAtTypeHint,
        boost::optional<std::vector<utility::string_t>> defaultGroups,
        boost::optional<utility::string_t> defaultGroupsAtTypeHint,
        boost::optional<utility::string_t> idpCertAlias,
        boost::optional<utility::string_t> idpCertAliasAtTypeHint,
        boost::optional<bool> addGroupMemberships,
        boost::optional<utility::string_t> addGroupMembershipsAtTypeHint,
        boost::optional<std::vector<utility::string_t>> path,
        boost::optional<utility::string_t> pathAtTypeHint,
        boost::optional<std::vector<utility::string_t>> synchronizeAttributes,
        boost::optional<utility::string_t> synchronizeAttributesAtTypeHint,
        boost::optional<int32_t> clockTolerance,
        boost::optional<utility::string_t> clockToleranceAtTypeHint,
        boost::optional<utility::string_t> groupMembershipAttribute,
        boost::optional<utility::string_t> groupMembershipAttributeAtTypeHint,
        boost::optional<utility::string_t> idpUrl,
        boost::optional<utility::string_t> idpUrlAtTypeHint,
        boost::optional<utility::string_t> logoutUrl,
        boost::optional<utility::string_t> logoutUrlAtTypeHint,
        boost::optional<utility::string_t> serviceProviderEntityId,
        boost::optional<utility::string_t> serviceProviderEntityIdAtTypeHint,
        boost::optional<utility::string_t> assertionConsumerServiceURL,
        boost::optional<utility::string_t> assertionConsumerServiceURLAtTypeHint,
        boost::optional<bool> handleLogout,
        boost::optional<utility::string_t> handleLogoutAtTypeHint,
        boost::optional<utility::string_t> spPrivateKeyAlias,
        boost::optional<utility::string_t> spPrivateKeyAliasAtTypeHint,
        boost::optional<bool> useEncryption,
        boost::optional<utility::string_t> useEncryptionAtTypeHint,
        boost::optional<utility::string_t> nameIdFormat,
        boost::optional<utility::string_t> nameIdFormatAtTypeHint,
        boost::optional<utility::string_t> digestMethod,
        boost::optional<utility::string_t> digestMethodAtTypeHint,
        boost::optional<utility::string_t> signatureMethod,
        boost::optional<utility::string_t> signatureMethodAtTypeHint,
        boost::optional<utility::string_t> userIntermediatePath,
        boost::optional<utility::string_t> userIntermediatePathAtTypeHint
    );
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
    pplx::task<void> postConfigApacheFelixJettyBasedHttpService(
        boost::optional<bool> orgPeriodapachePeriodfelixPeriodhttpsPeriodnio,
        boost::optional<utility::string_t> orgPeriodapachePeriodfelixPeriodhttpsPeriodnioAtTypeHint,
        boost::optional<utility::string_t> orgPeriodapachePeriodfelixPeriodhttpsPeriodkeystore,
        boost::optional<utility::string_t> orgPeriodapachePeriodfelixPeriodhttpsPeriodkeystoreAtTypeHint,
        boost::optional<utility::string_t> orgPeriodapachePeriodfelixPeriodhttpsPeriodkeystorePeriodpassword,
        boost::optional<utility::string_t> orgPeriodapachePeriodfelixPeriodhttpsPeriodkeystorePeriodpasswordAtTypeHint,
        boost::optional<utility::string_t> orgPeriodapachePeriodfelixPeriodhttpsPeriodkeystorePeriodkey,
        boost::optional<utility::string_t> orgPeriodapachePeriodfelixPeriodhttpsPeriodkeystorePeriodkeyAtTypeHint,
        boost::optional<utility::string_t> orgPeriodapachePeriodfelixPeriodhttpsPeriodkeystorePeriodkeyPeriodpassword,
        boost::optional<utility::string_t> orgPeriodapachePeriodfelixPeriodhttpsPeriodkeystorePeriodkeyPeriodpasswordAtTypeHint,
        boost::optional<utility::string_t> orgPeriodapachePeriodfelixPeriodhttpsPeriodtruststore,
        boost::optional<utility::string_t> orgPeriodapachePeriodfelixPeriodhttpsPeriodtruststoreAtTypeHint,
        boost::optional<utility::string_t> orgPeriodapachePeriodfelixPeriodhttpsPeriodtruststorePeriodpassword,
        boost::optional<utility::string_t> orgPeriodapachePeriodfelixPeriodhttpsPeriodtruststorePeriodpasswordAtTypeHint,
        boost::optional<utility::string_t> orgPeriodapachePeriodfelixPeriodhttpsPeriodclientcertificate,
        boost::optional<utility::string_t> orgPeriodapachePeriodfelixPeriodhttpsPeriodclientcertificateAtTypeHint,
        boost::optional<bool> orgPeriodapachePeriodfelixPeriodhttpsPeriodenable,
        boost::optional<utility::string_t> orgPeriodapachePeriodfelixPeriodhttpsPeriodenableAtTypeHint,
        boost::optional<utility::string_t> orgPeriodosgiPeriodservicePeriodhttpPeriodportPeriodsecure,
        boost::optional<utility::string_t> orgPeriodosgiPeriodservicePeriodhttpPeriodportPeriodsecureAtTypeHint
    );
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
    pplx::task<void> postConfigApacheHttpComponentsProxyConfiguration(
        boost::optional<utility::string_t> proxyPeriodhost,
        boost::optional<utility::string_t> proxyPeriodhostAtTypeHint,
        boost::optional<int32_t> proxyPeriodport,
        boost::optional<utility::string_t> proxyPeriodportAtTypeHint,
        boost::optional<std::vector<utility::string_t>> proxyPeriodexceptions,
        boost::optional<utility::string_t> proxyPeriodexceptionsAtTypeHint,
        boost::optional<bool> proxyPeriodenabled,
        boost::optional<utility::string_t> proxyPeriodenabledAtTypeHint,
        boost::optional<utility::string_t> proxyPerioduser,
        boost::optional<utility::string_t> proxyPerioduserAtTypeHint,
        boost::optional<utility::string_t> proxyPeriodpassword,
        boost::optional<utility::string_t> proxyPeriodpasswordAtTypeHint
    );
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
    pplx::task<void> postConfigApacheSlingDavExServlet(
        boost::optional<utility::string_t> alias,
        boost::optional<utility::string_t> aliasAtTypeHint,
        boost::optional<bool> davPeriodcreateAbsoluteUri,
        boost::optional<utility::string_t> davPeriodcreateAbsoluteUriAtTypeHint
    );
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
    pplx::task<void> postConfigApacheSlingGetServlet(
        boost::optional<utility::string_t> jsonPeriodmaximumresults,
        boost::optional<utility::string_t> jsonPeriodmaximumresultsAtTypeHint,
        boost::optional<bool> enablePeriodhtml,
        boost::optional<utility::string_t> enablePeriodhtmlAtTypeHint,
        boost::optional<bool> enablePeriodtxt,
        boost::optional<utility::string_t> enablePeriodtxtAtTypeHint,
        boost::optional<bool> enablePeriodxml,
        boost::optional<utility::string_t> enablePeriodxmlAtTypeHint
    );
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
    pplx::task<void> postConfigApacheSlingReferrerFilter(
        boost::optional<bool> allowPeriodempty,
        boost::optional<utility::string_t> allowPeriodemptyAtTypeHint,
        boost::optional<utility::string_t> allowPeriodhosts,
        boost::optional<utility::string_t> allowPeriodhostsAtTypeHint,
        boost::optional<utility::string_t> allowPeriodhostsPeriodregexp,
        boost::optional<utility::string_t> allowPeriodhostsPeriodregexpAtTypeHint,
        boost::optional<utility::string_t> filterPeriodmethods,
        boost::optional<utility::string_t> filterPeriodmethodsAtTypeHint
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="path"></param>
    /// <param name="name"></param>
    /// <param name="operation"> (optional)</param>
    /// <param name="deleteAuthorizable"> (optional)</param>
    /// <param name="file"> (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<void> postNode(
        utility::string_t path,
        utility::string_t name,
        boost::optional<utility::string_t> operation,
        boost::optional<utility::string_t> deleteAuthorizable,
        boost::optional<std::shared_ptr<HttpContent>> file
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="path"></param>
    /// <param name="name"></param>
    /// <param name="addMembers"> (optional)</param>
    pplx::task<void> postNodeRw(
        utility::string_t path,
        utility::string_t name,
        boost::optional<utility::string_t> addMembers
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="path"></param>
    /// <param name="jcrPrimaryType"></param>
    /// <param name="name"></param>
    pplx::task<void> postPath(
        utility::string_t path,
        utility::string_t jcrPrimaryType,
        utility::string_t name
    );
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
    pplx::task<utility::string_t> postQuery(
        utility::string_t path,
        double pPeriodlimit,
        utility::string_t _1_property,
        utility::string_t _1_property_value
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="ignoredeactivated"></param>
    /// <param name="onlymodified"></param>
    /// <param name="path"></param>
    pplx::task<void> postTreeActivation(
        bool ignoredeactivated,
        bool onlymodified,
        utility::string_t path
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="operation"> (optional)</param>
    /// <param name="newPassword"> (optional)</param>
    /// <param name="rePassword"> (optional)</param>
    /// <param name="keyStoreType"> (optional)</param>
    /// <param name="removeAlias"> (optional)</param>
    /// <param name="certificate"> (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<utility::string_t> postTruststore(
        boost::optional<utility::string_t> operation,
        boost::optional<utility::string_t> newPassword,
        boost::optional<utility::string_t> rePassword,
        boost::optional<utility::string_t> keyStoreType,
        boost::optional<utility::string_t> removeAlias,
        boost::optional<std::shared_ptr<HttpContent>> certificate
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="truststorePeriodp12"> (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<utility::string_t> postTruststorePKCS12(
        boost::optional<std::shared_ptr<HttpContent>> truststorePeriodp12
    );

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_API_SlingApi_H_ */

