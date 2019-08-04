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
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


package org.openapitools.api;

import org.openapitools.model.SamlConfigurationInfo;
import org.junit.Test;
import org.junit.Before;
import static org.junit.Assert.*;

import javax.ws.rs.core.Response;
import org.apache.cxf.jaxrs.client.JAXRSClientFactory;
import org.apache.cxf.jaxrs.client.ClientConfiguration;
import org.apache.cxf.jaxrs.client.WebClient;


import com.fasterxml.jackson.jaxrs.json.JacksonJsonProvider;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;




/**
 * Adobe Experience Manager (AEM) API
 *
 * <p>Swagger AEM is an OpenAPI specification for Adobe Experience Manager (AEM) API
 *
 * API tests for ConsoleApi 
 */
public class ConsoleApiTest {


    private ConsoleApi api;
    
    @Before
    public void setup() {
        JacksonJsonProvider provider = new JacksonJsonProvider();
        List providers = new ArrayList();
        providers.add(provider);
        
        api = JAXRSClientFactory.create("http://localhost", ConsoleApi.class, providers);
        org.apache.cxf.jaxrs.client.Client client = WebClient.client(api);
        
        ClientConfiguration config = WebClient.getConfig(client); 
    }

    
    /**
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void getAemProductInfoTest() {
        //List<String> response = api.getAemProductInfo();
        //assertNotNull(response);
        // TODO: test validations
        
        
    }
    
    /**
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void getConfigMgrTest() {
        //String response = api.getConfigMgr();
        //assertNotNull(response);
        // TODO: test validations
        
        
    }
    
    /**
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void postBundleTest() {
        String name = null;
        String action = null;
        //api.postBundle(name, action);
        
        // TODO: test validations
        
        
    }
    
    /**
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void postJmxRepositoryTest() {
        String action = null;
        //api.postJmxRepository(action);
        
        // TODO: test validations
        
        
    }
    
    /**
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void postSamlConfigurationTest() {
        Boolean post = null;
        Boolean apply = null;
        Boolean delete = null;
        String action = null;
        String $location = null;
        List<String> path = null;
        Integer serviceRanking = null;
        String idpUrl = null;
        String idpCertAlias = null;
        Boolean idpHttpRedirect = null;
        String serviceProviderEntityId = null;
        String assertionConsumerServiceURL = null;
        String spPrivateKeyAlias = null;
        String keyStorePassword = null;
        String defaultRedirectUrl = null;
        String userIDAttribute = null;
        Boolean useEncryption = null;
        Boolean createUser = null;
        Boolean addGroupMemberships = null;
        String groupMembershipAttribute = null;
        List<String> defaultGroups = null;
        String nameIdFormat = null;
        List<String> synchronizeAttributes = null;
        Boolean handleLogout = null;
        String logoutUrl = null;
        Integer clockTolerance = null;
        String digestMethod = null;
        String signatureMethod = null;
        String userIntermediatePath = null;
        List<String> propertylist = null;
        //SamlConfigurationInfo response = api.postSamlConfiguration(post, apply, delete, action, $location, path, serviceRanking, idpUrl, idpCertAlias, idpHttpRedirect, serviceProviderEntityId, assertionConsumerServiceURL, spPrivateKeyAlias, keyStorePassword, defaultRedirectUrl, userIDAttribute, useEncryption, createUser, addGroupMemberships, groupMembershipAttribute, defaultGroups, nameIdFormat, synchronizeAttributes, handleLogout, logoutUrl, clockTolerance, digestMethod, signatureMethod, userIntermediatePath, propertylist);
        //assertNotNull(response);
        // TODO: test validations
        
        
    }
    
}
