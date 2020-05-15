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

#ifndef OAI_OAICrxApiHandler_H
#define OAI_OAICrxApiHandler_H

#include <QObject>

#include "OAIInstallStatus.h"
#include <QIODevice>
#include <QString>

namespace OpenAPI {

class OAICrxApiHandler : public QObject
{
    Q_OBJECT
    
public:
    OAICrxApiHandler();
    virtual ~OAICrxApiHandler();


public slots:
    virtual void getCrxdeStatus();
    virtual void getInstallStatus();
    virtual void getPackageManagerServlet();
    virtual void postPackageService(QString cmd);
    virtual void postPackageServiceJson(QString path, QString cmd, QString group_name, QString package_name, QString package_version, QString _charset_, bool force, bool recursive, QIODevice* package);
    virtual void postPackageUpdate(QString group_name, QString package_name, QString version, QString path, QString filter, QString _charset_);
    virtual void postSetPassword(QString old, QString plain, QString verify);
    

};

}

#endif // OAI_OAICrxApiHandler_H