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
 * OAIInstallStatus.h
 *
 * 
 */

#ifndef OAIInstallStatus_H_
#define OAIInstallStatus_H_

#include <QJsonObject>


#include "OAIOAIInstallStatus_status.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIInstallStatus: public OAIObject {
public:
    OAIInstallStatus();
    OAIInstallStatus(QString json);
    ~OAIInstallStatus();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIInstallStatus* fromJson(QString jsonString) override;

    OAIInstallStatus_status* getStatus();
    void setStatus(OAIInstallStatus_status* status);


    virtual bool isSet() override;

private:
    OAIInstallStatus_status* status;
    bool m_status_isSet;

};

}

#endif /* OAIInstallStatus_H_ */
