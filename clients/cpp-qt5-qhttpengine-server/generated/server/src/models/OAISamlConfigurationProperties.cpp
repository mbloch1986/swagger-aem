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


#include "OAISamlConfigurationProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAISamlConfigurationProperties::OAISamlConfigurationProperties(QString json) {
    this->fromJson(json);
}

OAISamlConfigurationProperties::OAISamlConfigurationProperties() {
    this->init();
}

OAISamlConfigurationProperties::~OAISamlConfigurationProperties() {
    
}

void
OAISamlConfigurationProperties::init() {
    m_path_isSet = false;
    m_service_ranking_isSet = false;
    m_idp_url_isSet = false;
    m_idp_cert_alias_isSet = false;
    m_idp_http_redirect_isSet = false;
    m_service_provider_entity_id_isSet = false;
    m_assertion_consumer_service_url_isSet = false;
    m_sp_private_key_alias_isSet = false;
    m_key_store_password_isSet = false;
    m_default_redirect_url_isSet = false;
    m_user_id_attribute_isSet = false;
    m_use_encryption_isSet = false;
    m_create_user_isSet = false;
    m_add_group_memberships_isSet = false;
    m_group_membership_attribute_isSet = false;
    m_default_groups_isSet = false;
    m_name_id_format_isSet = false;
    m_synchronize_attributes_isSet = false;
    m_handle_logout_isSet = false;
    m_logout_url_isSet = false;
    m_clock_tolerance_isSet = false;
    m_digest_method_isSet = false;
    m_signature_method_isSet = false;
    m_user_intermediate_path_isSet = false;
}

void
OAISamlConfigurationProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAISamlConfigurationProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(path, json[QString("path")]);
    
    ::OpenAPI::fromJsonValue(service_ranking, json[QString("service.ranking")]);
    
    ::OpenAPI::fromJsonValue(idp_url, json[QString("idpUrl")]);
    
    ::OpenAPI::fromJsonValue(idp_cert_alias, json[QString("idpCertAlias")]);
    
    ::OpenAPI::fromJsonValue(idp_http_redirect, json[QString("idpHttpRedirect")]);
    
    ::OpenAPI::fromJsonValue(service_provider_entity_id, json[QString("serviceProviderEntityId")]);
    
    ::OpenAPI::fromJsonValue(assertion_consumer_service_url, json[QString("assertionConsumerServiceURL")]);
    
    ::OpenAPI::fromJsonValue(sp_private_key_alias, json[QString("spPrivateKeyAlias")]);
    
    ::OpenAPI::fromJsonValue(key_store_password, json[QString("keyStorePassword")]);
    
    ::OpenAPI::fromJsonValue(default_redirect_url, json[QString("defaultRedirectUrl")]);
    
    ::OpenAPI::fromJsonValue(user_id_attribute, json[QString("userIDAttribute")]);
    
    ::OpenAPI::fromJsonValue(use_encryption, json[QString("useEncryption")]);
    
    ::OpenAPI::fromJsonValue(create_user, json[QString("createUser")]);
    
    ::OpenAPI::fromJsonValue(add_group_memberships, json[QString("addGroupMemberships")]);
    
    ::OpenAPI::fromJsonValue(group_membership_attribute, json[QString("groupMembershipAttribute")]);
    
    ::OpenAPI::fromJsonValue(default_groups, json[QString("defaultGroups")]);
    
    ::OpenAPI::fromJsonValue(name_id_format, json[QString("nameIdFormat")]);
    
    ::OpenAPI::fromJsonValue(synchronize_attributes, json[QString("synchronizeAttributes")]);
    
    ::OpenAPI::fromJsonValue(handle_logout, json[QString("handleLogout")]);
    
    ::OpenAPI::fromJsonValue(logout_url, json[QString("logoutUrl")]);
    
    ::OpenAPI::fromJsonValue(clock_tolerance, json[QString("clockTolerance")]);
    
    ::OpenAPI::fromJsonValue(digest_method, json[QString("digestMethod")]);
    
    ::OpenAPI::fromJsonValue(signature_method, json[QString("signatureMethod")]);
    
    ::OpenAPI::fromJsonValue(user_intermediate_path, json[QString("userIntermediatePath")]);
    
}

