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

/*
 * IHttpBody.h
 *
 * This is the interface for contents that can be sent to a remote HTTP server.
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_IHttpBody_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_IHttpBody_H_


#include <iostream>

namespace org {
namespace openapitools {
namespace client {
namespace model {

class  IHttpBody
{
public:
    virtual ~IHttpBody() { }

    virtual void writeTo( std::ostream& stream ) = 0;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_IHttpBody_H_ */
