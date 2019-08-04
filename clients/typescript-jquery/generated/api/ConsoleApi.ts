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
 */


import * as $ from 'jquery';
import * as models from '../model/models';
import { COLLECTION_FORMATS } from '../variables';
import { Configuration } from '../configuration';

/* tslint:disable:no-unused-variable member-ordering */


export class ConsoleApi {
    protected basePath = 'http://localhost';
    public defaultHeaders: Array<string> = [];
    public defaultExtraJQueryAjaxSettings?: JQueryAjaxSettings = null;
    public configuration: Configuration = new Configuration();

    constructor(basePath?: string, configuration?: Configuration, defaultExtraJQueryAjaxSettings?: JQueryAjaxSettings) {
        if (basePath) {
            this.basePath = basePath;
        }
        if (configuration) {
            this.configuration = configuration;
        }
        if (defaultExtraJQueryAjaxSettings) {
            this.defaultExtraJQueryAjaxSettings = defaultExtraJQueryAjaxSettings;
        }
    }

    private extendObj<T1, T2 extends T1>(objA: T2, objB: T2): T1|T2 {
        for (let key in objB) {
            if (objB.hasOwnProperty(key)) {
                objA[key] = objB[key];
            }
        }
        return objA;
    }

    /**
     * 
     */
    public getAemProductInfo(extraJQueryAjaxSettings?: JQueryAjaxSettings): JQuery.Promise<
    { response: JQueryXHR; body: Array<string>;  },
    { response: JQueryXHR; errorThrown: string }
    > {
        let localVarPath = this.basePath + '/system/console/status-productinfo.json';

        let queryParameters: any = {};
        let headerParams: any = {};

        localVarPath = localVarPath + "?" + $.param(queryParameters);
        // to determine the Content-Type header
        let consumes: string[] = [
        ];

        // to determine the Accept header
        let produces: string[] = [
            'application/json'
        ];

        // authentication (aemAuth) required
        // http basic authentication required
        if (this.configuration.username || this.configuration.password) {
            headerParams['Authorization'] = 'Basic ' + btoa(this.configuration.username + ':' + this.configuration.password);
        }


        let requestOptions: JQueryAjaxSettings = {
            url: localVarPath,
            type: 'GET',
            headers: headerParams,
            processData: false
        };

        if (headerParams['Content-Type']) {
            requestOptions.contentType = headerParams['Content-Type'];
        }

        if (extraJQueryAjaxSettings) {
            requestOptions = (<any>Object).assign(requestOptions, extraJQueryAjaxSettings);
        }

        if (this.defaultExtraJQueryAjaxSettings) {
            requestOptions = (<any>Object).assign(requestOptions, this.defaultExtraJQueryAjaxSettings);
        }

        let dfd = $.Deferred<
            { response: JQueryXHR; body: Array<string>;  },
            { response: JQueryXHR; errorThrown: string }
        >();
        $.ajax(requestOptions).then(
            (data: Array<string>, textStatus: string, jqXHR: JQueryXHR) =>
                dfd.resolve({response: jqXHR, body: data),
            (xhr: JQueryXHR, textStatus: string, errorThrown: string) =>
                dfd.reject({response: xhr, errorThrown: errorThrown})
        );
        return dfd.promise();
    }

    /**
     * 
     */
    public getConfigMgr(extraJQueryAjaxSettings?: JQueryAjaxSettings): JQuery.Promise<
    { response: JQueryXHR; body: string;  },
    { response: JQueryXHR; errorThrown: string }
    > {
        let localVarPath = this.basePath + '/system/console/configMgr';

        let queryParameters: any = {};
        let headerParams: any = {};

        localVarPath = localVarPath + "?" + $.param(queryParameters);
        // to determine the Content-Type header
        let consumes: string[] = [
        ];

        // to determine the Accept header
        let produces: string[] = [
            'text/xml'
        ];

        // authentication (aemAuth) required
        // http basic authentication required
        if (this.configuration.username || this.configuration.password) {
            headerParams['Authorization'] = 'Basic ' + btoa(this.configuration.username + ':' + this.configuration.password);
        }


        let requestOptions: JQueryAjaxSettings = {
            url: localVarPath,
            type: 'GET',
            headers: headerParams,
            processData: false
        };

        if (headerParams['Content-Type']) {
            requestOptions.contentType = headerParams['Content-Type'];
        }

        if (extraJQueryAjaxSettings) {
            requestOptions = (<any>Object).assign(requestOptions, extraJQueryAjaxSettings);
        }

        if (this.defaultExtraJQueryAjaxSettings) {
            requestOptions = (<any>Object).assign(requestOptions, this.defaultExtraJQueryAjaxSettings);
        }

        let dfd = $.Deferred<
            { response: JQueryXHR; body: string;  },
            { response: JQueryXHR; errorThrown: string }
        >();
        $.ajax(requestOptions).then(
            (data: string, textStatus: string, jqXHR: JQueryXHR) =>
                dfd.resolve({response: jqXHR, body: data),
            (xhr: JQueryXHR, textStatus: string, errorThrown: string) =>
                dfd.reject({response: xhr, errorThrown: errorThrown})
        );
        return dfd.promise();
    }

    /**
     * 
     * @param name 
     * @param action 
     */
    public postBundle(name: string, action: string, extraJQueryAjaxSettings?: JQueryAjaxSettings): JQuery.Promise<
    { response: JQueryXHR; body?: any;  },
    { response: JQueryXHR; errorThrown: string }
    > {
        let localVarPath = this.basePath + '/system/console/bundles/{name}'.replace('{' + 'name' + '}', encodeURIComponent(String(name)));

        let queryParameters: any = {};
        let headerParams: any = {};
        // verify required parameter 'name' is not null or undefined
        if (name === null || name === undefined) {
            throw new Error('Required parameter name was null or undefined when calling postBundle.');
        }

        // verify required parameter 'action' is not null or undefined
        if (action === null || action === undefined) {
            throw new Error('Required parameter action was null or undefined when calling postBundle.');
        }

        if (action !== null && action !== undefined) {
            queryParameters['action'] = <string><any>action;
        }

        localVarPath = localVarPath + "?" + $.param(queryParameters);
        // to determine the Content-Type header
        let consumes: string[] = [
        ];

        // to determine the Accept header
        let produces: string[] = [
        ];

        // authentication (aemAuth) required
        // http basic authentication required
        if (this.configuration.username || this.configuration.password) {
            headerParams['Authorization'] = 'Basic ' + btoa(this.configuration.username + ':' + this.configuration.password);
        }


        let requestOptions: JQueryAjaxSettings = {
            url: localVarPath,
            type: 'POST',
            headers: headerParams,
            processData: false
        };

        if (headerParams['Content-Type']) {
            requestOptions.contentType = headerParams['Content-Type'];
        }

        if (extraJQueryAjaxSettings) {
            requestOptions = (<any>Object).assign(requestOptions, extraJQueryAjaxSettings);
        }

        if (this.defaultExtraJQueryAjaxSettings) {
            requestOptions = (<any>Object).assign(requestOptions, this.defaultExtraJQueryAjaxSettings);
        }

        let dfd = $.Deferred<
            { response: JQueryXHR; body?: any;  },
            { response: JQueryXHR; errorThrown: string }
        >();
        $.ajax(requestOptions).then(
            (data: any, textStatus: string, jqXHR: JQueryXHR) =>
                dfd.resolve({response: jqXHR, body: data),
            (xhr: JQueryXHR, textStatus: string, errorThrown: string) =>
                dfd.reject({response: xhr, errorThrown: errorThrown})
        );
        return dfd.promise();
    }

    /**
     * 
     * @param action 
     */
    public postJmxRepository(action: string, extraJQueryAjaxSettings?: JQueryAjaxSettings): JQuery.Promise<
    { response: JQueryXHR; body?: any;  },
    { response: JQueryXHR; errorThrown: string }
    > {
        let localVarPath = this.basePath + '/system/console/jmx/com.adobe.granite:type=Repository/op/{action}'.replace('{' + 'action' + '}', encodeURIComponent(String(action)));

        let queryParameters: any = {};
        let headerParams: any = {};
        // verify required parameter 'action' is not null or undefined
        if (action === null || action === undefined) {
            throw new Error('Required parameter action was null or undefined when calling postJmxRepository.');
        }


        localVarPath = localVarPath + "?" + $.param(queryParameters);
        // to determine the Content-Type header
        let consumes: string[] = [
        ];

        // to determine the Accept header
        let produces: string[] = [
        ];

        // authentication (aemAuth) required
        // http basic authentication required
        if (this.configuration.username || this.configuration.password) {
            headerParams['Authorization'] = 'Basic ' + btoa(this.configuration.username + ':' + this.configuration.password);
        }


        let requestOptions: JQueryAjaxSettings = {
            url: localVarPath,
            type: 'POST',
            headers: headerParams,
            processData: false
        };

        if (headerParams['Content-Type']) {
            requestOptions.contentType = headerParams['Content-Type'];
        }

        if (extraJQueryAjaxSettings) {
            requestOptions = (<any>Object).assign(requestOptions, extraJQueryAjaxSettings);
        }

        if (this.defaultExtraJQueryAjaxSettings) {
            requestOptions = (<any>Object).assign(requestOptions, this.defaultExtraJQueryAjaxSettings);
        }

        let dfd = $.Deferred<
            { response: JQueryXHR; body?: any;  },
            { response: JQueryXHR; errorThrown: string }
        >();
        $.ajax(requestOptions).then(
            (data: any, textStatus: string, jqXHR: JQueryXHR) =>
                dfd.resolve({response: jqXHR, body: data),
            (xhr: JQueryXHR, textStatus: string, errorThrown: string) =>
                dfd.reject({response: xhr, errorThrown: errorThrown})
        );
        return dfd.promise();
    }

    /**
     * 
     * @param post 
     * @param apply 
     * @param _delete 
     * @param action 
     * @param $location 
     * @param path 
     * @param serviceRanking 
     * @param idpUrl 
     * @param idpCertAlias 
     * @param idpHttpRedirect 
     * @param serviceProviderEntityId 
     * @param assertionConsumerServiceURL 
     * @param spPrivateKeyAlias 
     * @param keyStorePassword 
     * @param defaultRedirectUrl 
     * @param userIDAttribute 
     * @param useEncryption 
     * @param createUser 
     * @param addGroupMemberships 
     * @param groupMembershipAttribute 
     * @param defaultGroups 
     * @param nameIdFormat 
     * @param synchronizeAttributes 
     * @param handleLogout 
     * @param logoutUrl 
     * @param clockTolerance 
     * @param digestMethod 
     * @param signatureMethod 
     * @param userIntermediatePath 
     * @param propertylist 
     */
    public postSamlConfiguration(post?: boolean, apply?: boolean, _delete?: boolean, action?: string, $location?: string, path?: Array<string>, serviceRanking?: number, idpUrl?: string, idpCertAlias?: string, idpHttpRedirect?: boolean, serviceProviderEntityId?: string, assertionConsumerServiceURL?: string, spPrivateKeyAlias?: string, keyStorePassword?: string, defaultRedirectUrl?: string, userIDAttribute?: string, useEncryption?: boolean, createUser?: boolean, addGroupMemberships?: boolean, groupMembershipAttribute?: string, defaultGroups?: Array<string>, nameIdFormat?: string, synchronizeAttributes?: Array<string>, handleLogout?: boolean, logoutUrl?: string, clockTolerance?: number, digestMethod?: string, signatureMethod?: string, userIntermediatePath?: string, propertylist?: Array<string>, extraJQueryAjaxSettings?: JQueryAjaxSettings): JQuery.Promise<
    { response: JQueryXHR; body: models.SamlConfigurationInfo;  },
    { response: JQueryXHR; errorThrown: string }
    > {
        let localVarPath = this.basePath + '/system/console/configMgr/com.adobe.granite.auth.saml.SamlAuthenticationHandler';

        let queryParameters: any = {};
        let headerParams: any = {};
        if (post !== null && post !== undefined) {
            queryParameters['post'] = <string><any>post;
        }
        if (apply !== null && apply !== undefined) {
            queryParameters['apply'] = <string><any>apply;
        }
        if (_delete !== null && _delete !== undefined) {
            queryParameters['delete'] = <string><any>_delete;
        }
        if (action !== null && action !== undefined) {
            queryParameters['action'] = <string><any>action;
        }
        if ($location !== null && $location !== undefined) {
            queryParameters['$location'] = <string><any>$location;
        }
        if (path) {
            path.forEach((element: any) => {
                queryParameters['path'].push(element);
            });
        }
        if (serviceRanking !== null && serviceRanking !== undefined) {
            queryParameters['service.ranking'] = <string><any>serviceRanking;
        }
        if (idpUrl !== null && idpUrl !== undefined) {
            queryParameters['idpUrl'] = <string><any>idpUrl;
        }
        if (idpCertAlias !== null && idpCertAlias !== undefined) {
            queryParameters['idpCertAlias'] = <string><any>idpCertAlias;
        }
        if (idpHttpRedirect !== null && idpHttpRedirect !== undefined) {
            queryParameters['idpHttpRedirect'] = <string><any>idpHttpRedirect;
        }
        if (serviceProviderEntityId !== null && serviceProviderEntityId !== undefined) {
            queryParameters['serviceProviderEntityId'] = <string><any>serviceProviderEntityId;
        }
        if (assertionConsumerServiceURL !== null && assertionConsumerServiceURL !== undefined) {
            queryParameters['assertionConsumerServiceURL'] = <string><any>assertionConsumerServiceURL;
        }
        if (spPrivateKeyAlias !== null && spPrivateKeyAlias !== undefined) {
            queryParameters['spPrivateKeyAlias'] = <string><any>spPrivateKeyAlias;
        }
        if (keyStorePassword !== null && keyStorePassword !== undefined) {
            queryParameters['keyStorePassword'] = <string><any>keyStorePassword;
        }
        if (defaultRedirectUrl !== null && defaultRedirectUrl !== undefined) {
            queryParameters['defaultRedirectUrl'] = <string><any>defaultRedirectUrl;
        }
        if (userIDAttribute !== null && userIDAttribute !== undefined) {
            queryParameters['userIDAttribute'] = <string><any>userIDAttribute;
        }
        if (useEncryption !== null && useEncryption !== undefined) {
            queryParameters['useEncryption'] = <string><any>useEncryption;
        }
        if (createUser !== null && createUser !== undefined) {
            queryParameters['createUser'] = <string><any>createUser;
        }
        if (addGroupMemberships !== null && addGroupMemberships !== undefined) {
            queryParameters['addGroupMemberships'] = <string><any>addGroupMemberships;
        }
        if (groupMembershipAttribute !== null && groupMembershipAttribute !== undefined) {
            queryParameters['groupMembershipAttribute'] = <string><any>groupMembershipAttribute;
        }
        if (defaultGroups) {
            defaultGroups.forEach((element: any) => {
                queryParameters['defaultGroups'].push(element);
            });
        }
        if (nameIdFormat !== null && nameIdFormat !== undefined) {
            queryParameters['nameIdFormat'] = <string><any>nameIdFormat;
        }
        if (synchronizeAttributes) {
            synchronizeAttributes.forEach((element: any) => {
                queryParameters['synchronizeAttributes'].push(element);
            });
        }
        if (handleLogout !== null && handleLogout !== undefined) {
            queryParameters['handleLogout'] = <string><any>handleLogout;
        }
        if (logoutUrl !== null && logoutUrl !== undefined) {
            queryParameters['logoutUrl'] = <string><any>logoutUrl;
        }
        if (clockTolerance !== null && clockTolerance !== undefined) {
            queryParameters['clockTolerance'] = <string><any>clockTolerance;
        }
        if (digestMethod !== null && digestMethod !== undefined) {
            queryParameters['digestMethod'] = <string><any>digestMethod;
        }
        if (signatureMethod !== null && signatureMethod !== undefined) {
            queryParameters['signatureMethod'] = <string><any>signatureMethod;
        }
        if (userIntermediatePath !== null && userIntermediatePath !== undefined) {
            queryParameters['userIntermediatePath'] = <string><any>userIntermediatePath;
        }
        if (propertylist) {
            queryParameters['propertylist'] = propertylist.join(COLLECTION_FORMATS['csv']);
        }

        localVarPath = localVarPath + "?" + $.param(queryParameters);
        // to determine the Content-Type header
        let consumes: string[] = [
        ];

        // to determine the Accept header
        let produces: string[] = [
            'text/plain'
        ];

        // authentication (aemAuth) required
        // http basic authentication required
        if (this.configuration.username || this.configuration.password) {
            headerParams['Authorization'] = 'Basic ' + btoa(this.configuration.username + ':' + this.configuration.password);
        }


        let requestOptions: JQueryAjaxSettings = {
            url: localVarPath,
            type: 'POST',
            headers: headerParams,
            processData: false
        };

        if (headerParams['Content-Type']) {
            requestOptions.contentType = headerParams['Content-Type'];
        }

        if (extraJQueryAjaxSettings) {
            requestOptions = (<any>Object).assign(requestOptions, extraJQueryAjaxSettings);
        }

        if (this.defaultExtraJQueryAjaxSettings) {
            requestOptions = (<any>Object).assign(requestOptions, this.defaultExtraJQueryAjaxSettings);
        }

        let dfd = $.Deferred<
            { response: JQueryXHR; body: models.SamlConfigurationInfo;  },
            { response: JQueryXHR; errorThrown: string }
        >();
        $.ajax(requestOptions).then(
            (data: models.SamlConfigurationInfo, textStatus: string, jqXHR: JQueryXHR) =>
                dfd.resolve({response: jqXHR, body: data),
            (xhr: JQueryXHR, textStatus: string, errorThrown: string) =>
                dfd.reject({response: xhr, errorThrown: errorThrown})
        );
        return dfd.promise();
    }

}