QString
OAISamlConfigurationProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAISamlConfigurationProperties::asJsonObject() const {
    QJsonObject obj;
	if(path.isSet()){
        obj.insert(QString("path"), ::OpenAPI::toJsonValue(path));
    }
	if(service_ranking.isSet()){
        obj.insert(QString("service.ranking"), ::OpenAPI::toJsonValue(service_ranking));
    }
	if(idp_url.isSet()){
        obj.insert(QString("idpUrl"), ::OpenAPI::toJsonValue(idp_url));
    }
	if(idp_cert_alias.isSet()){
        obj.insert(QString("idpCertAlias"), ::OpenAPI::toJsonValue(idp_cert_alias));
    }
	if(idp_http_redirect.isSet()){
        obj.insert(QString("idpHttpRedirect"), ::OpenAPI::toJsonValue(idp_http_redirect));
    }
	if(service_provider_entity_id.isSet()){
        obj.insert(QString("serviceProviderEntityId"), ::OpenAPI::toJsonValue(service_provider_entity_id));
    }
	if(assertion_consumer_service_url.isSet()){
        obj.insert(QString("assertionConsumerServiceURL"), ::OpenAPI::toJsonValue(assertion_consumer_service_url));
    }
	if(sp_private_key_alias.isSet()){
        obj.insert(QString("spPrivateKeyAlias"), ::OpenAPI::toJsonValue(sp_private_key_alias));
    }
	if(key_store_password.isSet()){
        obj.insert(QString("keyStorePassword"), ::OpenAPI::toJsonValue(key_store_password));
    }
	if(default_redirect_url.isSet()){
        obj.insert(QString("defaultRedirectUrl"), ::OpenAPI::toJsonValue(default_redirect_url));
    }
	if(user_id_attribute.isSet()){
        obj.insert(QString("userIDAttribute"), ::OpenAPI::toJsonValue(user_id_attribute));
    }
	if(use_encryption.isSet()){
        obj.insert(QString("useEncryption"), ::OpenAPI::toJsonValue(use_encryption));
    }
	if(create_user.isSet()){
        obj.insert(QString("createUser"), ::OpenAPI::toJsonValue(create_user));
    }
	if(add_group_memberships.isSet()){
        obj.insert(QString("addGroupMemberships"), ::OpenAPI::toJsonValue(add_group_memberships));
    }
	if(group_membership_attribute.isSet()){
        obj.insert(QString("groupMembershipAttribute"), ::OpenAPI::toJsonValue(group_membership_attribute));
    }
	if(default_groups.isSet()){
        obj.insert(QString("defaultGroups"), ::OpenAPI::toJsonValue(default_groups));
    }
	if(name_id_format.isSet()){
        obj.insert(QString("nameIdFormat"), ::OpenAPI::toJsonValue(name_id_format));
    }
	if(synchronize_attributes.isSet()){
        obj.insert(QString("synchronizeAttributes"), ::OpenAPI::toJsonValue(synchronize_attributes));
    }
	if(handle_logout.isSet()){
        obj.insert(QString("handleLogout"), ::OpenAPI::toJsonValue(handle_logout));
    }
	if(logout_url.isSet()){
        obj.insert(QString("logoutUrl"), ::OpenAPI::toJsonValue(logout_url));
    }
	if(clock_tolerance.isSet()){
        obj.insert(QString("clockTolerance"), ::OpenAPI::toJsonValue(clock_tolerance));
    }
	if(digest_method.isSet()){
        obj.insert(QString("digestMethod"), ::OpenAPI::toJsonValue(digest_method));
    }
	if(signature_method.isSet()){
        obj.insert(QString("signatureMethod"), ::OpenAPI::toJsonValue(signature_method));
    }
	if(user_intermediate_path.isSet()){
        obj.insert(QString("userIntermediatePath"), ::OpenAPI::toJsonValue(user_intermediate_path));
    }
    return obj;
}

