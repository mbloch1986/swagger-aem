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

#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QVariantMap>
#include <QDebug>

#include "OAIHelpers.h"
#include "OAIConsoleApiRequest.h"

namespace OpenAPI {

OAIConsoleApiRequest::OAIConsoleApiRequest(QHttpEngine::Socket *s, OAIConsoleApiHandler* hdl) : QObject(s), socket(s), handler(hdl) {
    auto headers = s->headers();
    for(auto itr = headers.begin(); itr != headers.end(); itr++) {
        requestHeaders.insert(QString(itr.key()), QString(itr.value()));
    }     
}

OAIConsoleApiRequest::~OAIConsoleApiRequest(){
    disconnect(this, nullptr, nullptr, nullptr);
    qDebug() << "OAIConsoleApiRequest::~OAIConsoleApiRequest()";
}

QMap<QString, QString> 
OAIConsoleApiRequest::getRequestHeaders() const {
    return requestHeaders;
}

void OAIConsoleApiRequest::setResponseHeaders(const QMultiMap<QString, QString>& headers){
    for(auto itr = headers.begin(); itr != headers.end(); ++itr) {
        responseHeaders.insert(itr.key(), itr.value());
    }
}


QHttpEngine::Socket* OAIConsoleApiRequest::getRawSocket(){
    return socket;
}


void OAIConsoleApiRequest::getAemProductInfoRequest(){
    qDebug() << "//system/console/status-productinfo.json";
    connect(this, &OAIConsoleApiRequest::getAemProductInfo, handler, &OAIConsoleApiHandler::getAemProductInfo);
    
    


    emit getAemProductInfo();
}


void OAIConsoleApiRequest::getConfigMgrRequest(){
    qDebug() << "//system/console/configMgr";
    connect(this, &OAIConsoleApiRequest::getConfigMgr, handler, &OAIConsoleApiHandler::getConfigMgr);
    
    


    emit getConfigMgr();
}


void OAIConsoleApiRequest::postBundleRequest(const QString& namestr){
    qDebug() << "//system/console/bundles/{name}";
    connect(this, &OAIConsoleApiRequest::postBundle, handler, &OAIConsoleApiHandler::postBundle);
    
    
    QString action;   
    if(socket->queryString().keys().contains("action")){
        fromStringValue(socket->queryString().value("action"), action);
    }
    
    QString name;
    fromStringValue(namestr, name);
    

    emit postBundle( name,  action);
}


void OAIConsoleApiRequest::postJmxRepositoryRequest(const QString& actionstr){
    qDebug() << "//system/console/jmx/com.adobe.granite:type=Repository/op/{action}";
    connect(this, &OAIConsoleApiRequest::postJmxRepository, handler, &OAIConsoleApiHandler::postJmxRepository);
    
    
    QString action;
    fromStringValue(actionstr, action);
    

    emit postJmxRepository( action);
}


void OAIConsoleApiRequest::postSamlConfigurationRequest(){
    qDebug() << "//system/console/configMgr/com.adobe.granite.auth.saml.SamlAuthenticationHandler";
    connect(this, &OAIConsoleApiRequest::postSamlConfiguration, handler, &OAIConsoleApiHandler::postSamlConfiguration);
    
    
    bool post;   
    if(socket->queryString().keys().contains("post")){
        fromStringValue(socket->queryString().value("post"), post);
    }
    
    bool apply;   
    if(socket->queryString().keys().contains("apply")){
        fromStringValue(socket->queryString().value("apply"), apply);
    }
    
    bool _delete;   
    if(socket->queryString().keys().contains("_delete")){
        fromStringValue(socket->queryString().value("_delete"), _delete);
    }
    
    QString action;   
    if(socket->queryString().keys().contains("action")){
        fromStringValue(socket->queryString().value("action"), action);
    }
    
    QString location;   
    if(socket->queryString().keys().contains("location")){
        fromStringValue(socket->queryString().value("location"), location);
    }
    
    QList<QString> path;   
    if(socket->queryString().keys().contains("path")){
        fromStringValue(socket->queryString().values("path"), path);
    }
    
    qint32 service_ranking;   
    if(socket->queryString().keys().contains("service_ranking")){
        fromStringValue(socket->queryString().value("service_ranking"), service_ranking);
    }
    
    QString idp_url;   
    if(socket->queryString().keys().contains("idp_url")){
        fromStringValue(socket->queryString().value("idp_url"), idp_url);
    }
    
    QString idp_cert_alias;   
    if(socket->queryString().keys().contains("idp_cert_alias")){
        fromStringValue(socket->queryString().value("idp_cert_alias"), idp_cert_alias);
    }
    
    bool idp_http_redirect;   
    if(socket->queryString().keys().contains("idp_http_redirect")){
        fromStringValue(socket->queryString().value("idp_http_redirect"), idp_http_redirect);
    }
    
    QString service_provider_entity_id;   
    if(socket->queryString().keys().contains("service_provider_entity_id")){
        fromStringValue(socket->queryString().value("service_provider_entity_id"), service_provider_entity_id);
    }
    
    QString assertion_consumer_service_url;   
    if(socket->queryString().keys().contains("assertion_consumer_service_url")){
        fromStringValue(socket->queryString().value("assertion_consumer_service_url"), assertion_consumer_service_url);
    }
    
    QString sp_private_key_alias;   
    if(socket->queryString().keys().contains("sp_private_key_alias")){
        fromStringValue(socket->queryString().value("sp_private_key_alias"), sp_private_key_alias);
    }
    
    QString key_store_password;   
    if(socket->queryString().keys().contains("key_store_password")){
        fromStringValue(socket->queryString().value("key_store_password"), key_store_password);
    }
    
    QString default_redirect_url;   
    if(socket->queryString().keys().contains("default_redirect_url")){
        fromStringValue(socket->queryString().value("default_redirect_url"), default_redirect_url);
    }
    
    QString user_id_attribute;   
    if(socket->queryString().keys().contains("user_id_attribute")){
        fromStringValue(socket->queryString().value("user_id_attribute"), user_id_attribute);
    }
    
    bool use_encryption;   
    if(socket->queryString().keys().contains("use_encryption")){
        fromStringValue(socket->queryString().value("use_encryption"), use_encryption);
    }
    
    bool create_user;   
    if(socket->queryString().keys().contains("create_user")){
        fromStringValue(socket->queryString().value("create_user"), create_user);
    }
    
    bool add_group_memberships;   
    if(socket->queryString().keys().contains("add_group_memberships")){
        fromStringValue(socket->queryString().value("add_group_memberships"), add_group_memberships);
    }
    
    QString group_membership_attribute;   
    if(socket->queryString().keys().contains("group_membership_attribute")){
        fromStringValue(socket->queryString().value("group_membership_attribute"), group_membership_attribute);
    }
    
    QList<QString> default_groups;   
    if(socket->queryString().keys().contains("default_groups")){
        fromStringValue(socket->queryString().values("default_groups"), default_groups);
    }
    
    QString name_id_format;   
    if(socket->queryString().keys().contains("name_id_format")){
        fromStringValue(socket->queryString().value("name_id_format"), name_id_format);
    }
    
    QList<QString> synchronize_attributes;   
    if(socket->queryString().keys().contains("synchronize_attributes")){
        fromStringValue(socket->queryString().values("synchronize_attributes"), synchronize_attributes);
    }
    
    bool handle_logout;   
    if(socket->queryString().keys().contains("handle_logout")){
        fromStringValue(socket->queryString().value("handle_logout"), handle_logout);
    }
    
    QString logout_url;   
    if(socket->queryString().keys().contains("logout_url")){
        fromStringValue(socket->queryString().value("logout_url"), logout_url);
    }
    
    qint32 clock_tolerance;   
    if(socket->queryString().keys().contains("clock_tolerance")){
        fromStringValue(socket->queryString().value("clock_tolerance"), clock_tolerance);
    }
    
    QString digest_method;   
    if(socket->queryString().keys().contains("digest_method")){
        fromStringValue(socket->queryString().value("digest_method"), digest_method);
    }
    
    QString signature_method;   
    if(socket->queryString().keys().contains("signature_method")){
        fromStringValue(socket->queryString().value("signature_method"), signature_method);
    }
    
    QString user_intermediate_path;   
    if(socket->queryString().keys().contains("user_intermediate_path")){
        fromStringValue(socket->queryString().value("user_intermediate_path"), user_intermediate_path);
    }
    
    QList<QString> propertylist;   
    if(socket->queryString().keys().contains("propertylist")){
        fromStringValue(socket->queryString().values("propertylist"), propertylist);
    }
    


    emit postSamlConfiguration( post,  apply,  _delete,  action,  location,  path,  service_ranking,  idp_url,  idp_cert_alias,  idp_http_redirect,  service_provider_entity_id,  assertion_consumer_service_url,  sp_private_key_alias,  key_store_password,  default_redirect_url,  user_id_attribute,  use_encryption,  create_user,  add_group_memberships,  group_membership_attribute,  default_groups,  name_id_format,  synchronize_attributes,  handle_logout,  logout_url,  clock_tolerance,  digest_method,  signature_method,  user_intermediate_path,  propertylist);
}

  

void OAIConsoleApiRequest::getAemProductInfoResponse(const QList<QString>& res){
    writeResponseHeaders();
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toArray());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIConsoleApiRequest::getConfigMgrResponse(const QString& res){
    writeResponseHeaders();
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIConsoleApiRequest::postBundleResponse(){
    writeResponseHeaders();    
    socket->setStatusCode(QHttpEngine::Socket::OK);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIConsoleApiRequest::postJmxRepositoryResponse(){
    writeResponseHeaders();    
    socket->setStatusCode(QHttpEngine::Socket::OK);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIConsoleApiRequest::postSamlConfigurationResponse(const OAISamlConfigurationInfo& res){
    writeResponseHeaders();
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}


void OAIConsoleApiRequest::getAemProductInfoError(const QList<QString>& res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    writeResponseHeaders();
    Q_UNUSED(error_str);  // response will be used instead of error string
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toArray());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIConsoleApiRequest::getConfigMgrError(const QString& res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    writeResponseHeaders();
    Q_UNUSED(error_str);  // response will be used instead of error string
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIConsoleApiRequest::postBundleError(QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    writeResponseHeaders();    
    socket->setStatusCode(QHttpEngine::Socket::NotFound);
    socket->write(error_str.toUtf8());
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIConsoleApiRequest::postJmxRepositoryError(QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    writeResponseHeaders();    
    socket->setStatusCode(QHttpEngine::Socket::NotFound);
    socket->write(error_str.toUtf8());
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIConsoleApiRequest::postSamlConfigurationError(const OAISamlConfigurationInfo& res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    writeResponseHeaders();
    Q_UNUSED(error_str);  // response will be used instead of error string
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}


void OAIConsoleApiRequest::sendCustomResponse(QByteArray & res, QNetworkReply::NetworkError error_type){
    Q_UNUSED(res);  // TODO
    Q_UNUSED(error_type); // TODO
}
    
void OAIConsoleApiRequest::sendCustomResponse(QIODevice *res, QNetworkReply::NetworkError error_type){
    Q_UNUSED(res);  // TODO
    Q_UNUSED(error_type); // TODO
}

}
