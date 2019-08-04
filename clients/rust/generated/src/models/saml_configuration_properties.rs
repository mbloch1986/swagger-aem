/* 
 * Adobe Experience Manager (AEM) API
 *
 * Swagger AEM is an OpenAPI specification for Adobe Experience Manager (AEM) API
 *
 * OpenAPI spec version: 3.2.0-pre.0
 * Contact: opensource@shinesolutions.com
 * Generated by: https://openapi-generator.tech
 */


#[allow(unused_imports)]
use serde_json::Value;

#[derive(Debug, Serialize, Deserialize)]
pub struct SamlConfigurationProperties {
  #[serde(rename = "path")]
  path: Option<::models::SamlConfigurationPropertyItemsArray>,
  #[serde(rename = "service.ranking")]
  service_ranking: Option<::models::SamlConfigurationPropertyItemsLong>,
  #[serde(rename = "idpUrl")]
  idp_url: Option<::models::SamlConfigurationPropertyItemsString>,
  #[serde(rename = "idpCertAlias")]
  idp_cert_alias: Option<::models::SamlConfigurationPropertyItemsString>,
  #[serde(rename = "idpHttpRedirect")]
  idp_http_redirect: Option<::models::SamlConfigurationPropertyItemsBoolean>,
  #[serde(rename = "serviceProviderEntityId")]
  service_provider_entity_id: Option<::models::SamlConfigurationPropertyItemsString>,
  #[serde(rename = "assertionConsumerServiceURL")]
  assertion_consumer_service_url: Option<::models::SamlConfigurationPropertyItemsString>,
  #[serde(rename = "spPrivateKeyAlias")]
  sp_private_key_alias: Option<::models::SamlConfigurationPropertyItemsString>,
  #[serde(rename = "keyStorePassword")]
  key_store_password: Option<::models::SamlConfigurationPropertyItemsString>,
  #[serde(rename = "defaultRedirectUrl")]
  default_redirect_url: Option<::models::SamlConfigurationPropertyItemsString>,
  #[serde(rename = "userIDAttribute")]
  user_id_attribute: Option<::models::SamlConfigurationPropertyItemsString>,
  #[serde(rename = "useEncryption")]
  use_encryption: Option<::models::SamlConfigurationPropertyItemsBoolean>,
  #[serde(rename = "createUser")]
  create_user: Option<::models::SamlConfigurationPropertyItemsBoolean>,
  #[serde(rename = "addGroupMemberships")]
  add_group_memberships: Option<::models::SamlConfigurationPropertyItemsBoolean>,
  #[serde(rename = "groupMembershipAttribute")]
  group_membership_attribute: Option<::models::SamlConfigurationPropertyItemsString>,
  #[serde(rename = "defaultGroups")]
  default_groups: Option<::models::SamlConfigurationPropertyItemsArray>,
  #[serde(rename = "nameIdFormat")]
  name_id_format: Option<::models::SamlConfigurationPropertyItemsString>,
  #[serde(rename = "synchronizeAttributes")]
  synchronize_attributes: Option<::models::SamlConfigurationPropertyItemsArray>,
  #[serde(rename = "handleLogout")]
  handle_logout: Option<::models::SamlConfigurationPropertyItemsBoolean>,
  #[serde(rename = "logoutUrl")]
  logout_url: Option<::models::SamlConfigurationPropertyItemsString>,
  #[serde(rename = "clockTolerance")]
  clock_tolerance: Option<::models::SamlConfigurationPropertyItemsLong>,
  #[serde(rename = "digestMethod")]
  digest_method: Option<::models::SamlConfigurationPropertyItemsString>,
  #[serde(rename = "signatureMethod")]
  signature_method: Option<::models::SamlConfigurationPropertyItemsString>,
  #[serde(rename = "userIntermediatePath")]
  user_intermediate_path: Option<::models::SamlConfigurationPropertyItemsString>
}

