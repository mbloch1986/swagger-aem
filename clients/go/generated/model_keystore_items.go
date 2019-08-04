/*
 * Adobe Experience Manager (AEM) API
 *
 * Swagger AEM is an OpenAPI specification for Adobe Experience Manager (AEM) API
 *
 * API version: 3.2.0-pre.0
 * Contact: opensource@shinesolutions.com
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package openapi

type KeystoreItems struct {
	// Keystore alias name
	Alias string `json:"alias,omitempty"`
	// e.g. \"privateKey\"
	EntryType string `json:"entryType,omitempty"`
	// e.g. \"RSA\"
	Algorithm string `json:"algorithm,omitempty"`
	// e.g. \"PKCS#8\"
	Format string `json:"format,omitempty"`
	Chain []KeystoreChainItems `json:"chain,omitempty"`
}
