package org.openapitools.api.impl;

import org.openapitools.api.*;
import org.openapitools.model.*;
import org.jboss.resteasy.plugins.providers.multipart.MultipartFormDataInput;


import java.math.BigDecimal;
import java.io.File;

import java.util.List;
import org.openapitools.api.NotFoundException;

import java.io.InputStream;

import javax.enterprise.context.RequestScoped;
import javax.ws.rs.core.Response;
import javax.ws.rs.core.SecurityContext;

@RequestScoped
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaResteasyServerCodegen", date = "2019-08-04T23:42:05.073Z[GMT]")
public class EtcApiServiceImpl implements EtcApiService {
      public Response deleteAgent(String runmode,String name,SecurityContext securityContext)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }
      public Response getAgent(String runmode,String name,SecurityContext securityContext)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }
      public Response getAgents(String runmode,SecurityContext securityContext)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }
      public Response getPackage(String group,String name,String version,SecurityContext securityContext)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }
      public Response getPackageFilter(String group,String name,String version,SecurityContext securityContext)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }
      public Response getTruststore(SecurityContext securityContext)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }
      public Response postAgent(String runmode,String name,Boolean jcrColonContentSlashCqColonDistribute,String jcrColonContentSlashCqColonDistributeAtTypeHint,String jcrColonContentSlashCqColonName,String jcrColonContentSlashCqColonTemplate,Boolean jcrColonContentSlashEnabled,String jcrColonContentSlashJcrColonDescription,String jcrColonContentSlashJcrColonLastModified,String jcrColonContentSlashJcrColonLastModifiedBy,String jcrColonContentSlashJcrColonMixinTypes,String jcrColonContentSlashJcrColonTitle,String jcrColonContentSlashLogLevel,Boolean jcrColonContentSlashNoStatusUpdate,Boolean jcrColonContentSlashNoVersioning,BigDecimal jcrColonContentSlashProtocolConnectTimeout,Boolean jcrColonContentSlashProtocolHTTPConnectionClosed,String jcrColonContentSlashProtocolHTTPExpired,List<String> jcrColonContentSlashProtocolHTTPHeaders,String jcrColonContentSlashProtocolHTTPHeadersAtTypeHint,String jcrColonContentSlashProtocolHTTPMethod,Boolean jcrColonContentSlashProtocolHTTPSRelaxed,String jcrColonContentSlashProtocolInterface,BigDecimal jcrColonContentSlashProtocolSocketTimeout,String jcrColonContentSlashProtocolVersion,String jcrColonContentSlashProxyNTLMDomain,String jcrColonContentSlashProxyNTLMHost,String jcrColonContentSlashProxyHost,String jcrColonContentSlashProxyPassword,BigDecimal jcrColonContentSlashProxyPort,String jcrColonContentSlashProxyUser,BigDecimal jcrColonContentSlashQueueBatchMaxSize,String jcrColonContentSlashQueueBatchMode,BigDecimal jcrColonContentSlashQueueBatchWaitTime,String jcrColonContentSlashRetryDelay,Boolean jcrColonContentSlashReverseReplication,String jcrColonContentSlashSerializationType,String jcrColonContentSlashSlingColonResourceType,String jcrColonContentSlashSsl,String jcrColonContentSlashTransportNTLMDomain,String jcrColonContentSlashTransportNTLMHost,String jcrColonContentSlashTransportPassword,String jcrColonContentSlashTransportUri,String jcrColonContentSlashTransportUser,Boolean jcrColonContentSlashTriggerDistribute,Boolean jcrColonContentSlashTriggerModified,Boolean jcrColonContentSlashTriggerOnOffTime,Boolean jcrColonContentSlashTriggerReceive,Boolean jcrColonContentSlashTriggerSpecific,String jcrColonContentSlashUserId,String jcrColonPrimaryType,String colonOperation,SecurityContext securityContext)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }
      public Response postTreeActivation(Boolean ignoredeactivated,Boolean onlymodified,String path,SecurityContext securityContext)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }
      public Response postTruststorePKCS12(MultipartFormDataInput input,SecurityContext securityContext)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }
}