impl SamlConfigurationProperties {
  pub fn new() -> SamlConfigurationProperties {
    SamlConfigurationProperties {
      path: None,
      service_ranking: None,
      idp_url: None,
      idp_cert_alias: None,
      idp_http_redirect: None,
      service_provider_entity_id: None,
      assertion_consumer_service_url: None,
      sp_private_key_alias: None,
      key_store_password: None,
      default_redirect_url: None,
      user_id_attribute: None,
      use_encryption: None,
      create_user: None,
      add_group_memberships: None,
      group_membership_attribute: None,
      default_groups: None,
      name_id_format: None,
      synchronize_attributes: None,
      handle_logout: None,
      logout_url: None,
      clock_tolerance: None,
      digest_method: None,
      signature_method: None,
      user_intermediate_path: None
    }
  }

  pub fn set_path(&mut self, path: ::models::SamlConfigurationPropertyItemsArray) {
    self.path = Some(path);
  }

  pub fn with_path(mut self, path: ::models::SamlConfigurationPropertyItemsArray) -> SamlConfigurationProperties {
    self.path = Some(path);
    self
  }

  pub fn path(&self) -> Option<&::models::SamlConfigurationPropertyItemsArray> {
    self.path.as_ref()
  }

  pub fn reset_path(&mut self) {
    self.path = None;
  }

  pub fn set_service_ranking(&mut self, service_ranking: ::models::SamlConfigurationPropertyItemsLong) {
    self.service_ranking = Some(service_ranking);
  }

  pub fn with_service_ranking(mut self, service_ranking: ::models::SamlConfigurationPropertyItemsLong) -> SamlConfigurationProperties {
    self.service_ranking = Some(service_ranking);
    self
  }

  pub fn service_ranking(&self) -> Option<&::models::SamlConfigurationPropertyItemsLong> {
    self.service_ranking.as_ref()
  }

  pub fn reset_service_ranking(&mut self) {
    self.service_ranking = None;
  }

  pub fn set_idp_url(&mut self, idp_url: ::models::SamlConfigurationPropertyItemsString) {
    self.idp_url = Some(idp_url);
  }

  pub fn with_idp_url(mut self, idp_url: ::models::SamlConfigurationPropertyItemsString) -> SamlConfigurationProperties {
    self.idp_url = Some(idp_url);
    self
  }

  pub fn idp_url(&self) -> Option<&::models::SamlConfigurationPropertyItemsString> {
    self.idp_url.as_ref()
  }

  pub fn reset_idp_url(&mut self) {
    self.idp_url = None;
  }

  pub fn set_idp_cert_alias(&mut self, idp_cert_alias: ::models::SamlConfigurationPropertyItemsString) {
    self.idp_cert_alias = Some(idp_cert_alias);
  }

  pub fn with_idp_cert_alias(mut self, idp_cert_alias: ::models::SamlConfigurationPropertyItemsString) -> SamlConfigurationProperties {
    self.idp_cert_alias = Some(idp_cert_alias);
    self
  }

  pub fn idp_cert_alias(&self) -> Option<&::models::SamlConfigurationPropertyItemsString> {
    self.idp_cert_alias.as_ref()
  }

  pub fn reset_idp_cert_alias(&mut self) {
    self.idp_cert_alias = None;
  }

  pub fn set_idp_http_redirect(&mut self, idp_http_redirect: ::models::SamlConfigurationPropertyItemsBoolean) {
    self.idp_http_redirect = Some(idp_http_redirect);
  }

  pub fn with_idp_http_redirect(mut self, idp_http_redirect: ::models::SamlConfigurationPropertyItemsBoolean) -> SamlConfigurationProperties {
    self.idp_http_redirect = Some(idp_http_redirect);
    self
  }

  pub fn idp_http_redirect(&self) -> Option<&::models::SamlConfigurationPropertyItemsBoolean> {
    self.idp_http_redirect.as_ref()
  }

  pub fn reset_idp_http_redirect(&mut self) {
    self.idp_http_redirect = None;
  }

  pub fn set_service_provider_entity_id(&mut self, service_provider_entity_id: ::models::SamlConfigurationPropertyItemsString) {
    self.service_provider_entity_id = Some(service_provider_entity_id);
  }

  pub fn with_service_provider_entity_id(mut self, service_provider_entity_id: ::models::SamlConfigurationPropertyItemsString) -> SamlConfigurationProperties {
    self.service_provider_entity_id = Some(service_provider_entity_id);
    self
  }

