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


#include <corvusoft/restbed/byte.hpp>
#include <corvusoft/restbed/string.hpp>
#include <corvusoft/restbed/settings.hpp>
#include <corvusoft/restbed/request.hpp>

#include "CqApi.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

CqApi::CqApi() {
	std::shared_ptr<CqApiLibsGraniteCoreContentLogin.htmlResource> spCqApiLibsGraniteCoreContentLogin.htmlResource = std::make_shared<CqApiLibsGraniteCoreContentLogin.htmlResource>();
	this->publish(spCqApiLibsGraniteCoreContentLogin.htmlResource);
	
	std::shared_ptr<CqApi.cqactions.htmlResource> spCqApi.cqactions.htmlResource = std::make_shared<CqApi.cqactions.htmlResource>();
	this->publish(spCqApi.cqactions.htmlResource);
	
}

CqApi::~CqApi() {}

void CqApi::startService(int const& port) {
	std::shared_ptr<restbed::Settings> settings = std::make_shared<restbed::Settings>();
	settings->set_port(port);
	settings->set_root("/");
	
	this->start(settings);
}

void CqApi::stopService() {
	this->stop();
}

CqApiLibsGraniteCoreContentLogin.htmlResource::CqApiLibsGraniteCoreContentLogin.htmlResource()
{
	this->set_path("/libs/granite/core/content/login.html/");
	this->set_method_handler("GET",
		std::bind(&CqApiLibsGraniteCoreContentLogin.htmlResource::GET_method_handler, this,
			std::placeholders::_1));
}

CqApiLibsGraniteCoreContentLogin.htmlResource::~CqApiLibsGraniteCoreContentLogin.htmlResource()
{
}

void CqApiLibsGraniteCoreContentLogin.htmlResource::GET_method_handler(const std::shared_ptr<restbed::Session> session) {

	const auto request = session->get_request();
			
			

			
			// Change the value of this variable to the appropriate response before sending the response
			int status_code = 200;
			
			/**
			 * Process the received information here
			 */
			
			if (status_code == 0) {
				session->close(0, "Default response", { {"Connection", "close"} });
				return;
			}

}



CqApi.cqactions.htmlResource::CqApi.cqactions.htmlResource()
{
	this->set_path("/.cqactions.html/");
	this->set_method_handler("POST",
		std::bind(&CqApi.cqactions.htmlResource::POST_method_handler, this,
			std::placeholders::_1));
}

CqApi.cqactions.htmlResource::~CqApi.cqactions.htmlResource()
{
}

void CqApi.cqactions.htmlResource::POST_method_handler(const std::shared_ptr<restbed::Session> session) {

	const auto request = session->get_request();
			
			
			// Getting the query params
			const std::string authorizableId = request->get_query_parameter("authorizableId", "");
			const std::string changelog = request->get_query_parameter("changelog", "");

			
			// Change the value of this variable to the appropriate response before sending the response
			int status_code = 200;
			
			/**
			 * Process the received information here
			 */
			
			if (status_code == 0) {
				session->close(0, "Default response", { {"Connection", "close"} });
				return;
			}

}




}
}
}
}
