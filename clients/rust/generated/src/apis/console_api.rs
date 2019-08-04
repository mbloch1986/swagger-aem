/* 
 * Adobe Experience Manager (AEM) API
 *
 * Swagger AEM is an OpenAPI specification for Adobe Experience Manager (AEM) API
 *
 * OpenAPI spec version: 3.2.0-pre.0
 * Contact: opensource@shinesolutions.com
 * Generated by: https://openapi-generator.tech
 */

use std::rc::Rc;
use std::borrow::Borrow;

use hyper;
use serde_json;
use futures::Future;

use super::{Error, configuration};
use super::request as __internal_request;

pub struct ConsoleApiClient<C: hyper::client::Connect> {
    configuration: Rc<configuration::Configuration<C>>,
}

impl<C: hyper::client::Connect> ConsoleApiClient<C> {
    pub fn new(configuration: Rc<configuration::Configuration<C>>) -> ConsoleApiClient<C> {
        ConsoleApiClient {
            configuration: configuration,
        }
    }
}

pub trait ConsoleApi {
    fn get_aem_product_info(&self, ) -> Box<Future<Item = Vec<String>, Error = Error<serde_json::Value>>>;
    fn get_config_mgr(&self, ) -> Box<Future<Item = String, Error = Error<serde_json::Value>>>;
    fn post_bundle(&self, name: &str, action: &str) -> Box<Future<Item = (), Error = Error<serde_json::Value>>>;
    fn post_jmx_repository(&self, action: &str) -> Box<Future<Item = (), Error = Error<serde_json::Value>>>;
    fn post_saml_configuration(&self, post: bool, apply: bool, delete: bool, action: &str, location: &str, path: Vec<String>, service_ranking: i32, idp_url: &str, idp_cert_alias: &str, idp_http_redirect: bool, service_provider_entity_id: &str, assertion_consumer_service_url: &str, sp_private_key_alias: &str, key_store_password: &str, default_redirect_url: &str, user_id_attribute: &str, use_encryption: bool, create_user: bool, add_group_memberships: bool, group_membership_attribute: &str, default_groups: Vec<String>, name_id_format: &str, synchronize_attributes: Vec<String>, handle_logout: bool, logout_url: &str, clock_tolerance: i32, digest_method: &str, signature_method: &str, user_intermediate_path: &str, propertylist: Vec<String>) -> Box<Future<Item = ::models::SamlConfigurationInfo, Error = Error<serde_json::Value>>>;
}


impl<C: hyper::client::Connect>ConsoleApi for ConsoleApiClient<C> {
    fn get_aem_product_info(&self, ) -> Box<Future<Item = Vec<String>, Error = Error<serde_json::Value>>> {
        __internal_request::Request::new(hyper::Method::Get, "/system/console/status-productinfo.json".to_string())
            .with_auth(__internal_request::Auth::Basic)
            .execute(self.configuration.borrow())
    }

    fn get_config_mgr(&self, ) -> Box<Future<Item = String, Error = Error<serde_json::Value>>> {
        __internal_request::Request::new(hyper::Method::Get, "/system/console/configMgr".to_string())
            .with_auth(__internal_request::Auth::Basic)
            .execute(self.configuration.borrow())
    }

    fn post_bundle(&self, name: &str, action: &str) -> Box<Future<Item = (), Error = Error<serde_json::Value>>> {
        __internal_request::Request::new(hyper::Method::Post, "/system/console/bundles/{name}".to_string())
            .with_auth(__internal_request::Auth::Basic)
            .with_query_param("action".to_string(), action.to_string())
            .with_path_param("name".to_string(), name.to_string())
            .returns_nothing()
            .execute(self.configuration.borrow())
    }

    fn post_jmx_repository(&self, action: &str) -> Box<Future<Item = (), Error = Error<serde_json::Value>>> {
        __internal_request::Request::new(hyper::Method::Post, "/system/console/jmx/com.adobe.granite:type=Repository/op/{action}".to_string())
            .with_auth(__internal_request::Auth::Basic)
            .with_path_param("action".to_string(), action.to_string())
            .returns_nothing()
            .execute(self.configuration.borrow())
    }

    fn post_saml_configuration(&self, post: bool, apply: bool, delete: bool, action: &str, location: &str, path: Vec<String>, service_ranking: i32, idp_url: &str, idp_cert_alias: &str, idp_http_redirect: bool, service_provider_entity_id: &str, assertion_consumer_service_url: &str, sp_private_key_alias: &str, key_store_password: &str, default_redirect_url: &str, user_id_attribute: &str, use_encryption: bool, create_user: bool, add_group_memberships: bool, group_membership_attribute: &str, default_groups: Vec<String>, name_id_format: &str, synchronize_attributes: Vec<String>, handle_logout: bool, logout_url: &str, clock_tolerance: i32, digest_method: &str, signature_method: &str, user_intermediate_path: &str, propertylist: Vec<String>) -> Box<Future<Item = ::models::SamlConfigurationInfo, Error = Error<serde_json::Value>>> {
        __internal_request::Request::new(hyper::Method::Post, "/system/console/configMgr/com.adobe.granite.auth.saml.SamlAuthenticationHandler".to_string())
            .with_auth(__internal_request::Auth::Basic)
            .with_query_param("post".to_string(), post.to_string())
            .with_query_param("apply".to_string(), apply.to_string())
            .with_query_param("delete".to_string(), delete.to_string())
            .with_query_param("action".to_string(), action.to_string())
            .with_query_param("$location".to_string(), location.to_string())
            .with_query_param("path".to_string(), path.join(",").to_string())
            .with_query_param("service.ranking".to_string(), service_ranking.to_string())
            .with_query_param("idpUrl".to_string(), idp_url.to_string())
            .with_query_param("idpCertAlias".to_string(), idp_cert_alias.to_string())
            .with_query_param("idpHttpRedirect".to_string(), idp_http_redirect.to_string())
            .with_query_param("serviceProviderEntityId".to_string(), service_provider_entity_id.to_string())
            .with_query_param("assertionConsumerServiceURL".to_string(), assertion_consumer_service_url.to_string())
            .with_query_param("spPrivateKeyAlias".to_string(), sp_private_key_alias.to_string())
            .with_query_param("keyStorePassword".to_string(), key_store_password.to_string())
            .with_query_param("defaultRedirectUrl".to_string(), default_redirect_url.to_string())
            .with_query_param("userIDAttribute".to_string(), user_id_attribute.to_string())
            .with_query_param("useEncryption".to_string(), use_encryption.to_string())
            .with_query_param("createUser".to_string(), create_user.to_string())
            .with_query_param("addGroupMemberships".to_string(), add_group_memberships.to_string())
            .with_query_param("groupMembershipAttribute".to_string(), group_membership_attribute.to_string())
            .with_query_param("defaultGroups".to_string(), default_groups.join(",").to_string())
            .with_query_param("nameIdFormat".to_string(), name_id_format.to_string())
            .with_query_param("synchronizeAttributes".to_string(), synchronize_attributes.join(",").to_string())
            .with_query_param("handleLogout".to_string(), handle_logout.to_string())
            .with_query_param("logoutUrl".to_string(), logout_url.to_string())
            .with_query_param("clockTolerance".to_string(), clock_tolerance.to_string())
            .with_query_param("digestMethod".to_string(), digest_method.to_string())
            .with_query_param("signatureMethod".to_string(), signature_method.to_string())
            .with_query_param("userIntermediatePath".to_string(), user_intermediate_path.to_string())
            .with_query_param("propertylist".to_string(), propertylist.join(",").to_string())
            .execute(self.configuration.borrow())
    }

}