OAISamlConfigurationPropertyItemsArray
OAISamlConfigurationProperties::getPath() const {
    return path;
}
void
OAISamlConfigurationProperties::setPath(const OAISamlConfigurationPropertyItemsArray &path) {
    this->path = path;
    this->m_path_isSet = true;
}

OAISamlConfigurationPropertyItemsLong
OAISamlConfigurationProperties::getServiceRanking() const {
    return service_ranking;
}
void
OAISamlConfigurationProperties::setServiceRanking(const OAISamlConfigurationPropertyItemsLong &service_ranking) {
    this->service_ranking = service_ranking;
    this->m_service_ranking_isSet = true;
}

OAISamlConfigurationPropertyItemsString
OAISamlConfigurationProperties::getIdpUrl() const {
    return idp_url;
}
void
OAISamlConfigurationProperties::setIdpUrl(const OAISamlConfigurationPropertyItemsString &idp_url) {
    this->idp_url = idp_url;
    this->m_idp_url_isSet = true;
}

OAISamlConfigurationPropertyItemsString
OAISamlConfigurationProperties::getIdpCertAlias() const {
    return idp_cert_alias;
}
void
OAISamlConfigurationProperties::setIdpCertAlias(const OAISamlConfigurationPropertyItemsString &idp_cert_alias) {
    this->idp_cert_alias = idp_cert_alias;
    this->m_idp_cert_alias_isSet = true;
}

OAISamlConfigurationPropertyItemsBoolean
OAISamlConfigurationProperties::getIdpHttpRedirect() const {
    return idp_http_redirect;
}
void
OAISamlConfigurationProperties::setIdpHttpRedirect(const OAISamlConfigurationPropertyItemsBoolean &idp_http_redirect) {
    this->idp_http_redirect = idp_http_redirect;
    this->m_idp_http_redirect_isSet = true;
}

OAISamlConfigurationPropertyItemsString
OAISamlConfigurationProperties::getServiceProviderEntityId() const {
    return service_provider_entity_id;
}
void
OAISamlConfigurationProperties::setServiceProviderEntityId(const OAISamlConfigurationPropertyItemsString &service_provider_entity_id) {
    this->service_provider_entity_id = service_provider_entity_id;
    this->m_service_provider_entity_id_isSet = true;
}

OAISamlConfigurationPropertyItemsString
OAISamlConfigurationProperties::getAssertionConsumerServiceUrl() const {
    return assertion_consumer_service_url;
}
void
OAISamlConfigurationProperties::setAssertionConsumerServiceUrl(const OAISamlConfigurationPropertyItemsString &assertion_consumer_service_url) {
    this->assertion_consumer_service_url = assertion_consumer_service_url;
    this->m_assertion_consumer_service_url_isSet = true;
}

OAISamlConfigurationPropertyItemsString
OAISamlConfigurationProperties::getSpPrivateKeyAlias() const {
    return sp_private_key_alias;
}
void
OAISamlConfigurationProperties::setSpPrivateKeyAlias(const OAISamlConfigurationPropertyItemsString &sp_private_key_alias) {
    this->sp_private_key_alias = sp_private_key_alias;
    this->m_sp_private_key_alias_isSet = true;
}

OAISamlConfigurationPropertyItemsString
OAISamlConfigurationProperties::getKeyStorePassword() const {
    return key_store_password;
}
void
OAISamlConfigurationProperties::setKeyStorePassword(const OAISamlConfigurationPropertyItemsString &key_store_password) {
    this->key_store_password = key_store_password;
    this->m_key_store_password_isSet = true;
}

