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

import org.openapitools.client.core.ApiModel
import org.joda.time.DateTime
import java.util.UUID

case class SamlConfigurationProperties (
  path: Option[SamlConfigurationPropertyItemsArray],
  serviceRanking: Option[SamlConfigurationPropertyItemsLong],
  idpUrl: Option[SamlConfigurationPropertyItemsString],
  idpCertAlias: Option[SamlConfigurationPropertyItemsString],
  idpHttpRedirect: Option[SamlConfigurationPropertyItemsBoolean],
  serviceProviderEntityId: Option[SamlConfigurationPropertyItemsString],
  assertionConsumerServiceURL: Option[SamlConfigurationPropertyItemsString],
  spPrivateKeyAlias: Option[SamlConfigurationPropertyItemsString],
  keyStorePassword: Option[SamlConfigurationPropertyItemsString],
  defaultRedirectUrl: Option[SamlConfigurationPropertyItemsString],
  userIDAttribute: Option[SamlConfigurationPropertyItemsString],
  useEncryption: Option[SamlConfigurationPropertyItemsBoolean],
  createUser: Option[SamlConfigurationPropertyItemsBoolean],
  addGroupMemberships: Option[SamlConfigurationPropertyItemsBoolean],
  groupMembershipAttribute: Option[SamlConfigurationPropertyItemsString],
  defaultGroups: Option[SamlConfigurationPropertyItemsArray],
  nameIdFormat: Option[SamlConfigurationPropertyItemsString],
  synchronizeAttributes: Option[SamlConfigurationPropertyItemsArray],
  handleLogout: Option[SamlConfigurationPropertyItemsBoolean],
  logoutUrl: Option[SamlConfigurationPropertyItemsString],
  clockTolerance: Option[SamlConfigurationPropertyItemsLong],
  digestMethod: Option[SamlConfigurationPropertyItemsString],
  signatureMethod: Option[SamlConfigurationPropertyItemsString],
  userIntermediatePath: Option[SamlConfigurationPropertyItemsString]
) extends ApiModel