  pub fn service_provider_entity_id(&self) -> Option<&::models::SamlConfigurationPropertyItemsString> {
    self.service_provider_entity_id.as_ref()
  }

  pub fn reset_service_provider_entity_id(&mut self) {
    self.service_provider_entity_id = None;
  }

  pub fn set_assertion_consumer_service_url(&mut self, assertion_consumer_service_url: ::models::SamlConfigurationPropertyItemsString) {
    self.assertion_consumer_service_url = Some(assertion_consumer_service_url);
  }

  pub fn with_assertion_consumer_service_url(mut self, assertion_consumer_service_url: ::models::SamlConfigurationPropertyItemsString) -> SamlConfigurationProperties {
    self.assertion_consumer_service_url = Some(assertion_consumer_service_url);
    self
  }

  pub fn assertion_consumer_service_url(&self) -> Option<&::models::SamlConfigurationPropertyItemsString> {
    self.assertion_consumer_service_url.as_ref()
  }

  pub fn reset_assertion_consumer_service_url(&mut self) {
    self.assertion_consumer_service_url = None;
  }

  pub fn set_sp_private_key_alias(&mut self, sp_private_key_alias: ::models::SamlConfigurationPropertyItemsString) {
    self.sp_private_key_alias = Some(sp_private_key_alias);
  }

  pub fn with_sp_private_key_alias(mut self, sp_private_key_alias: ::models::SamlConfigurationPropertyItemsString) -> SamlConfigurationProperties {
    self.sp_private_key_alias = Some(sp_private_key_alias);
    self
  }

  pub fn sp_private_key_alias(&self) -> Option<&::models::SamlConfigurationPropertyItemsString> {
    self.sp_private_key_alias.as_ref()
  }

  pub fn reset_sp_private_key_alias(&mut self) {
    self.sp_private_key_alias = None;
  }

  pub fn set_key_store_password(&mut self, key_store_password: ::models::SamlConfigurationPropertyItemsString) {
    self.key_store_password = Some(key_store_password);
  }

  pub fn with_key_store_password(mut self, key_store_password: ::models::SamlConfigurationPropertyItemsString) -> SamlConfigurationProperties {
    self.key_store_password = Some(key_store_password);
    self
  }

  pub fn key_store_password(&self) -> Option<&::models::SamlConfigurationPropertyItemsString> {
    self.key_store_password.as_ref()
  }

  pub fn reset_key_store_password(&mut self) {
    self.key_store_password = None;
  }

  pub fn set_default_redirect_url(&mut self, default_redirect_url: ::models::SamlConfigurationPropertyItemsString) {
    self.default_redirect_url = Some(default_redirect_url);
  }

  pub fn with_default_redirect_url(mut self, default_redirect_url: ::models::SamlConfigurationPropertyItemsString) -> SamlConfigurationProperties {
    self.default_redirect_url = Some(default_redirect_url);
    self
  }

  pub fn default_redirect_url(&self) -> Option<&::models::SamlConfigurationPropertyItemsString> {
    self.default_redirect_url.as_ref()
  }

  pub fn reset_default_redirect_url(&mut self) {
    self.default_redirect_url = None;
  }

  pub fn set_user_id_attribute(&mut self, user_id_attribute: ::models::SamlConfigurationPropertyItemsString) {
    self.user_id_attribute = Some(user_id_attribute);
  }

  pub fn with_user_id_attribute(mut self, user_id_attribute: ::models::SamlConfigurationPropertyItemsString) -> SamlConfigurationProperties {
    self.user_id_attribute = Some(user_id_attribute);
    self
  }

  pub fn user_id_attribute(&self) -> Option<&::models::SamlConfigurationPropertyItemsString> {
    self.user_id_attribute.as_ref()
  }

  pub fn reset_user_id_attribute(&mut self) {
    self.user_id_attribute = None;
  }

  pub fn set_use_encryption(&mut self, use_encryption: ::models::SamlConfigurationPropertyItemsBoolean) {
    self.use_encryption = Some(use_encryption);
  }

