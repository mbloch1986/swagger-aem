# Adobe Experience Manager (AEM) API
#
# Swagger AEM is an OpenAPI specification for Adobe Experience Manager (AEM) API
#
# OpenAPI spec version: 3.2.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' KeystoreItems Class
#'
#' @field alias 
#' @field entryType 
#' @field algorithm 
#' @field format 
#' @field chain 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
KeystoreItems <- R6::R6Class(
  'KeystoreItems',
  public = list(
    `alias` = NULL,
    `entryType` = NULL,
    `algorithm` = NULL,
    `format` = NULL,
    `chain` = NULL,
    initialize = function(`alias`, `entryType`, `algorithm`, `format`, `chain`){
      if (!missing(`alias`)) {
        stopifnot(is.character(`alias`), length(`alias`) == 1)
        self$`alias` <- `alias`
      }
      if (!missing(`entryType`)) {
        stopifnot(is.character(`entryType`), length(`entryType`) == 1)
        self$`entryType` <- `entryType`
      }
      if (!missing(`algorithm`)) {
        stopifnot(is.character(`algorithm`), length(`algorithm`) == 1)
        self$`algorithm` <- `algorithm`
      }
      if (!missing(`format`)) {
        stopifnot(is.character(`format`), length(`format`) == 1)
        self$`format` <- `format`
      }
      if (!missing(`chain`)) {
        stopifnot(is.list(`chain`), length(`chain`) != 0)
        lapply(`chain`, function(x) stopifnot(R6::is.R6(x)))
        self$`chain` <- `chain`
      }
    },
    toJSON = function() {
      KeystoreItemsObject <- list()
      if (!is.null(self$`alias`)) {
        KeystoreItemsObject[['alias']] <- self$`alias`
      }
      if (!is.null(self$`entryType`)) {
        KeystoreItemsObject[['entryType']] <- self$`entryType`
      }
      if (!is.null(self$`algorithm`)) {
        KeystoreItemsObject[['algorithm']] <- self$`algorithm`
      }
      if (!is.null(self$`format`)) {
        KeystoreItemsObject[['format']] <- self$`format`
      }
      if (!is.null(self$`chain`)) {
        KeystoreItemsObject[['chain']] <- lapply(self$`chain`, function(x) x$toJSON())
      }

      KeystoreItemsObject
    },
    fromJSON = function(KeystoreItemsJson) {
      KeystoreItemsObject <- jsonlite::fromJSON(KeystoreItemsJson)
      if (!is.null(KeystoreItemsObject$`alias`)) {
        self$`alias` <- KeystoreItemsObject$`alias`
      }
      if (!is.null(KeystoreItemsObject$`entryType`)) {
        self$`entryType` <- KeystoreItemsObject$`entryType`
      }
      if (!is.null(KeystoreItemsObject$`algorithm`)) {
        self$`algorithm` <- KeystoreItemsObject$`algorithm`
      }
      if (!is.null(KeystoreItemsObject$`format`)) {
        self$`format` <- KeystoreItemsObject$`format`
      }
      if (!is.null(KeystoreItemsObject$`chain`)) {
        self$`chain` <- lapply(KeystoreItemsObject$`chain`, function(x) {
          chainObject <- KeystoreChainItems$new()
          chainObject$fromJSON(jsonlite::toJSON(x, auto_unbox = TRUE))
          chainObject
        })
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "alias": %s,
           "entryType": %s,
           "algorithm": %s,
           "format": %s,
           "chain": [%s]
        }',
        self$`alias`,
        self$`entryType`,
        self$`algorithm`,
        self$`format`,
        lapply(self$`chain`, function(x) paste(x$toJSON(), sep=","))
      )
    },
    fromJSONString = function(KeystoreItemsJson) {
      KeystoreItemsObject <- jsonlite::fromJSON(KeystoreItemsJson)
      self$`alias` <- KeystoreItemsObject$`alias`
      self$`entryType` <- KeystoreItemsObject$`entryType`
      self$`algorithm` <- KeystoreItemsObject$`algorithm`
      self$`format` <- KeystoreItemsObject$`format`
      self$`chain` <- lapply(KeystoreItemsObject$`chain`, function(x) KeystoreChainItems$new()$fromJSON(jsonlite::toJSON(x, auto_unbox = TRUE)))
    }
  )
)