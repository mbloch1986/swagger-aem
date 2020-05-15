/**
 * Adobe Experience Manager (AEM) API
 * Swagger AEM is an OpenAPI specification for Adobe Experience Manager (AEM) API
 *
 * OpenAPI spec version: 3.2.0-pre.0
 * Contact: opensource@shinesolutions.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 *
 * OpenAPI Generator version: 3.2.1-SNAPSHOT
 *
 * Do not edit the class manually.
 *
 */

(function(factory) {
  if (typeof define === 'function' && define.amd) {
    // AMD. Register as an anonymous module.
    define(['ApiClient', 'model/InstallStatus', 'model/InstallStatusStatus', 'model/KeystoreChainItems', 'model/KeystoreInfo', 'model/KeystoreItems', 'model/SamlConfigurationInfo', 'model/SamlConfigurationProperties', 'model/SamlConfigurationPropertyItemsArray', 'model/SamlConfigurationPropertyItemsBoolean', 'model/SamlConfigurationPropertyItemsLong', 'model/SamlConfigurationPropertyItemsString', 'model/TruststoreInfo', 'model/TruststoreItems', 'api/ConsoleApi', 'api/CqApi', 'api/CrxApi', 'api/CustomApi', 'api/SlingApi'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('./ApiClient'), require('./model/InstallStatus'), require('./model/InstallStatusStatus'), require('./model/KeystoreChainItems'), require('./model/KeystoreInfo'), require('./model/KeystoreItems'), require('./model/SamlConfigurationInfo'), require('./model/SamlConfigurationProperties'), require('./model/SamlConfigurationPropertyItemsArray'), require('./model/SamlConfigurationPropertyItemsBoolean'), require('./model/SamlConfigurationPropertyItemsLong'), require('./model/SamlConfigurationPropertyItemsString'), require('./model/TruststoreInfo'), require('./model/TruststoreItems'), require('./api/ConsoleApi'), require('./api/CqApi'), require('./api/CrxApi'), require('./api/CustomApi'), require('./api/SlingApi'));
  }
}(function(ApiClient, InstallStatus, InstallStatusStatus, KeystoreChainItems, KeystoreInfo, KeystoreItems, SamlConfigurationInfo, SamlConfigurationProperties, SamlConfigurationPropertyItemsArray, SamlConfigurationPropertyItemsBoolean, SamlConfigurationPropertyItemsLong, SamlConfigurationPropertyItemsString, TruststoreInfo, TruststoreItems, ConsoleApi, CqApi, CrxApi, CustomApi, SlingApi) {
  'use strict';

  /**
   * Swagger_AEM_is_an_OpenAPI_specification_for_Adobe_Experience_Manager__AEM_API.<br>
   * The <code>index</code> module provides access to constructors for all the classes which comprise the public API.
   * <p>
   * An AMD (recommended!) or CommonJS application will generally do something equivalent to the following:
   * <pre>
   * var NodeSwaggerAem = require('index'); // See note below*.
   * var xxxSvc = new NodeSwaggerAem.XxxApi(); // Allocate the API class we're going to use.
   * var yyyModel = new NodeSwaggerAem.Yyy(); // Construct a model instance.
   * yyyModel.someProperty = 'someValue';
   * ...
   * var zzz = xxxSvc.doSomething(yyyModel); // Invoke the service.
   * ...
   * </pre>
   * <em>*NOTE: For a top-level AMD script, use require(['index'], function(){...})
   * and put the application logic within the callback function.</em>
   * </p>
   * <p>
   * A non-AMD browser application (discouraged) might do something like this:
   * <pre>
   * var xxxSvc = new NodeSwaggerAem.XxxApi(); // Allocate the API class we're going to use.
   * var yyy = new NodeSwaggerAem.Yyy(); // Construct a model instance.
   * yyyModel.someProperty = 'someValue';
   * ...
   * var zzz = xxxSvc.doSomething(yyyModel); // Invoke the service.
   * ...
   * </pre>
   * </p>
   * @module index
   * @version 0.9.0
   */
  var exports = {
    /**
     * The ApiClient constructor.
     * @property {module:ApiClient}
     */
    ApiClient: ApiClient,
    /**
     * The InstallStatus model constructor.
     * @property {module:model/InstallStatus}
     */
    InstallStatus: InstallStatus,
    /**
     * The InstallStatusStatus model constructor.
     * @property {module:model/InstallStatusStatus}
     */
    InstallStatusStatus: InstallStatusStatus,
    /**
     * The KeystoreChainItems model constructor.
     * @property {module:model/KeystoreChainItems}
     */
    KeystoreChainItems: KeystoreChainItems,
    /**
     * The KeystoreInfo model constructor.
     * @property {module:model/KeystoreInfo}
     */
    KeystoreInfo: KeystoreInfo,
    /**
     * The KeystoreItems model constructor.
     * @property {module:model/KeystoreItems}
     */
    KeystoreItems: KeystoreItems,
    /**
     * The SamlConfigurationInfo model constructor.
     * @property {module:model/SamlConfigurationInfo}
     */
    SamlConfigurationInfo: SamlConfigurationInfo,
    /**
     * The SamlConfigurationProperties model constructor.
     * @property {module:model/SamlConfigurationProperties}
     */
    SamlConfigurationProperties: SamlConfigurationProperties,
    /**
     * The SamlConfigurationPropertyItemsArray model constructor.
     * @property {module:model/SamlConfigurationPropertyItemsArray}
     */
    SamlConfigurationPropertyItemsArray: SamlConfigurationPropertyItemsArray,
    /**
     * The SamlConfigurationPropertyItemsBoolean model constructor.
     * @property {module:model/SamlConfigurationPropertyItemsBoolean}
     */
    SamlConfigurationPropertyItemsBoolean: SamlConfigurationPropertyItemsBoolean,
    /**
     * The SamlConfigurationPropertyItemsLong model constructor.
     * @property {module:model/SamlConfigurationPropertyItemsLong}
     */
    SamlConfigurationPropertyItemsLong: SamlConfigurationPropertyItemsLong,
    /**
     * The SamlConfigurationPropertyItemsString model constructor.
     * @property {module:model/SamlConfigurationPropertyItemsString}
     */
    SamlConfigurationPropertyItemsString: SamlConfigurationPropertyItemsString,
    /**
     * The TruststoreInfo model constructor.
     * @property {module:model/TruststoreInfo}
     */
    TruststoreInfo: TruststoreInfo,
    /**
     * The TruststoreItems model constructor.
     * @property {module:model/TruststoreItems}
     */
    TruststoreItems: TruststoreItems,
    /**
     * The ConsoleApi service constructor.
     * @property {module:api/ConsoleApi}
     */
    ConsoleApi: ConsoleApi,
    /**
     * The CqApi service constructor.
     * @property {module:api/CqApi}
     */
    CqApi: CqApi,
    /**
     * The CrxApi service constructor.
     * @property {module:api/CrxApi}
     */
    CrxApi: CrxApi,
    /**
     * The CustomApi service constructor.
     * @property {module:api/CustomApi}
     */
    CustomApi: CustomApi,
    /**
     * The SlingApi service constructor.
     * @property {module:api/SlingApi}
     */
    SlingApi: SlingApi
  };

  return exports;
}));