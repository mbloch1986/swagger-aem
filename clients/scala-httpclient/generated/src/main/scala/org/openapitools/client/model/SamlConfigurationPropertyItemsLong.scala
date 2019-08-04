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

package org.openapitools.client.model


case class SamlConfigurationPropertyItemsLong (
  // property name
  name: Option[String] = None,
  // True if optional
  optional: Option[Boolean] = None,
  // True if property is set
  isSet: Option[Boolean] = None,
  // Property type, 1=String, 3=long, 11=boolean, 12=Password
  `type`: Option[Integer] = None,
  // Property value
  value: Option[Integer] = None,
  // Property description
  description: Option[String] = None
)

