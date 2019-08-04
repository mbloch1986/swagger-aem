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
 * OAISamlConfigurationPropertyItemsLong.h
 *
 * 
 */

#ifndef OAISamlConfigurationPropertyItemsLong_H_
#define OAISamlConfigurationPropertyItemsLong_H_

#include <QJsonObject>


#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAISamlConfigurationPropertyItemsLong: public OAIObject {
public:
    OAISamlConfigurationPropertyItemsLong();
    OAISamlConfigurationPropertyItemsLong(QString json);
    ~OAISamlConfigurationPropertyItemsLong();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAISamlConfigurationPropertyItemsLong* fromJson(QString jsonString) override;

    QString* getName();
    void setName(QString* name);

    bool isOptional();
    void setOptional(bool optional);

    bool isIsSet();
    void setIsSet(bool is_set);

    qint32 getType();
    void setType(qint32 type);

    qint32 getValue();
    void setValue(qint32 value);

    QString* getDescription();
    void setDescription(QString* description);


    virtual bool isSet() override;

private:
    QString* name;
    bool m_name_isSet;

    bool optional;
    bool m_optional_isSet;

    bool is_set;
    bool m_is_set_isSet;

    qint32 type;
    bool m_type_isSet;

    qint32 value;
    bool m_value_isSet;

    QString* description;
    bool m_description_isSet;

};

}

#endif /* OAISamlConfigurationPropertyItemsLong_H_ */
