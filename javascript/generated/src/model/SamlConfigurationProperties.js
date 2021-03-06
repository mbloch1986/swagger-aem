/**
 * Adobe Experience Manager (AEM) API
 * Swagger AEM is an OpenAPI specification for Adobe Experience Manager (AEM) API
 *
 * OpenAPI spec version: 2.1.0
 * Contact: opensource@shinesolutions.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 *
 */


import ApiClient from '../ApiClient';
import SamlConfigurationPropertyItemsArray from './SamlConfigurationPropertyItemsArray';
import SamlConfigurationPropertyItemsBoolean from './SamlConfigurationPropertyItemsBoolean';
import SamlConfigurationPropertyItemsLong from './SamlConfigurationPropertyItemsLong';
import SamlConfigurationPropertyItemsString from './SamlConfigurationPropertyItemsString';





/**
* The SamlConfigurationProperties model module.
* @module model/SamlConfigurationProperties
* @version 0.9.0
*/
export default class SamlConfigurationProperties {
    /**
    * Constructs a new <code>SamlConfigurationProperties</code>.
    * @alias module:model/SamlConfigurationProperties
    * @class
    */

    constructor() {
        

        
        

        

        
    }

    /**
    * Constructs a <code>SamlConfigurationProperties</code> from a plain JavaScript object, optionally creating a new instance.
    * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
    * @param {Object} data The plain JavaScript object bearing properties of interest.
    * @param {module:model/SamlConfigurationProperties} obj Optional instance to populate.
    * @return {module:model/SamlConfigurationProperties} The populated <code>SamlConfigurationProperties</code> instance.
    */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new SamlConfigurationProperties();

            
            
            

