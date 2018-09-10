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

(function(root, factory) {
  if (typeof define === 'function' && define.amd) {
    // AMD.
    define(['expect.js', '../../src/index'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    factory(require('expect.js'), require('../../src/index'));
  } else {
    // Browser globals (root is window)
    factory(root.expect, root.NodeSwaggerAem);
  }
}(this, function(expect, NodeSwaggerAem) {
  'use strict';

  var instance;

  beforeEach(function() {
    instance = new NodeSwaggerAem.KeystoreChainItems();
  });

  var getProperty = function(object, getter, property) {
    // Use getter method if present; otherwise, get the property directly.
    if (typeof object[getter] === 'function')
      return object[getter]();
    else
      return object[property];
  }

  var setProperty = function(object, setter, property, value) {
    // Use setter method if present; otherwise, set the property directly.
    if (typeof object[setter] === 'function')
      object[setter](value);
    else
      object[property] = value;
  }

  describe('KeystoreChainItems', function() {
    it('should create an instance of KeystoreChainItems', function() {
      // uncomment below and update the code to test KeystoreChainItems
      //var instane = new NodeSwaggerAem.KeystoreChainItems();
      //expect(instance).to.be.a(NodeSwaggerAem.KeystoreChainItems);
    });

    it('should have the property subject (base name: "subject")', function() {
      // uncomment below and update the code to test the property subject
      //var instane = new NodeSwaggerAem.KeystoreChainItems();
      //expect(instance).to.be();
    });

    it('should have the property issuer (base name: "issuer")', function() {
      // uncomment below and update the code to test the property issuer
      //var instane = new NodeSwaggerAem.KeystoreChainItems();
      //expect(instance).to.be();
    });

    it('should have the property notBefore (base name: "notBefore")', function() {
      // uncomment below and update the code to test the property notBefore
      //var instane = new NodeSwaggerAem.KeystoreChainItems();
      //expect(instance).to.be();
    });

    it('should have the property notAfter (base name: "notAfter")', function() {
      // uncomment below and update the code to test the property notAfter
      //var instane = new NodeSwaggerAem.KeystoreChainItems();
      //expect(instance).to.be();
    });

    it('should have the property serialNumber (base name: "serialNumber")', function() {
      // uncomment below and update the code to test the property serialNumber
      //var instane = new NodeSwaggerAem.KeystoreChainItems();
      //expect(instance).to.be();
    });

  });

}));
