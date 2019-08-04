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
 * OAISamlConfigurationInfo.h
 *
 * 
 */

#ifndef OAISamlConfigurationInfo_H
#define OAISamlConfigurationInfo_H

#include <QJsonObject>


#include "OAISamlConfigurationProperties.h"
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAISamlConfigurationInfo: public OAIObject {
public:
    OAISamlConfigurationInfo();
    OAISamlConfigurationInfo(QString json);
    ~OAISamlConfigurationInfo() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getPid() const;
    void setPid(const QString &pid);

    QString getTitle() const;
    void setTitle(const QString &title);

    QString getDescription() const;
    void setDescription(const QString &description);

    QString getBundleLocation() const;
    void setBundleLocation(const QString &bundle_location);

    QString getServiceLocation() const;
    void setServiceLocation(const QString &service_location);

    OAISamlConfigurationProperties getProperties() const;
    void setProperties(const OAISamlConfigurationProperties &properties);

    virtual bool isSet() const override;

private:
    QString pid;
    bool m_pid_isSet;

    QString title;
    bool m_title_isSet;

    QString description;
    bool m_description_isSet;

    QString bundle_location;
    bool m_bundle_location_isSet;

    QString service_location;
    bool m_service_location_isSet;

    OAISamlConfigurationProperties properties;
    bool m_properties_isSet;

};

}

#endif // OAISamlConfigurationInfo_H