OAISamlConfigurationPropertyItemsString
OAISamlConfigurationProperties::getDefaultRedirectUrl() const {
    return default_redirect_url;
}
void
OAISamlConfigurationProperties::setDefaultRedirectUrl(const OAISamlConfigurationPropertyItemsString &default_redirect_url) {
    this->default_redirect_url = default_redirect_url;
    this->m_default_redirect_url_isSet = true;
}

OAISamlConfigurationPropertyItemsString
OAISamlConfigurationProperties::getUserIdAttribute() const {
    return user_id_attribute;
}
void
OAISamlConfigurationProperties::setUserIdAttribute(const OAISamlConfigurationPropertyItemsString &user_id_attribute) {
    this->user_id_attribute = user_id_attribute;
    this->m_user_id_attribute_isSet = true;
}

OAISamlConfigurationPropertyItemsBoolean
OAISamlConfigurationProperties::getUseEncryption() const {
    return use_encryption;
}
void
OAISamlConfigurationProperties::setUseEncryption(const OAISamlConfigurationPropertyItemsBoolean &use_encryption) {
    this->use_encryption = use_encryption;
    this->m_use_encryption_isSet = true;
}

OAISamlConfigurationPropertyItemsBoolean
OAISamlConfigurationProperties::getCreateUser() const {
    return create_user;
}
void
OAISamlConfigurationProperties::setCreateUser(const OAISamlConfigurationPropertyItemsBoolean &create_user) {
    this->create_user = create_user;
    this->m_create_user_isSet = true;
}

OAISamlConfigurationPropertyItemsBoolean
OAISamlConfigurationProperties::getAddGroupMemberships() const {
    return add_group_memberships;
}
void
OAISamlConfigurationProperties::setAddGroupMemberships(const OAISamlConfigurationPropertyItemsBoolean &add_group_memberships) {
    this->add_group_memberships = add_group_memberships;
    this->m_add_group_memberships_isSet = true;
}

OAISamlConfigurationPropertyItemsString
OAISamlConfigurationProperties::getGroupMembershipAttribute() const {
    return group_membership_attribute;
}
void
OAISamlConfigurationProperties::setGroupMembershipAttribute(const OAISamlConfigurationPropertyItemsString &group_membership_attribute) {
    this->group_membership_attribute = group_membership_attribute;
    this->m_group_membership_attribute_isSet = true;
}

OAISamlConfigurationPropertyItemsArray
OAISamlConfigurationProperties::getDefaultGroups() const {
    return default_groups;
}
void
OAISamlConfigurationProperties::setDefaultGroups(const OAISamlConfigurationPropertyItemsArray &default_groups) {
    this->default_groups = default_groups;
    this->m_default_groups_isSet = true;
}

OAISamlConfigurationPropertyItemsString
OAISamlConfigurationProperties::getNameIdFormat() const {
    return name_id_format;
}
void
OAISamlConfigurationProperties::setNameIdFormat(const OAISamlConfigurationPropertyItemsString &name_id_format) {
    this->name_id_format = name_id_format;
    this->m_name_id_format_isSet = true;
}

OAISamlConfigurationPropertyItemsArray
OAISamlConfigurationProperties::getSynchronizeAttributes() const {
    return synchronize_attributes;
}
void
OAISamlConfigurationProperties::setSynchronizeAttributes(const OAISamlConfigurationPropertyItemsArray &synchronize_attributes) {
    this->synchronize_attributes = synchronize_attributes;
    this->m_synchronize_attributes_isSet = true;
}

OAISamlConfigurationPropertyItemsBoolean
OAISamlConfigurationProperties::getHandleLogout() const {
    return handle_logout;
}
void
OAISamlConfigurationProperties::setHandleLogout(const OAISamlConfigurationPropertyItemsBoolean &handle_logout) {
    this->handle_logout = handle_logout;
    this->m_handle_logout_isSet = true;
}