  pub fn with_use_encryption(mut self, use_encryption: ::models::SamlConfigurationPropertyItemsBoolean) -> SamlConfigurationProperties {
    self.use_encryption = Some(use_encryption);
    self
  }

  pub fn use_encryption(&self) -> Option<&::models::SamlConfigurationPropertyItemsBoolean> {
    self.use_encryption.as_ref()
  }

  pub fn reset_use_encryption(&mut self) {
    self.use_encryption = None;
  }

  pub fn set_create_user(&mut self, create_user: ::models::SamlConfigurationPropertyItemsBoolean) {
    self.create_user = Some(create_user);
  }

  pub fn with_create_user(mut self, create_user: ::models::SamlConfigurationPropertyItemsBoolean) -> SamlConfigurationProperties {
    self.create_user = Some(create_user);
    self
  }

  pub fn create_user(&self) -> Option<&::models::SamlConfigurationPropertyItemsBoolean> {
    self.create_user.as_ref()
  }

  pub fn reset_create_user(&mut self) {
    self.create_user = None;
  }

  pub fn set_add_group_memberships(&mut self, add_group_memberships: ::models::SamlConfigurationPropertyItemsBoolean) {
    self.add_group_memberships = Some(add_group_memberships);
  }

  pub fn with_add_group_memberships(mut self, add_group_memberships: ::models::SamlConfigurationPropertyItemsBoolean) -> SamlConfigurationProperties {
    self.add_group_memberships = Some(add_group_memberships);
    self
  }

  pub fn add_group_memberships(&self) -> Option<&::models::SamlConfigurationPropertyItemsBoolean> {
    self.add_group_memberships.as_ref()
  }

  pub fn reset_add_group_memberships(&mut self) {
    self.add_group_memberships = None;
  }

  pub fn set_group_membership_attribute(&mut self, group_membership_attribute: ::models::SamlConfigurationPropertyItemsString) {
    self.group_membership_attribute = Some(group_membership_attribute);
  }

  pub fn with_group_membership_attribute(mut self, group_membership_attribute: ::models::SamlConfigurationPropertyItemsString) -> SamlConfigurationProperties {
    self.group_membership_attribute = Some(group_membership_attribute);
    self
  }

  pub fn group_membership_attribute(&self) -> Option<&::models::SamlConfigurationPropertyItemsString> {
    self.group_membership_attribute.as_ref()
  }

  pub fn reset_group_membership_attribute(&mut self) {
    self.group_membership_attribute = None;
  }

  pub fn set_default_groups(&mut self, default_groups: ::models::SamlConfigurationPropertyItemsArray) {
    self.default_groups = Some(default_groups);
  }

  pub fn with_default_groups(mut self, default_groups: ::models::SamlConfigurationPropertyItemsArray) -> SamlConfigurationProperties {
    self.default_groups = Some(default_groups);
    self
  }

  pub fn default_groups(&self) -> Option<&::models::SamlConfigurationPropertyItemsArray> {
    self.default_groups.as_ref()
  }

  pub fn reset_default_groups(&mut self) {
    self.default_groups = None;
  }

  pub fn set_name_id_format(&mut self, name_id_format: ::models::SamlConfigurationPropertyItemsString) {
    self.name_id_format = Some(name_id_format);
  }

  pub fn with_name_id_format(mut self, name_id_format: ::models::SamlConfigurationPropertyItemsString) -> SamlConfigurationProperties {
    self.name_id_format = Some(name_id_format);
    self
  }

  pub fn name_id_format(&self) -> Option<&::models::SamlConfigurationPropertyItemsString> {
    self.name_id_format.as_ref()
  }

  pub fn reset_name_id_format(&mut self) {
    self.name_id_format = None;
  }

  pub fn set_synchronize_attributes(&mut self, synchronize_attributes: ::models::SamlConfigurationPropertyItemsArray) {
    self.synchronize_attributes = Some(synchronize_attributes);
  }

  pub fn with_synchronize_attributes(mut self, synchronize_attributes: ::models::SamlConfigurationPropertyItemsArray) -> SamlConfigurationProperties {
    self.synchronize_attributes = Some(synchronize_attributes);
    self
  }

