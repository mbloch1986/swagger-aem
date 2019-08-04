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

#ifndef OAI_OAIConsoleApiHandler_H
#define OAI_OAIConsoleApiHandler_H

#include <QObject>

#include "OAISamlConfigurationInfo.h"
#include <QString>

namespace OpenAPI {

class OAIConsoleApiHandler : public QObject
{
    Q_OBJECT
    
public:
    OAIConsoleApiHandler();
    virtual ~OAIConsoleApiHandler();


public slots:
    virtual void getAemProductInfo();
    virtual void getConfigMgr();
    virtual void postBundle(QString name, QString action);
    virtual void postJmxRepository(QString action);
    virtual void postSamlConfiguration(bool post, bool apply, bool _delete, QString action, QString location, QList<QString> path, qint32 service_ranking, QString idp_url, QString idp_cert_alias, bool idp_http_redirect, QString service_provider_entity_id, QString assertion_consumer_service_url, QString sp_private_key_alias, QString key_store_password, QString default_redirect_url, QString user_id_attribute, bool use_encryption, bool create_user, bool add_group_memberships, QString group_membership_attribute, QList<QString> default_groups, QString name_id_format, QList<QString> synchronize_attributes, bool handle_logout, QString logout_url, qint32 clock_tolerance, QString digest_method, QString signature_method, QString user_intermediate_path, QList<QString> propertylist);
    

};

}

#endif // OAI_OAIConsoleApiHandler_H
