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

#include "CqApi.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

CqApi::CqApi(Pistache::Address addr)
    : httpEndpoint(addr)
{ };

void CqApi::init(size_t thr = 2) {
    auto opts = Pistache::Http::Endpoint::options()
        .threads(thr)
        .flags(Pistache::Tcp::Options::InstallSignalHandler);
    httpEndpoint.init(opts);
    setupRoutes();
}

void CqApi::start() {
    httpEndpoint.setHandler(router.handler());
    httpEndpoint.serve();
}

void CqApi::shutdown() {
    httpEndpoint.shutdown();
}

void CqApi::setupRoutes() {
    using namespace Pistache::Rest;

    Routes::Get(router, base + "/libs/granite/core/content/login.html", Routes::bind(&CqApi::get_login_page_handler, this));
    Routes::Post(router, base + "/.cqactions.html", Routes::bind(&CqApi::post_cq_actions_handler, this));

    // Default handler, called when a route is not found
    router.addCustomHandler(Routes::bind(&CqApi::cq_api_default_handler, this));
}

void CqApi::get_login_page_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {

    try {
      this->get_login_page(response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void CqApi::post_cq_actions_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {

    // Getting the query params
    auto authorizableId = request.query().get("authorizableId");
    auto changelog = request.query().get("changelog");
    
    try {
      this->post_cq_actions(authorizableId, changelog, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}

void CqApi::cq_api_default_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    response.send(Pistache::Http::Code::Not_Found, "The requested method does not exist");
}

}
}
}
}