OAISamlConfigurationPropertyItemsString
OAISamlConfigurationProperties::getLogoutUrl() const {
    return logout_url;
}
void
OAISamlConfigurationProperties::setLogoutUrl(const OAISamlConfigurationPropertyItemsString &logout_url) {
    this->logout_url = logout_url;
    this->m_logout_url_isSet = true;
}

OAISamlConfigurationPropertyItemsLong
OAISamlConfigurationProperties::getClockTolerance() const {
    return clock_tolerance;
}
void
OAISamlConfigurationProperties::setClockTolerance(const OAISamlConfigurationPropertyItemsLong &clock_tolerance) {
    this->clock_tolerance = clock_tolerance;
    this->m_clock_tolerance_isSet = true;
}

OAISamlConfigurationPropertyItemsString
OAISamlConfigurationProperties::getDigestMethod() const {
    return digest_method;
}
void
OAISamlConfigurationProperties::setDigestMethod(const OAISamlConfigurationPropertyItemsString &digest_method) {
    this->digest_method = digest_method;
    this->m_digest_method_isSet = true;
}

OAISamlConfigurationPropertyItemsString
OAISamlConfigurationProperties::getSignatureMethod() const {
    return signature_method;
}
void
OAISamlConfigurationProperties::setSignatureMethod(const OAISamlConfigurationPropertyItemsString &signature_method) {
    this->signature_method = signature_method;
    this->m_signature_method_isSet = true;
}

OAISamlConfigurationPropertyItemsString
OAISamlConfigurationProperties::getUserIntermediatePath() const {
    return user_intermediate_path;
}
void
OAISamlConfigurationProperties::setUserIntermediatePath(const OAISamlConfigurationPropertyItemsString &user_intermediate_path) {
    this->user_intermediate_path = user_intermediate_path;
    this->m_user_intermediate_path_isSet = true;
}


bool
OAISamlConfigurationProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(path.isSet()){ isObjectUpdated = true; break;}
    
        if(service_ranking.isSet()){ isObjectUpdated = true; break;}
    
        if(idp_url.isSet()){ isObjectUpdated = true; break;}
    
        if(idp_cert_alias.isSet()){ isObjectUpdated = true; break;}
    
        if(idp_http_redirect.isSet()){ isObjectUpdated = true; break;}
    
        if(service_provider_entity_id.isSet()){ isObjectUpdated = true; break;}
    
        if(assertion_consumer_service_url.isSet()){ isObjectUpdated = true; break;}
    
        if(sp_private_key_alias.isSet()){ isObjectUpdated = true; break;}
    
        if(key_store_password.isSet()){ isObjectUpdated = true; break;}
    
        if(default_redirect_url.isSet()){ isObjectUpdated = true; break;}
    
        if(user_id_attribute.isSet()){ isObjectUpdated = true; break;}
    
        if(use_encryption.isSet()){ isObjectUpdated = true; break;}
    
        if(create_user.isSet()){ isObjectUpdated = true; break;}
    
        if(add_group_memberships.isSet()){ isObjectUpdated = true; break;}
    
        if(group_membership_attribute.isSet()){ isObjectUpdated = true; break;}
    
        if(default_groups.isSet()){ isObjectUpdated = true; break;}
    
        if(name_id_format.isSet()){ isObjectUpdated = true; break;}
    
        if(synchronize_attributes.isSet()){ isObjectUpdated = true; break;}
    
        if(handle_logout.isSet()){ isObjectUpdated = true; break;}
    
        if(logout_url.isSet()){ isObjectUpdated = true; break;}
    
        if(clock_tolerance.isSet()){ isObjectUpdated = true; break;}
    
        if(digest_method.isSet()){ isObjectUpdated = true; break;}
    
        if(signature_method.isSet()){ isObjectUpdated = true; break;}
    
        if(user_intermediate_path.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

