--[[
  Adobe Experience Manager (AEM) API
 
  Swagger AEM is an OpenAPI specification for Adobe Experience Manager (AEM) API
 
  OpenAPI spec version: 3.2.0-pre.0
  Contact: opensource@shinesolutions.com
  Generated by: https://openapi-generator.tech
]]

-- saml_configuration_properties class
local saml_configuration_properties = {}
local saml_configuration_properties_mt = {
	__name = "saml_configuration_properties";
	__index = saml_configuration_properties;
}

local function cast_saml_configuration_properties(t)
	return setmetatable(t, saml_configuration_properties_mt)
end

local function new_saml_configuration_properties(path, service_ranking, idp_url, idp_cert_alias, idp_http_redirect, service_provider_entity_id, assertion_consumer_service_url, sp_private_key_alias, key_store_password, default_redirect_url, user_id_attribute, use_encryption, create_user, add_group_memberships, group_membership_attribute, default_groups, name_id_format, synchronize_attributes, handle_logout, logout_url, clock_tolerance, digest_method, signature_method, user_intermediate_path)
	return cast_saml_configuration_properties({
		["path"] = path;
		["service.ranking"] = service_ranking;
		["idpUrl"] = idp_url;
		["idpCertAlias"] = idp_cert_alias;
		["idpHttpRedirect"] = idp_http_redirect;
		["serviceProviderEntityId"] = service_provider_entity_id;
		["assertionConsumerServiceURL"] = assertion_consumer_service_url;
		["spPrivateKeyAlias"] = sp_private_key_alias;
		["keyStorePassword"] = key_store_password;
		["defaultRedirectUrl"] = default_redirect_url;
		["userIDAttribute"] = user_id_attribute;
		["useEncryption"] = use_encryption;
		["createUser"] = create_user;
		["addGroupMemberships"] = add_group_memberships;
		["groupMembershipAttribute"] = group_membership_attribute;
		["defaultGroups"] = default_groups;
		["nameIdFormat"] = name_id_format;
		["synchronizeAttributes"] = synchronize_attributes;
		["handleLogout"] = handle_logout;
		["logoutUrl"] = logout_url;
		["clockTolerance"] = clock_tolerance;
		["digestMethod"] = digest_method;
		["signatureMethod"] = signature_method;
		["userIntermediatePath"] = user_intermediate_path;
	})
end

return {
	cast = cast_saml_configuration_properties;
	new = new_saml_configuration_properties;
}
