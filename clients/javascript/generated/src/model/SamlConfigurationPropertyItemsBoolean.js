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

(function(root, factory) {
  if (typeof define === 'function' && define.amd) {
    // AMD. Register as an anonymous module.
    define(['ApiClient'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'));
  } else {
    // Browser globals (root is window)
    if (!root.NodeSwaggerAem) {
      root.NodeSwaggerAem = {};
    }
    root.NodeSwaggerAem.SamlConfigurationPropertyItemsBoolean = factory(root.NodeSwaggerAem.ApiClient);
  }
}(this, function(ApiClient) {
  'use strict';




  /**
   * The SamlConfigurationPropertyItemsBoolean model module.
   * @module model/SamlConfigurationPropertyItemsBoolean
   * @version 0.9.0
   */

  /**
   * Constructs a new <code>SamlConfigurationPropertyItemsBoolean</code>.
   * @alias module:model/SamlConfigurationPropertyItemsBoolean
   * @class
   */
  var exports = function() {
    var _this = this;







  };

  /**
   * Constructs a <code>SamlConfigurationPropertyItemsBoolean</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/SamlConfigurationPropertyItemsBoolean} obj Optional instance to populate.
   * @return {module:model/SamlConfigurationPropertyItemsBoolean} The populated <code>SamlConfigurationPropertyItemsBoolean</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();

      if (data.hasOwnProperty('name')) {
        obj['name'] = ApiClient.convertToType(data['name'], 'String');
      }
      if (data.hasOwnProperty('optional')) {
        obj['optional'] = ApiClient.convertToType(data['optional'], 'Boolean');
      }
      if (data.hasOwnProperty('is_set')) {
        obj['is_set'] = ApiClient.convertToType(data['is_set'], 'Boolean');
      }
      if (data.hasOwnProperty('type')) {
        obj['type'] = ApiClient.convertToType(data['type'], 'Number');
      }
      if (data.hasOwnProperty('value')) {
        obj['value'] = ApiClient.convertToType(data['value'], 'Boolean');
      }
      if (data.hasOwnProperty('description')) {
        obj['description'] = ApiClient.convertToType(data['description'], 'String');
      }
    }
    return obj;
  }

  /**
   * property name
   * @member {String} name
   */
  exports.prototype['name'] = undefined;
  /**
   * True if optional
   * @member {Boolean} optional
   */
  exports.prototype['optional'] = undefined;
  /**
   * True if property is set
   * @member {Boolean} is_set
   */
  exports.prototype['is_set'] = undefined;
  /**
   * Property type, 1=String, 3=long, 11=boolean, 12=Password
   * @member {Number} type
   */
  exports.prototype['type'] = undefined;
  /**
   * Property value
   * @member {Boolean} value
   */
  exports.prototype['value'] = undefined;
  /**
   * Property description
   * @member {String} description
   */
  exports.prototype['description'] = undefined;



  return exports;
}));


