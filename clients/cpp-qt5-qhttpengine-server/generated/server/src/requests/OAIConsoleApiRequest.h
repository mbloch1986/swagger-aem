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

#ifndef OAI_OAIConsoleApiRequest_H
#define OAI_OAIConsoleApiRequest_H

#include <QObject>
#include <QStringList>
#include <QMultiMap>
#include <QNetworkReply>
#include <QSharedPointer>

#include <qhttpengine/socket.h>
#include "OAISamlConfigurationInfo.h"
#include <QString>
#include "OAIConsoleApiHandler.h"

namespace OpenAPI {

class OAIConsoleApiRequest : public QObject
{
    Q_OBJECT
    
public:
    OAIConsoleApiRequest(QHttpEngine::Socket *s, OAIConsoleApiHandler* handler);
    virtual ~OAIConsoleApiRequest();

    void getAemProductInfoRequest();
    void getConfigMgrRequest();
    void postBundleRequest(const QString& name);
    void postJmxRepositoryRequest(const QString& action);
    void postSamlConfigurationRequest();
    

    void getAemProductInfoResponse(const QList<QString>& res);
    void getConfigMgrResponse(const QString& res);
    void postBundleResponse();
    void postJmxRepositoryResponse();
    void postSamlConfigurationResponse(const OAISamlConfigurationInfo& res);
    

    void getAemProductInfoError(const QList<QString>& res, QNetworkReply::NetworkError error_type, QString& error_str);
    void getConfigMgrError(const QString& res, QNetworkReply::NetworkError error_type, QString& error_str);
    void postBundleError(QNetworkReply::NetworkError error_type, QString& error_str);
    void postJmxRepositoryError(QNetworkReply::NetworkError error_type, QString& error_str);
    void postSamlConfigurationError(const OAISamlConfigurationInfo& res, QNetworkReply::NetworkError error_type, QString& error_str);
    

    void sendCustomResponse(QByteArray & res, QNetworkReply::NetworkError error_type);

    void sendCustomResponse(QIODevice *res, QNetworkReply::NetworkError error_type);

    QMap<QString, QString> getRequestHeaders() const;

    QHttpEngine::Socket* getRawSocket();

    void setResponseHeaders(const QMultiMap<QString,QString>& headers);

signals:
    void getAemProductInfo();
    void getConfigMgr();
    void postBundle(QString name, QString action);
    void postJmxRepository(QString action);
    void postSamlConfiguration(bool post, bool apply, bool _delete, QString action, QString location, QList<QString> path, qint32 service_ranking, QString idp_url, QString idp_cert_alias, bool idp_http_redirect, QString service_provider_entity_id, QString assertion_consumer_service_url, QString sp_private_key_alias, QString key_store_password, QString default_redirect_url, QString user_id_attribute, bool use_encryption, bool create_user, bool add_group_memberships, QString group_membership_attribute, QList<QString> default_groups, QString name_id_format, QList<QString> synchronize_attributes, bool handle_logout, QString logout_url, qint32 clock_tolerance, QString digest_method, QString signature_method, QString user_intermediate_path, QList<QString> propertylist);
    

private:
    QMap<QString, QString> requestHeaders;
    QMap<QString, QString> responseHeaders;
    QHttpEngine::Socket  *socket;
    OAIConsoleApiHandler *handler;

    inline void writeResponseHeaders(){
        QHttpEngine::Socket::HeaderMap resHeaders;
        for(auto itr = responseHeaders.begin(); itr != responseHeaders.end(); ++itr) {
            resHeaders.insert(itr.key().toUtf8(), itr.value().toUtf8());
        }
        socket->setHeaders(resHeaders);
        socket->writeHeaders();        
    }
};

}

#endif // OAI_OAIConsoleApiRequest_H
