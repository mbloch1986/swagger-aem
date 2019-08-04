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
pub struct KeystoreInfo {
  #[serde(rename = "aliases")]
  aliases: Option<Vec<::models::KeystoreItems>>,
  /// False if truststore don't exist
  #[serde(rename = "exists")]
  exists: Option<bool>
}

impl KeystoreInfo {
  pub fn new() -> KeystoreInfo {
    KeystoreInfo {
      aliases: None,
      exists: None
    }
  }

  pub fn set_aliases(&mut self, aliases: Vec<::models::KeystoreItems>) {
    self.aliases = Some(aliases);
  }

  pub fn with_aliases(mut self, aliases: Vec<::models::KeystoreItems>) -> KeystoreInfo {
    self.aliases = Some(aliases);
    self
  }

  pub fn aliases(&self) -> Option<&Vec<::models::KeystoreItems>> {
    self.aliases.as_ref()
  }

  pub fn reset_aliases(&mut self) {
    self.aliases = None;
  }

  pub fn set_exists(&mut self, exists: bool) {
    self.exists = Some(exists);
  }

  pub fn with_exists(mut self, exists: bool) -> KeystoreInfo {
    self.exists = Some(exists);
    self
  }

  pub fn exists(&self) -> Option<&bool> {
    self.exists.as_ref()
  }

  pub fn reset_exists(&mut self) {
    self.exists = None;
  }

}



