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
    instance = new NodeSwaggerAem.SlingApi();
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

  describe('SlingApi', function() {
    describe('deleteAgent', function() {
      it('should call deleteAgent successfully', function(done) {
        //uncomment below and update the code to test deleteAgent
        //instance.deleteAgent(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('deleteNode', function() {
      it('should call deleteNode successfully', function(done) {
        //uncomment below and update the code to test deleteNode
        //instance.deleteNode(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('getAgent', function() {
      it('should call getAgent successfully', function(done) {
        //uncomment below and update the code to test getAgent
        //instance.getAgent(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('getAgents', function() {
      it('should call getAgents successfully', function(done) {
        //uncomment below and update the code to test getAgents
        //instance.getAgents(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('getAuthorizableKeystore', function() {
      it('should call getAuthorizableKeystore successfully', function(done) {
        //uncomment below and update the code to test getAuthorizableKeystore
        //instance.getAuthorizableKeystore(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('getKeystore', function() {
      it('should call getKeystore successfully', function(done) {
        //uncomment below and update the code to test getKeystore
        //instance.getKeystore(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('getNode', function() {
      it('should call getNode successfully', function(done) {
        //uncomment below and update the code to test getNode
        //instance.getNode(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('getPackage', function() {
      it('should call getPackage successfully', function(done) {
        //uncomment below and update the code to test getPackage
        //instance.getPackage(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('getPackageFilter', function() {
      it('should call getPackageFilter successfully', function(done) {
        //uncomment below and update the code to test getPackageFilter
        //instance.getPackageFilter(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('getQuery', function() {
      it('should call getQuery successfully', function(done) {
        //uncomment below and update the code to test getQuery
        //instance.getQuery(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('getTruststore', function() {
      it('should call getTruststore successfully', function(done) {
        //uncomment below and update the code to test getTruststore
        //instance.getTruststore(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('getTruststoreInformations', function() {
      it('should call getTruststoreInformations successfully', function(done) {
        //uncomment below and update the code to test getTruststoreInformations
        //instance.getTruststoreInformations(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('postAgent', function() {
      it('should call postAgent successfully', function(done) {
        //uncomment below and update the code to test postAgent
        //instance.postAgent(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('postAuthorizableKeystore', function() {
      it('should call postAuthorizableKeystore successfully', function(done) {
        //uncomment below and update the code to test postAuthorizableKeystore
        //instance.postAuthorizableKeystore(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('postAuthorizables', function() {
      it('should call postAuthorizables successfully', function(done) {
        //uncomment below and update the code to test postAuthorizables
        //instance.postAuthorizables(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('postConfigAdobeGraniteSamlAuthenticationHandler', function() {
      it('should call postConfigAdobeGraniteSamlAuthenticationHandler successfully', function(done) {
        //uncomment below and update the code to test postConfigAdobeGraniteSamlAuthenticationHandler
        //instance.postConfigAdobeGraniteSamlAuthenticationHandler(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('postConfigApacheFelixJettyBasedHttpService', function() {
      it('should call postConfigApacheFelixJettyBasedHttpService successfully', function(done) {
        //uncomment below and update the code to test postConfigApacheFelixJettyBasedHttpService
        //instance.postConfigApacheFelixJettyBasedHttpService(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('postConfigApacheSlingDavExServlet', function() {
      it('should call postConfigApacheSlingDavExServlet successfully', function(done) {
        //uncomment below and update the code to test postConfigApacheSlingDavExServlet
        //instance.postConfigApacheSlingDavExServlet(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('postConfigApacheSlingGetServlet', function() {
      it('should call postConfigApacheSlingGetServlet successfully', function(done) {
        //uncomment below and update the code to test postConfigApacheSlingGetServlet
        //instance.postConfigApacheSlingGetServlet(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('postConfigApacheSlingReferrerFilter', function() {
      it('should call postConfigApacheSlingReferrerFilter successfully', function(done) {
        //uncomment below and update the code to test postConfigApacheSlingReferrerFilter
        //instance.postConfigApacheSlingReferrerFilter(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('postNode', function() {
      it('should call postNode successfully', function(done) {
        //uncomment below and update the code to test postNode
        //instance.postNode(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('postNodeRw', function() {
      it('should call postNodeRw successfully', function(done) {
        //uncomment below and update the code to test postNodeRw
        //instance.postNodeRw(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('postPath', function() {
      it('should call postPath successfully', function(done) {
        //uncomment below and update the code to test postPath
        //instance.postPath(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('postQuery', function() {
      it('should call postQuery successfully', function(done) {
        //uncomment below and update the code to test postQuery
        //instance.postQuery(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('postTreeActivation', function() {
      it('should call postTreeActivation successfully', function(done) {
        //uncomment below and update the code to test postTreeActivation
        //instance.postTreeActivation(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('postTruststore', function() {
      it('should call postTruststore successfully', function(done) {
        //uncomment below and update the code to test postTruststore
        //instance.postTruststore(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('postTruststorePKCS12', function() {
      it('should call postTruststorePKCS12 successfully', function(done) {
        //uncomment below and update the code to test postTruststorePKCS12
        //instance.postTruststorePKCS12(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
  });

}));
