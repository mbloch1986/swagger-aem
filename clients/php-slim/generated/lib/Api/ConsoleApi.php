<?php
/**
 * ConsoleApi
 *
 * PHP version 5
 *
 * @category Class
 * @package  OpenAPIServer\Api
 * @author   OpenAPI Generator team
 * @link     https://github.com/openapitools/openapi-generator
 */

/**
 * Adobe Experience Manager (AEM) API
 *
 * Swagger AEM is an OpenAPI specification for Adobe Experience Manager (AEM) API
 * OpenAPI spec version: 3.2.0-pre.0
 * Contact: opensource@shinesolutions.com
 * Generated by: https://github.com/openapitools/openapi-generator.git
 */

/**
 * NOTE: This class is auto generated by the openapi generator program.
 * https://github.com/openapitools/openapi-generator
 * Do not edit the class manually.
 */
namespace OpenAPIServer\Api;

use OpenAPIServer\AbstractApiController;

/**
 * ConsoleApi Class Doc Comment
 *
 * PHP version 5
 *
 * @category Class
 * @package  OpenAPIServer\Api
 * @author   OpenAPI Generator team
 * @link     https://github.com/openapitools/openapi-generator
 */
class ConsoleApi extends AbstractApiController {

    /**
     * GET getAemProductInfo
     * Summary: 
     * Notes: 
     * Output-Formats: [application/json]
     *
     * @param \Psr\Http\Message\ServerRequestInterface $request  Request
     * @param \Psr\Http\Message\ResponseInterface      $response Response
     * @param array|null                               $args     Path arguments
     */
    public function getAemProductInfo($request, $response, $args) {
        $response->write('How about implementing getAemProductInfo as a GET method ?');
        return $response;
    }
    
    /**
     * GET getConfigMgr
     * Summary: 
     * Notes: 
     * Output-Formats: [text/xml]
     *
     * @param \Psr\Http\Message\ServerRequestInterface $request  Request
     * @param \Psr\Http\Message\ResponseInterface      $response Response
     * @param array|null                               $args     Path arguments
     */
    public function getConfigMgr($request, $response, $args) {
        $response->write('How about implementing getConfigMgr as a GET method ?');
        return $response;
    }
    
    /**
     * POST postBundle
     * Summary: 
     * Notes: 
     *
     * @param \Psr\Http\Message\ServerRequestInterface $request  Request
     * @param \Psr\Http\Message\ResponseInterface      $response Response
     * @param array|null                               $args     Path arguments
     */
    public function postBundle($request, $response, $args) {
        $name = $args['name'];
        $queryParams = $request->getQueryParams();
        $action = $request->getQueryParam('action');
        $response->write('How about implementing postBundle as a POST method ?');
        return $response;
    }
    
    /**
     * POST postJmxRepository
     * Summary: 
     * Notes: 
     *
     * @param \Psr\Http\Message\ServerRequestInterface $request  Request
     * @param \Psr\Http\Message\ResponseInterface      $response Response
     * @param array|null                               $args     Path arguments
     */
    public function postJmxRepository($request, $response, $args) {
        $action = $args['action'];
        $response->write('How about implementing postJmxRepository as a POST method ?');
        return $response;
    }
    
    /**
     * POST postSamlConfiguration
     * Summary: 
     * Notes: 
     * Output-Formats: [text/plain]
     *
     * @param \Psr\Http\Message\ServerRequestInterface $request  Request
     * @param \Psr\Http\Message\ResponseInterface      $response Response
     * @param array|null                               $args     Path arguments
     */
    public function postSamlConfiguration($request, $response, $args) {
        $queryParams = $request->getQueryParams();
        $post = $request->getQueryParam('post');
        $apply = $request->getQueryParam('apply');
        $delete = $request->getQueryParam('delete');
        $action = $request->getQueryParam('action');
        $location = $request->getQueryParam('$location');
        $path = $request->getQueryParam('path');
        $serviceRanking = $request->getQueryParam('service.ranking');
        $idpUrl = $request->getQueryParam('idpUrl');
        $idpCertAlias = $request->getQueryParam('idpCertAlias');
        $idpHttpRedirect = $request->getQueryParam('idpHttpRedirect');
        $serviceProviderEntityId = $request->getQueryParam('serviceProviderEntityId');
        $assertionConsumerServiceURL = $request->getQueryParam('assertionConsumerServiceURL');
        $spPrivateKeyAlias = $request->getQueryParam('spPrivateKeyAlias');
        $keyStorePassword = $request->getQueryParam('keyStorePassword');
        $defaultRedirectUrl = $request->getQueryParam('defaultRedirectUrl');
        $userIDAttribute = $request->getQueryParam('userIDAttribute');
        $useEncryption = $request->getQueryParam('useEncryption');
        $createUser = $request->getQueryParam('createUser');
        $addGroupMemberships = $request->getQueryParam('addGroupMemberships');
        $groupMembershipAttribute = $request->getQueryParam('groupMembershipAttribute');
        $defaultGroups = $request->getQueryParam('defaultGroups');
        $nameIdFormat = $request->getQueryParam('nameIdFormat');
        $synchronizeAttributes = $request->getQueryParam('synchronizeAttributes');
        $handleLogout = $request->getQueryParam('handleLogout');
        $logoutUrl = $request->getQueryParam('logoutUrl');
        $clockTolerance = $request->getQueryParam('clockTolerance');
        $digestMethod = $request->getQueryParam('digestMethod');
        $signatureMethod = $request->getQueryParam('signatureMethod');
        $userIntermediatePath = $request->getQueryParam('userIntermediatePath');
        $propertylist = $request->getQueryParam('propertylist');
        $response->write('How about implementing postSamlConfiguration as a POST method ?');
        return $response;
    }
    
}
