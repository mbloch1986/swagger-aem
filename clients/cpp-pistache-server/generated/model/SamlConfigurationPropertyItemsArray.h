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
 * SamlConfigurationPropertyItemsArray.h
 *
 * 
 */

#ifndef SamlConfigurationPropertyItemsArray_H_
#define SamlConfigurationPropertyItemsArray_H_


#include "ModelBase.h"

#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  SamlConfigurationPropertyItemsArray
    : public ModelBase
{
public:
    SamlConfigurationPropertyItemsArray();
    virtual ~SamlConfigurationPropertyItemsArray();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// SamlConfigurationPropertyItemsArray members

    /// <summary>
    /// property name
    /// </summary>
    std::string getName() const;
    void setName(std::string const& value);
    bool nameIsSet() const;
    void unsetName();
    /// <summary>
    /// True if optional
    /// </summary>
    bool isOptional() const;
    void setOptional(bool const value);
    bool optionalIsSet() const;
    void unsetOptional();
    /// <summary>
    /// True if property is set
    /// </summary>
    bool isIsSet() const;
    void setIsSet(bool const value);
    bool isSetIsSet() const;
    void unsetIs_set();
    /// <summary>
    /// Property type, 1&#x3D;String, 3&#x3D;long, 11&#x3D;boolean, 12&#x3D;Password
    /// </summary>
    int32_t getType() const;
    void setType(int32_t const value);
    bool typeIsSet() const;
    void unsetType();
    /// <summary>
    /// Property value
    /// </summary>
    std::vector<std::string>& getValues();
    bool valuesIsSet() const;
    void unsetValues();
    /// <summary>
    /// Property description
    /// </summary>
    std::string getDescription() const;
    void setDescription(std::string const& value);
    bool descriptionIsSet() const;
    void unsetDescription();

protected:
    std::string m_Name;
    bool m_NameIsSet;
    bool m_Optional;
    bool m_OptionalIsSet;
    bool m_Is_set;
    bool m_Is_setIsSet;
    int32_t m_Type;
    bool m_TypeIsSet;
    std::vector<std::string> m_Values;
    bool m_ValuesIsSet;
    std::string m_Description;
    bool m_DescriptionIsSet;
};

}
}
}
}

#endif /* SamlConfigurationPropertyItemsArray_H_ */
