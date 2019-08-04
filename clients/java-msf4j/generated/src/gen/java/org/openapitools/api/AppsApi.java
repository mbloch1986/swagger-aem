package org.openapitools.api;

import org.openapitools.model.*;
import org.openapitools.api.AppsApiService;
import org.openapitools.api.factories.AppsApiServiceFactory;

import io.swagger.annotations.ApiParam;
import io.swagger.jaxrs.*;


import java.util.List;
import org.openapitools.api.NotFoundException;

import java.io.InputStream;

import org.wso2.msf4j.formparam.FormDataParam;
import org.wso2.msf4j.formparam.FileInfo;

import javax.ws.rs.core.Context;
import javax.ws.rs.core.Response;
import javax.ws.rs.core.SecurityContext;
import javax.ws.rs.*;

@Path("/apps")


@io.swagger.annotations.Api(description = "the apps API")
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaMSF4JServerCodegen", date = "2019-08-04T23:41:25.207Z[GMT]")
public class AppsApi  {
   private final AppsApiService delegate = AppsApiServiceFactory.getAppsApi();

    @POST
    @Path("/system/config/com.adobe.granite.auth.saml.SamlAuthenticationHandler.config")
    
    
    @io.swagger.annotations.ApiOperation(value = "", notes = "", response = Void.class, authorizations = {
        @io.swagger.annotations.Authorization(value = "aemAuth")
    }, tags={ "sling", })
    @io.swagger.annotations.ApiResponses(value = { 
        @io.swagger.annotations.ApiResponse(code = 200, message = "Default response", response = Void.class) })
    public Response postConfigAdobeGraniteSamlAuthenticationHandler(@ApiParam(value = "") @QueryParam("keyStorePassword") String keyStorePassword
,@ApiParam(value = "") @QueryParam("keyStorePassword@TypeHint") String keyStorePasswordAtTypeHint
,@ApiParam(value = "") @QueryParam("service.ranking") Integer serviceRanking
,@ApiParam(value = "") @QueryParam("service.ranking@TypeHint") String serviceRankingAtTypeHint
,@ApiParam(value = "") @QueryParam("idpHttpRedirect") Boolean idpHttpRedirect
,@ApiParam(value = "") @QueryParam("idpHttpRedirect@TypeHint") String idpHttpRedirectAtTypeHint
,@ApiParam(value = "") @QueryParam("createUser") Boolean createUser
,@ApiParam(value = "") @QueryParam("createUser@TypeHint") String createUserAtTypeHint
,@ApiParam(value = "") @QueryParam("defaultRedirectUrl") String defaultRedirectUrl
,@ApiParam(value = "") @QueryParam("defaultRedirectUrl@TypeHint") String defaultRedirectUrlAtTypeHint
,@ApiParam(value = "") @QueryParam("userIDAttribute") String userIDAttribute
,@ApiParam(value = "") @QueryParam("userIDAttribute@TypeHint") String userIDAttributeAtTypeHint
,@ApiParam(value = "") @QueryParam("defaultGroups") List<String> defaultGroups
,@ApiParam(value = "") @QueryParam("defaultGroups@TypeHint") String defaultGroupsAtTypeHint
,@ApiParam(value = "") @QueryParam("idpCertAlias") String idpCertAlias
,@ApiParam(value = "") @QueryParam("idpCertAlias@TypeHint") String idpCertAliasAtTypeHint
,@ApiParam(value = "") @QueryParam("addGroupMemberships") Boolean addGroupMemberships
,@ApiParam(value = "") @QueryParam("addGroupMemberships@TypeHint") String addGroupMembershipsAtTypeHint
,@ApiParam(value = "") @QueryParam("path") List<String> path
,@ApiParam(value = "") @QueryParam("path@TypeHint") String pathAtTypeHint
,@ApiParam(value = "") @QueryParam("synchronizeAttributes") List<String> synchronizeAttributes
,@ApiParam(value = "") @QueryParam("synchronizeAttributes@TypeHint") String synchronizeAttributesAtTypeHint
,@ApiParam(value = "") @QueryParam("clockTolerance") Integer clockTolerance
,@ApiParam(value = "") @QueryParam("clockTolerance@TypeHint") String clockToleranceAtTypeHint
,@ApiParam(value = "") @QueryParam("groupMembershipAttribute") String groupMembershipAttribute
,@ApiParam(value = "") @QueryParam("groupMembershipAttribute@TypeHint") String groupMembershipAttributeAtTypeHint
,@ApiParam(value = "") @QueryParam("idpUrl") String idpUrl
,@ApiParam(value = "") @QueryParam("idpUrl@TypeHint") String idpUrlAtTypeHint
,@ApiParam(value = "") @QueryParam("logoutUrl") String logoutUrl
,@ApiParam(value = "") @QueryParam("logoutUrl@TypeHint") String logoutUrlAtTypeHint
,@ApiParam(value = "") @QueryParam("serviceProviderEntityId") String serviceProviderEntityId
,@ApiParam(value = "") @QueryParam("serviceProviderEntityId@TypeHint") String serviceProviderEntityIdAtTypeHint
,@ApiParam(value = "") @QueryParam("assertionConsumerServiceURL") String assertionConsumerServiceURL
,@ApiParam(value = "") @QueryParam("assertionConsumerServiceURL@TypeHint") String assertionConsumerServiceURLAtTypeHint
,@ApiParam(value = "") @QueryParam("handleLogout") Boolean handleLogout
,@ApiParam(value = "") @QueryParam("handleLogout@TypeHint") String handleLogoutAtTypeHint
,@ApiParam(value = "") @QueryParam("spPrivateKeyAlias") String spPrivateKeyAlias
,@ApiParam(value = "") @QueryParam("spPrivateKeyAlias@TypeHint") String spPrivateKeyAliasAtTypeHint
,@ApiParam(value = "") @QueryParam("useEncryption") Boolean useEncryption
,@ApiParam(value = "") @QueryParam("useEncryption@TypeHint") String useEncryptionAtTypeHint
,@ApiParam(value = "") @QueryParam("nameIdFormat") String nameIdFormat
,@ApiParam(value = "") @QueryParam("nameIdFormat@TypeHint") String nameIdFormatAtTypeHint
,@ApiParam(value = "") @QueryParam("digestMethod") String digestMethod
,@ApiParam(value = "") @QueryParam("digestMethod@TypeHint") String digestMethodAtTypeHint
,@ApiParam(value = "") @QueryParam("signatureMethod") String signatureMethod
,@ApiParam(value = "") @QueryParam("signatureMethod@TypeHint") String signatureMethodAtTypeHint
,@ApiParam(value = "") @QueryParam("userIntermediatePath") String userIntermediatePath
,@ApiParam(value = "") @QueryParam("userIntermediatePath@TypeHint") String userIntermediatePathAtTypeHint
)
    throws NotFoundException {
        return delegate.postConfigAdobeGraniteSamlAuthenticationHandler(keyStorePassword,keyStorePasswordAtTypeHint,serviceRanking,serviceRankingAtTypeHint,idpHttpRedirect,idpHttpRedirectAtTypeHint,createUser,createUserAtTypeHint,defaultRedirectUrl,defaultRedirectUrlAtTypeHint,userIDAttribute,userIDAttributeAtTypeHint,defaultGroups,defaultGroupsAtTypeHint,idpCertAlias,idpCertAliasAtTypeHint,addGroupMemberships,addGroupMembershipsAtTypeHint,path,pathAtTypeHint,synchronizeAttributes,synchronizeAttributesAtTypeHint,clockTolerance,clockToleranceAtTypeHint,groupMembershipAttribute,groupMembershipAttributeAtTypeHint,idpUrl,idpUrlAtTypeHint,logoutUrl,logoutUrlAtTypeHint,serviceProviderEntityId,serviceProviderEntityIdAtTypeHint,assertionConsumerServiceURL,assertionConsumerServiceURLAtTypeHint,handleLogout,handleLogoutAtTypeHint,spPrivateKeyAlias,spPrivateKeyAliasAtTypeHint,useEncryption,useEncryptionAtTypeHint,nameIdFormat,nameIdFormatAtTypeHint,digestMethod,digestMethodAtTypeHint,signatureMethod,signatureMethodAtTypeHint,userIntermediatePath,userIntermediatePathAtTypeHint);
    }
    @POST
    @Path("/system/config/com.shinesolutions.healthcheck.hc.impl.ActiveBundleHealthCheck")
    
    
    @io.swagger.annotations.ApiOperation(value = "", notes = "", response = Void.class, authorizations = {
        @io.swagger.annotations.Authorization(value = "aemAuth")
    }, tags={ "custom", })
    @io.swagger.annotations.ApiResponses(value = { 
        @io.swagger.annotations.ApiResponse(code = 200, message = "Default response", response = Void.class) })
    public Response postConfigAemHealthCheckServlet(@ApiParam(value = "") @QueryParam("bundles.ignored") List<String> bundlesIgnored
,@ApiParam(value = "") @QueryParam("bundles.ignored@TypeHint") String bundlesIgnoredAtTypeHint
)
    throws NotFoundException {
        return delegate.postConfigAemHealthCheckServlet(bundlesIgnored,bundlesIgnoredAtTypeHint);
    }
    @POST
    @Path("/system/config/com.shinesolutions.aem.passwordreset.Activator")
    
    
    @io.swagger.annotations.ApiOperation(value = "", notes = "", response = Void.class, authorizations = {
        @io.swagger.annotations.Authorization(value = "aemAuth")
    }, tags={ "custom", })
    @io.swagger.annotations.ApiResponses(value = { 
        @io.swagger.annotations.ApiResponse(code = 200, message = "Default response", response = Void.class) })
    public Response postConfigAemPasswordReset(@ApiParam(value = "") @QueryParam("pwdreset.authorizables") List<String> pwdresetAuthorizables
,@ApiParam(value = "") @QueryParam("pwdreset.authorizables@TypeHint") String pwdresetAuthorizablesAtTypeHint
)
    throws NotFoundException {
        return delegate.postConfigAemPasswordReset(pwdresetAuthorizables,pwdresetAuthorizablesAtTypeHint);
    }
    @POST
    @Path("/system/config/org.apache.felix.http")
    
    
    @io.swagger.annotations.ApiOperation(value = "", notes = "", response = Void.class, authorizations = {
        @io.swagger.annotations.Authorization(value = "aemAuth")
    }, tags={ "sling", })
    @io.swagger.annotations.ApiResponses(value = { 
        @io.swagger.annotations.ApiResponse(code = 200, message = "Default response", response = Void.class) })
    public Response postConfigApacheFelixJettyBasedHttpService(@ApiParam(value = "") @QueryParam("org.apache.felix.https.nio") Boolean orgApacheFelixHttpsNio
,@ApiParam(value = "") @QueryParam("org.apache.felix.https.nio@TypeHint") String orgApacheFelixHttpsNioAtTypeHint
,@ApiParam(value = "") @QueryParam("org.apache.felix.https.keystore") String orgApacheFelixHttpsKeystore
,@ApiParam(value = "") @QueryParam("org.apache.felix.https.keystore@TypeHint") String orgApacheFelixHttpsKeystoreAtTypeHint
,@ApiParam(value = "") @QueryParam("org.apache.felix.https.keystore.password") String orgApacheFelixHttpsKeystorePassword
,@ApiParam(value = "") @QueryParam("org.apache.felix.https.keystore.password@TypeHint") String orgApacheFelixHttpsKeystorePasswordAtTypeHint
,@ApiParam(value = "") @QueryParam("org.apache.felix.https.keystore.key") String orgApacheFelixHttpsKeystoreKey
,@ApiParam(value = "") @QueryParam("org.apache.felix.https.keystore.key@TypeHint") String orgApacheFelixHttpsKeystoreKeyAtTypeHint
,@ApiParam(value = "") @QueryParam("org.apache.felix.https.keystore.key.password") String orgApacheFelixHttpsKeystoreKeyPassword
,@ApiParam(value = "") @QueryParam("org.apache.felix.https.keystore.key.password@TypeHint") String orgApacheFelixHttpsKeystoreKeyPasswordAtTypeHint
,@ApiParam(value = "") @QueryParam("org.apache.felix.https.truststore") String orgApacheFelixHttpsTruststore
,@ApiParam(value = "") @QueryParam("org.apache.felix.https.truststore@TypeHint") String orgApacheFelixHttpsTruststoreAtTypeHint
,@ApiParam(value = "") @QueryParam("org.apache.felix.https.truststore.password") String orgApacheFelixHttpsTruststorePassword
,@ApiParam(value = "") @QueryParam("org.apache.felix.https.truststore.password@TypeHint") String orgApacheFelixHttpsTruststorePasswordAtTypeHint
,@ApiParam(value = "") @QueryParam("org.apache.felix.https.clientcertificate") String orgApacheFelixHttpsClientcertificate
,@ApiParam(value = "") @QueryParam("org.apache.felix.https.clientcertificate@TypeHint") String orgApacheFelixHttpsClientcertificateAtTypeHint
,@ApiParam(value = "") @QueryParam("org.apache.felix.https.enable") Boolean orgApacheFelixHttpsEnable
,@ApiParam(value = "") @QueryParam("org.apache.felix.https.enable@TypeHint") String orgApacheFelixHttpsEnableAtTypeHint
,@ApiParam(value = "") @QueryParam("org.osgi.service.http.port.secure") String orgOsgiServiceHttpPortSecure
,@ApiParam(value = "") @QueryParam("org.osgi.service.http.port.secure@TypeHint") String orgOsgiServiceHttpPortSecureAtTypeHint
)
    throws NotFoundException {
        return delegate.postConfigApacheFelixJettyBasedHttpService(orgApacheFelixHttpsNio,orgApacheFelixHttpsNioAtTypeHint,orgApacheFelixHttpsKeystore,orgApacheFelixHttpsKeystoreAtTypeHint,orgApacheFelixHttpsKeystorePassword,orgApacheFelixHttpsKeystorePasswordAtTypeHint,orgApacheFelixHttpsKeystoreKey,orgApacheFelixHttpsKeystoreKeyAtTypeHint,orgApacheFelixHttpsKeystoreKeyPassword,orgApacheFelixHttpsKeystoreKeyPasswordAtTypeHint,orgApacheFelixHttpsTruststore,orgApacheFelixHttpsTruststoreAtTypeHint,orgApacheFelixHttpsTruststorePassword,orgApacheFelixHttpsTruststorePasswordAtTypeHint,orgApacheFelixHttpsClientcertificate,orgApacheFelixHttpsClientcertificateAtTypeHint,orgApacheFelixHttpsEnable,orgApacheFelixHttpsEnableAtTypeHint,orgOsgiServiceHttpPortSecure,orgOsgiServiceHttpPortSecureAtTypeHint);
    }
    @POST
    @Path("/system/config/org.apache.http.proxyconfigurator.config")
    
    
    @io.swagger.annotations.ApiOperation(value = "", notes = "", response = Void.class, authorizations = {
        @io.swagger.annotations.Authorization(value = "aemAuth")
    }, tags={ "sling", })
    @io.swagger.annotations.ApiResponses(value = { 
        @io.swagger.annotations.ApiResponse(code = 200, message = "Default response", response = Void.class) })
    public Response postConfigApacheHttpComponentsProxyConfiguration(@ApiParam(value = "") @QueryParam("proxy.host") String proxyHost
,@ApiParam(value = "") @QueryParam("proxy.host@TypeHint") String proxyHostAtTypeHint
,@ApiParam(value = "") @QueryParam("proxy.port") Integer proxyPort
,@ApiParam(value = "") @QueryParam("proxy.port@TypeHint") String proxyPortAtTypeHint
,@ApiParam(value = "") @QueryParam("proxy.exceptions") List<String> proxyExceptions
,@ApiParam(value = "") @QueryParam("proxy.exceptions@TypeHint") String proxyExceptionsAtTypeHint
,@ApiParam(value = "") @QueryParam("proxy.enabled") Boolean proxyEnabled
,@ApiParam(value = "") @QueryParam("proxy.enabled@TypeHint") String proxyEnabledAtTypeHint
,@ApiParam(value = "") @QueryParam("proxy.user") String proxyUser
,@ApiParam(value = "") @QueryParam("proxy.user@TypeHint") String proxyUserAtTypeHint
,@ApiParam(value = "") @QueryParam("proxy.password") String proxyPassword
,@ApiParam(value = "") @QueryParam("proxy.password@TypeHint") String proxyPasswordAtTypeHint
)
    throws NotFoundException {
        return delegate.postConfigApacheHttpComponentsProxyConfiguration(proxyHost,proxyHostAtTypeHint,proxyPort,proxyPortAtTypeHint,proxyExceptions,proxyExceptionsAtTypeHint,proxyEnabled,proxyEnabledAtTypeHint,proxyUser,proxyUserAtTypeHint,proxyPassword,proxyPasswordAtTypeHint);
    }
    @POST
    @Path("/system/config/org.apache.sling.jcr.davex.impl.servlets.SlingDavExServlet")
    
    
    @io.swagger.annotations.ApiOperation(value = "", notes = "", response = Void.class, authorizations = {
        @io.swagger.annotations.Authorization(value = "aemAuth")
    }, tags={ "sling", })
    @io.swagger.annotations.ApiResponses(value = { 
        @io.swagger.annotations.ApiResponse(code = 200, message = "Default response", response = Void.class) })
    public Response postConfigApacheSlingDavExServlet(@ApiParam(value = "") @QueryParam("alias") String alias
,@ApiParam(value = "") @QueryParam("alias@TypeHint") String aliasAtTypeHint
,@ApiParam(value = "") @QueryParam("dav.create-absolute-uri") Boolean davCreateAbsoluteUri
,@ApiParam(value = "") @QueryParam("dav.create-absolute-uri@TypeHint") String davCreateAbsoluteUriAtTypeHint
)
    throws NotFoundException {
        return delegate.postConfigApacheSlingDavExServlet(alias,aliasAtTypeHint,davCreateAbsoluteUri,davCreateAbsoluteUriAtTypeHint);
    }
    @POST
    @Path("/system/config/org.apache.sling.servlets.get.DefaultGetServlet")
    
    
    @io.swagger.annotations.ApiOperation(value = "", notes = "", response = Void.class, authorizations = {
        @io.swagger.annotations.Authorization(value = "aemAuth")
    }, tags={ "sling", })
    @io.swagger.annotations.ApiResponses(value = { 
        @io.swagger.annotations.ApiResponse(code = 200, message = "Default response", response = Void.class) })
    public Response postConfigApacheSlingGetServlet(@ApiParam(value = "") @QueryParam("json.maximumresults") String jsonMaximumresults
,@ApiParam(value = "") @QueryParam("json.maximumresults@TypeHint") String jsonMaximumresultsAtTypeHint
,@ApiParam(value = "") @QueryParam("enable.html") Boolean enableHtml
,@ApiParam(value = "") @QueryParam("enable.html@TypeHint") String enableHtmlAtTypeHint
,@ApiParam(value = "") @QueryParam("enable.txt") Boolean enableTxt
,@ApiParam(value = "") @QueryParam("enable.txt@TypeHint") String enableTxtAtTypeHint
,@ApiParam(value = "") @QueryParam("enable.xml") Boolean enableXml
,@ApiParam(value = "") @QueryParam("enable.xml@TypeHint") String enableXmlAtTypeHint
)
    throws NotFoundException {
        return delegate.postConfigApacheSlingGetServlet(jsonMaximumresults,jsonMaximumresultsAtTypeHint,enableHtml,enableHtmlAtTypeHint,enableTxt,enableTxtAtTypeHint,enableXml,enableXmlAtTypeHint);
    }
    @POST
    @Path("/system/config/org.apache.sling.security.impl.ReferrerFilter")
    
    
    @io.swagger.annotations.ApiOperation(value = "", notes = "", response = Void.class, authorizations = {
        @io.swagger.annotations.Authorization(value = "aemAuth")
    }, tags={ "sling", })
    @io.swagger.annotations.ApiResponses(value = { 
        @io.swagger.annotations.ApiResponse(code = 200, message = "Default response", response = Void.class) })
    public Response postConfigApacheSlingReferrerFilter(@ApiParam(value = "") @QueryParam("allow.empty") Boolean allowEmpty
,@ApiParam(value = "") @QueryParam("allow.empty@TypeHint") String allowEmptyAtTypeHint
,@ApiParam(value = "") @QueryParam("allow.hosts") String allowHosts
,@ApiParam(value = "") @QueryParam("allow.hosts@TypeHint") String allowHostsAtTypeHint
,@ApiParam(value = "") @QueryParam("allow.hosts.regexp") String allowHostsRegexp
,@ApiParam(value = "") @QueryParam("allow.hosts.regexp@TypeHint") String allowHostsRegexpAtTypeHint
,@ApiParam(value = "") @QueryParam("filter.methods") String filterMethods
,@ApiParam(value = "") @QueryParam("filter.methods@TypeHint") String filterMethodsAtTypeHint
)
    throws NotFoundException {
        return delegate.postConfigApacheSlingReferrerFilter(allowEmpty,allowEmptyAtTypeHint,allowHosts,allowHostsAtTypeHint,allowHostsRegexp,allowHostsRegexpAtTypeHint,filterMethods,filterMethodsAtTypeHint);
    }
}
