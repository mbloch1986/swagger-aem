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

#ifndef OAI_OAICustomApiRequest_H
#define OAI_OAICustomApiRequest_H

#include <QObject>
#include <QStringList>
#include <QMultiMap>
#include <QNetworkReply>
#include <QSharedPointer>

#include <qhttpengine/socket.h>
#include <QString>
#include "OAICustomApiHandler.h"

namespace OpenAPI {

class OAICustomApiRequest : public QObject
{
    Q_OBJECT
    
public:
    OAICustomApiRequest(QHttpEngine::Socket *s, OAICustomApiHandler* handler);
    virtual ~OAICustomApiRequest();

    void getAemHealthCheckRequest();
    void postConfigAemHealthCheckServletRequest();
    void postConfigAemPasswordResetRequest();
    

    void getAemHealthCheckResponse(const QString& res);
    void postConfigAemHealthCheckServletResponse();
    void postConfigAemPasswordResetResponse();
    

    void getAemHealthCheckError(const QString& res, QNetworkReply::NetworkError error_type, QString& error_str);
    void postConfigAemHealthCheckServletError(QNetworkReply::NetworkError error_type, QString& error_str);
    void postConfigAemPasswordResetError(QNetworkReply::NetworkError error_type, QString& error_str);
    

    void sendCustomResponse(QByteArray & res, QNetworkReply::NetworkError error_type);

    void sendCustomResponse(QIODevice *res, QNetworkReply::NetworkError error_type);

    QMap<QString, QString> getRequestHeaders() const;

    QHttpEngine::Socket* getRawSocket();

    void setResponseHeaders(const QMultiMap<QString,QString>& headers);

signals:
    void getAemHealthCheck(QString tags, bool combine_tags_or);
    void postConfigAemHealthCheckServlet(QList<QString> bundles_ignored, QString bundles_ignored_type_hint);
    void postConfigAemPasswordReset(QList<QString> pwdreset_authorizables, QString pwdreset_authorizables_type_hint);
    

private:
    QMap<QString, QString> requestHeaders;
    QMap<QString, QString> responseHeaders;
    QHttpEngine::Socket  *socket;
    OAICustomApiHandler *handler;

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

#endif // OAI_OAICustomApiRequest_H
