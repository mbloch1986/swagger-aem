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
 * OAIInstallStatus_status.h
 *
 * 
 */

#ifndef OAIInstallStatus_status_H
#define OAIInstallStatus_status_H

#include <QJsonObject>



#include "OAIObject.h"

namespace OpenAPI {

class OAIInstallStatus_status: public OAIObject {
public:
    OAIInstallStatus_status();
    OAIInstallStatus_status(QString json);
    ~OAIInstallStatus_status() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    bool isFinished() const;
    void setFinished(const bool &finished);

    qint32 getItemCount() const;
    void setItemCount(const qint32 &item_count);

    virtual bool isSet() const override;

private:
    bool finished;
    bool m_finished_isSet;

    qint32 item_count;
    bool m_item_count_isSet;

};

}

#endif // OAIInstallStatus_status_H
