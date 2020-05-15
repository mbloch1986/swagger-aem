/**
 * Adobe Experience Manager (AEM) API
 * Swagger AEM is an OpenAPI specification for Adobe Experience Manager (AEM) API
 *
 * OpenAPI spec version: 3.2.0-pre.0
 * Contact: opensource@shinesolutions.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 3.2.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "TruststoreInfo.h"

#include <string>
#include <sstream>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>

using boost::property_tree::ptree;
using boost::property_tree::read_json;
using boost::property_tree::write_json;

namespace org {
namespace openapitools {
namespace server {
namespace model {

TruststoreInfo::TruststoreInfo()
{
    m_Exists = false;
    
}

TruststoreInfo::~TruststoreInfo()
{
}

std::string TruststoreInfo::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	pt.put("Exists", m_Exists);
	write_json(ss, pt, false);
	return ss.str();
}

void TruststoreInfo::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	m_Exists = pt.get("Exists", false);
}

std::vector<std::shared_ptr<TruststoreItems>> TruststoreInfo::getAliases() const
{
    return m_Aliases;
}
void TruststoreInfo::setAliases(std::vector<std::shared_ptr<TruststoreItems>> value)
{
    m_Aliases = value;
}
bool TruststoreInfo::isExists() const
{
    return m_Exists;
}
void TruststoreInfo::setExists(bool value)
{
    m_Exists = value;
}

}
}
}
}