  pub fn synchronize_attributes(&self) -> Option<&::models::SamlConfigurationPropertyItemsArray> {
    self.synchronize_attributes.as_ref()
  }

  pub fn reset_synchronize_attributes(&mut self) {
    self.synchronize_attributes = None;
  }

  pub fn set_handle_logout(&mut self, handle_logout: ::models::SamlConfigurationPropertyItemsBoolean) {
    self.handle_logout = Some(handle_logout);
  }

  pub fn with_handle_logout(mut self, handle_logout: ::models::SamlConfigurationPropertyItemsBoolean) -> SamlConfigurationProperties {
    self.handle_logout = Some(handle_logout);
    self
  }

  pub fn handle_logout(&self) -> Option<&::models::SamlConfigurationPropertyItemsBoolean> {
    self.handle_logout.as_ref()
  }

  pub fn reset_handle_logout(&mut self) {
    self.handle_logout = None;
  }

  pub fn set_logout_url(&mut self, logout_url: ::models::SamlConfigurationPropertyItemsString) {
    self.logout_url = Some(logout_url);
  }

  pub fn with_logout_url(mut self, logout_url: ::models::SamlConfigurationPropertyItemsString) -> SamlConfigurationProperties {
    self.logout_url = Some(logout_url);
    self
  }

  pub fn logout_url(&self) -> Option<&::models::SamlConfigurationPropertyItemsString> {
    self.logout_url.as_ref()
  }

  pub fn reset_logout_url(&mut self) {
    self.logout_url = None;
  }

  pub fn set_clock_tolerance(&mut self, clock_tolerance: ::models::SamlConfigurationPropertyItemsLong) {
    self.clock_tolerance = Some(clock_tolerance);
  }

  pub fn with_clock_tolerance(mut self, clock_tolerance: ::models::SamlConfigurationPropertyItemsLong) -> SamlConfigurationProperties {
    self.clock_tolerance = Some(clock_tolerance);
    self
  }

  pub fn clock_tolerance(&self) -> Option<&::models::SamlConfigurationPropertyItemsLong> {
    self.clock_tolerance.as_ref()
  }

  pub fn reset_clock_tolerance(&mut self) {
    self.clock_tolerance = None;
  }

  pub fn set_digest_method(&mut self, digest_method: ::models::SamlConfigurationPropertyItemsString) {
    self.digest_method = Some(digest_method);
  }

  pub fn with_digest_method(mut self, digest_method: ::models::SamlConfigurationPropertyItemsString) -> SamlConfigurationProperties {
    self.digest_method = Some(digest_method);
    self
  }

  pub fn digest_method(&self) -> Option<&::models::SamlConfigurationPropertyItemsString> {
    self.digest_method.as_ref()
  }

  pub fn reset_digest_method(&mut self) {
    self.digest_method = None;
  }

  pub fn set_signature_method(&mut self, signature_method: ::models::SamlConfigurationPropertyItemsString) {
    self.signature_method = Some(signature_method);
  }

  pub fn with_signature_method(mut self, signature_method: ::models::SamlConfigurationPropertyItemsString) -> SamlConfigurationProperties {
    self.signature_method = Some(signature_method);
    self
  }

  pub fn signature_method(&self) -> Option<&::models::SamlConfigurationPropertyItemsString> {
    self.signature_method.as_ref()
  }

  pub fn reset_signature_method(&mut self) {
    self.signature_method = None;
  }

  pub fn set_user_intermediate_path(&mut self, user_intermediate_path: ::models::SamlConfigurationPropertyItemsString) {
    self.user_intermediate_path = Some(user_intermediate_path);
  }

  pub fn with_user_intermediate_path(mut self, user_intermediate_path: ::models::SamlConfigurationPropertyItemsString) -> SamlConfigurationProperties {
    self.user_intermediate_path = Some(user_intermediate_path);
    self
  }

  pub fn user_intermediate_path(&self) -> Option<&::models::SamlConfigurationPropertyItemsString> {
    self.user_intermediate_path.as_ref()
  }

  pub fn reset_user_intermediate_path(&mut self) {
    self.user_intermediate_path = None;
  }

}



