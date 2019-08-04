#import <Foundation/Foundation.h>
#import "OAIObject.h"

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





@protocol OAISamlConfigurationPropertyItemsArray
@end

@interface OAISamlConfigurationPropertyItemsArray : OAIObject

/* property name [optional]
 */
@property(nonatomic) NSString* name;
/* True if optional [optional]
 */
@property(nonatomic) NSNumber* optional;
/* True if property is set [optional]
 */
@property(nonatomic) NSNumber* isSet;
/* Property type, 1=String, 3=long, 11=boolean, 12=Password [optional]
 */
@property(nonatomic) NSNumber* type;
/* Property value [optional]
 */
@property(nonatomic) NSArray<NSString*>* values;
/* Property description [optional]
 */
@property(nonatomic) NSString* _description;

@end