            if (data.hasOwnProperty('path')) {
                obj['path'] = ApiClient.convertToType(data['path'], [SamlConfigurationPropertyItemsArray]);
            }
            if (data.hasOwnProperty('service.ranking')) {
                obj['service.ranking'] = ApiClient.convertToType(data['service.ranking'], [SamlConfigurationPropertyItemsLong]);
            }
            if (data.hasOwnProperty('idpUrl')) {
                obj['idpUrl'] = ApiClient.convertToType(data['idpUrl'], [SamlConfigurationPropertyItemsString]);
            }
            if (data.hasOwnProperty('idpCertAlias')) {
                obj['idpCertAlias'] = ApiClient.convertToType(data['idpCertAlias'], [SamlConfigurationPropertyItemsString]);
            }
            if (data.hasOwnProperty('idpHttpRedirect')) {
                obj['idpHttpRedirect'] = ApiClient.convertToType(data['idpHttpRedirect'], [SamlConfigurationPropertyItemsBoolean]);
            }
            if (data.hasOwnProperty('serviceProviderEntityId')) {
                obj['serviceProviderEntityId'] = ApiClient.convertToType(data['serviceProviderEntityId'], [SamlConfigurationPropertyItemsString]);
            }
            if (data.hasOwnProperty('assertionConsumerServiceURL')) {
                obj['assertionConsumerServiceURL'] = ApiClient.convertToType(data['assertionConsumerServiceURL'], [SamlConfigurationPropertyItemsString]);
            }
            if (data.hasOwnProperty('spPrivateKeyAlias')) {
                obj['spPrivateKeyAlias'] = ApiClient.convertToType(data['spPrivateKeyAlias'], [SamlConfigurationPropertyItemsString]);
            }
            if (data.hasOwnProperty('keyStorePassword')) {
                obj['keyStorePassword'] = ApiClient.convertToType(data['keyStorePassword'], [SamlConfigurationPropertyItemsString]);
            }
            if (data.hasOwnProperty('defaultRedirectUrl')) {
                obj['defaultRedirectUrl'] = ApiClient.convertToType(data['defaultRedirectUrl'], [SamlConfigurationPropertyItemsString]);
            }
            if (data.hasOwnProperty('userIDAttribute')) {
                obj['userIDAttribute'] = ApiClient.convertToType(data['userIDAttribute'], [SamlConfigurationPropertyItemsString]);
            }
            if (data.hasOwnProperty('useEncryption')) {
                obj['useEncryption'] = ApiClient.convertToType(data['useEncryption'], [SamlConfigurationPropertyItemsBoolean]);
            }
            if (data.hasOwnProperty('createUser')) {
                obj['createUser'] = ApiClient.convertToType(data['createUser'], [SamlConfigurationPropertyItemsBoolean]);
            }
            if (data.hasOwnProperty('addGroupMemberships')) {
                obj['addGroupMemberships'] = ApiClient.convertToType(data['addGroupMemberships'], [SamlConfigurationPropertyItemsBoolean]);
            }
            if (data.hasOwnProperty('groupMembershipAttribute')) {
                obj['groupMembershipAttribute'] = ApiClient.convertToType(data['groupMembershipAttribute'], [SamlConfigurationPropertyItemsString]);
            }
            if (data.hasOwnProperty('defaultGroups')) {
                obj['defaultGroups'] = ApiClient.convertToType(data['defaultGroups'], [SamlConfigurationPropertyItemsArray]);
            }
            if (data.hasOwnProperty('nameIdFormat')) {
                obj['nameIdFormat'] = ApiClient.convertToType(data['nameIdFormat'], [SamlConfigurationPropertyItemsString]);
            }
            if (data.hasOwnProperty('synchronizeAttributes')) {
                obj['synchronizeAttributes'] = ApiClient.convertToType(data['synchronizeAttributes'], [SamlConfigurationPropertyItemsArray]);
            }
            if (data.hasOwnProperty('handleLogout')) {
                obj['handleLogout'] = ApiClient.convertToType(data['handleLogout'], [SamlConfigurationPropertyItemsBoolean]);
            }
            if (data.hasOwnProperty('logoutUrl')) {
                obj['logoutUrl'] = ApiClient.convertToType(data['logoutUrl'], [SamlConfigurationPropertyItemsString]);
            }
            if (data.hasOwnProperty('clockTolerance')) {
                obj['clockTolerance'] = ApiClient.convertToType(data['clockTolerance'], [SamlConfigurationPropertyItemsLong]);
            }
            if (data.hasOwnProperty('digestMethod')) {
                obj['digestMethod'] = ApiClient.convertToType(data['digestMethod'], [SamlConfigurationPropertyItemsString]);
            }
            if (data.hasOwnProperty('signatureMethod')) {
                obj['signatureMethod'] = ApiClient.convertToType(data['signatureMethod'], [SamlConfigurationPropertyItemsString]);
            }
            if (data.hasOwnProperty('userIntermediatePath')) {
                obj['userIntermediatePath'] = ApiClient.convertToType(data['userIntermediatePath'], [SamlConfigurationPropertyItemsString]);
            }
        }
        return obj;
    }

    /**
    * Repository path for which this authentication handler should be used by Sling. If this is empty, the authentication handler will be disabled.
    * @member {Array.<module:model/SamlConfigurationPropertyItemsArray>} path
    */
    path = undefined;
    /**
    * OSGi Framework Service Ranking value to indicate the order in which to call this service. This is an int value where higher values designate higher precedence. Default value is 0.
    * @member {Array.<module:model/SamlConfigurationPropertyItemsLong>} service.ranking
    */
    service.ranking = undefined;
    /**
    * URL of the IDP where the SAML Authentication Request should be sent to. If this property is empty the authentication handler is disabled. (idpUrl)
    * @member {Array.<module:model/SamlConfigurationPropertyItemsString>} idpUrl
    */
    idpUrl = undefined;
    /**
    * The alias of the IdP's certificate in the global truststore. If this property is empty the authentication handler is disabled.
    * @member {Array.<module:model/SamlConfigurationPropertyItemsString>} idpCertAlias
    */
    idpCertAlias = undefined;
    /**
    * Use an HTTP Redirect to the IDP URL instead of sending an AuthnRequest-message to request credentials. Use this for IDP initiated authentication.
    * @member {Array.<module:model/SamlConfigurationPropertyItemsBoolean>} idpHttpRedirect
    */
    idpHttpRedirect = undefined;
    /**
    * ID which uniquely identifies this service provider with the identity provider. If this property is empty the authentication handler is disabled.
    * @member {Array.<module:model/SamlConfigurationPropertyItemsString>} serviceProviderEntityId
    */
    serviceProviderEntityId = undefined;
    /**
    * The (optional) AssertionConsumerServiceURL attribute of an Authn request specifies the location to which a <Response> message MUST be sent to the requester.
    * @member {Array.<module:model/SamlConfigurationPropertyItemsString>} assertionConsumerServiceURL
    */
    assertionConsumerServiceURL = undefined;
    /**
    * The alias of the SP's private key in the key-store of the 'authentication-service' system user. If this property is empty the handler will not be able to sign or decrypt messages.
    * @member {Array.<module:model/SamlConfigurationPropertyItemsString>} spPrivateKeyAlias
    */
    spPrivateKeyAlias = undefined;
    /**
    * The password of the key-store of the 'authentication-service' system user.
    * @member {Array.<module:model/SamlConfigurationPropertyItemsString>} keyStorePassword
    */
    keyStorePassword = undefined;
    /**
    * The default location to redirect to after successful authentication.
    * @member {Array.<module:model/SamlConfigurationPropertyItemsString>} defaultRedirectUrl
    */
    defaultRedirectUrl = undefined;
    /**
    * The name of the attribute containing the user ID used to authenticate and create the user in the CRX repository. Leave empty to use the Subject:NameId.
    * @member {Array.<module:model/SamlConfigurationPropertyItemsString>} userIDAttribute
    */
    userIDAttribute = undefined;
    /**
    * Whether or not this authentication handler expects encrypted SAML assertions. If this is enabled the SP's private key must be provided in the key-store of the 'authentication-service' system user (see SP Private Key Alias above).
    * @member {Array.<module:model/SamlConfigurationPropertyItemsBoolean>} useEncryption
    */
    useEncryption = undefined;
    /**
    * Whether or not to autocreate nonexisting users in the repository.
    * @member {Array.<module:model/SamlConfigurationPropertyItemsBoolean>} createUser
    */
    createUser = undefined;
    /**
    * Whether or not a user should be automatically added to CRX groups after successful authentication.
    * @member {Array.<module:model/SamlConfigurationPropertyItemsBoolean>} addGroupMemberships
    */
    addGroupMemberships = undefined;
    /**
    * The name of the attribute containing a list of CRX groups this user should be added to.
    * @member {Array.<module:model/SamlConfigurationPropertyItemsString>} groupMembershipAttribute
    */
    groupMembershipAttribute = undefined;
    /**
    * A list of default CRX groups users are added to after successful authentication.
    * @member {Array.<module:model/SamlConfigurationPropertyItemsArray>} defaultGroups
    */
    defaultGroups = undefined;
    /**
    * The value of the NameIDPolicy format parameter to send in the AuthnRequest message.
    * @member {Array.<module:model/SamlConfigurationPropertyItemsString>} nameIdFormat
    */
    nameIdFormat = undefined;
    /**
    * A list of attribute mappings (in the format \\attributename=path/relative/to/user/node\\) which should be stored in the repository on user-synchronization.
    * @member {Array.<module:model/SamlConfigurationPropertyItemsArray>} synchronizeAttributes
    */
    synchronizeAttributes = undefined;
    /**
    * Whether or not logout (dropCredentials) requests will be processed by this handler.
    * @member {Array.<module:model/SamlConfigurationPropertyItemsBoolean>} handleLogout
    */
    handleLogout = undefined;
    /**
    * URL of the IDP where the SAML Logout Request should be sent to. If this property is empty the authentication handler won't handle logouts.
    * @member {Array.<module:model/SamlConfigurationPropertyItemsString>} logoutUrl
    */
    logoutUrl = undefined;
    /**
    * Time tolerance in seconds to compensate clock skew between IDP and SP when validating Assertions.
    * @member {Array.<module:model/SamlConfigurationPropertyItemsLong>} clockTolerance
    */
    clockTolerance = undefined;
    /**
    * The digest algorithm to use when signing a SAML message.
    * @member {Array.<module:model/SamlConfigurationPropertyItemsString>} digestMethod
    */
    digestMethod = undefined;
    /**
    * The signature algorithm to use when signing a SAML message.
    * @member {Array.<module:model/SamlConfigurationPropertyItemsString>} signatureMethod
    */
    signatureMethod = undefined;
    /**
    * User intermediate path to store created users.
    * @member {Array.<module:model/SamlConfigurationPropertyItemsString>} userIntermediatePath
    */
    userIntermediatePath = undefined;








}


