# Adobe Experience Manager (AEM) API
#
# Swagger AEM is an OpenAPI specification for Adobe Experience Manager (AEM) API
#
# OpenAPI spec version: 3.2.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' SamlConfigurationPropertyItemsArray Class
#'
#' @field name 
#' @field optional 
#' @field is_set 
#' @field type 
#' @field values 
#' @field description 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
SamlConfigurationPropertyItemsArray <- R6::R6Class(
  'SamlConfigurationPropertyItemsArray',
  public = list(
    `name` = NULL,
    `optional` = NULL,
    `is_set` = NULL,
    `type` = NULL,
    `values` = NULL,
    `description` = NULL,
    initialize = function(`name`, `optional`, `is_set`, `type`, `values`, `description`){
      if (!missing(`name`)) {
        stopifnot(is.character(`name`), length(`name`) == 1)
        self$`name` <- `name`
      }
      if (!missing(`optional`)) {
        self$`optional` <- `optional`
      }
      if (!missing(`is_set`)) {
        self$`is_set` <- `is_set`
      }
      if (!missing(`type`)) {
        stopifnot(is.numeric(`type`), length(`type`) == 1)
        self$`type` <- `type`
      }
      if (!missing(`values`)) {
        stopifnot(is.list(`values`), length(`values`) != 0)
        lapply(`values`, function(x) stopifnot(is.character(x)))
        self$`values` <- `values`
      }
      if (!missing(`description`)) {
        stopifnot(is.character(`description`), length(`description`) == 1)
        self$`description` <- `description`
      }
    },
    toJSON = function() {
      SamlConfigurationPropertyItemsArrayObject <- list()
      if (!is.null(self$`name`)) {
        SamlConfigurationPropertyItemsArrayObject[['name']] <- self$`name`
      }
      if (!is.null(self$`optional`)) {
        SamlConfigurationPropertyItemsArrayObject[['optional']] <- self$`optional`
      }
      if (!is.null(self$`is_set`)) {
        SamlConfigurationPropertyItemsArrayObject[['is_set']] <- self$`is_set`
      }
      if (!is.null(self$`type`)) {
        SamlConfigurationPropertyItemsArrayObject[['type']] <- self$`type`
      }
      if (!is.null(self$`values`)) {
        SamlConfigurationPropertyItemsArrayObject[['values']] <- self$`values`
      }
      if (!is.null(self$`description`)) {
        SamlConfigurationPropertyItemsArrayObject[['description']] <- self$`description`
      }

      SamlConfigurationPropertyItemsArrayObject
    },
    fromJSON = function(SamlConfigurationPropertyItemsArrayJson) {
      SamlConfigurationPropertyItemsArrayObject <- jsonlite::fromJSON(SamlConfigurationPropertyItemsArrayJson)
      if (!is.null(SamlConfigurationPropertyItemsArrayObject$`name`)) {
        self$`name` <- SamlConfigurationPropertyItemsArrayObject$`name`
      }
      if (!is.null(SamlConfigurationPropertyItemsArrayObject$`optional`)) {
        self$`optional` <- SamlConfigurationPropertyItemsArrayObject$`optional`
      }
      if (!is.null(SamlConfigurationPropertyItemsArrayObject$`is_set`)) {
        self$`is_set` <- SamlConfigurationPropertyItemsArrayObject$`is_set`
      }
      if (!is.null(SamlConfigurationPropertyItemsArrayObject$`type`)) {
        self$`type` <- SamlConfigurationPropertyItemsArrayObject$`type`
      }
      if (!is.null(SamlConfigurationPropertyItemsArrayObject$`values`)) {
        self$`values` <- SamlConfigurationPropertyItemsArrayObject$`values`
      }
      if (!is.null(SamlConfigurationPropertyItemsArrayObject$`description`)) {
        self$`description` <- SamlConfigurationPropertyItemsArrayObject$`description`
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "name": %s,
           "optional": %s,
           "is_set": %s,
           "type": %d,
           "values": [%s],
           "description": %s
        }',
        self$`name`,
        self$`optional`,
        self$`is_set`,
        self$`type`,
        lapply(self$`values`, function(x) paste(paste0('"', x, '"'), sep=",")),
        self$`description`
      )
    },
    fromJSONString = function(SamlConfigurationPropertyItemsArrayJson) {
      SamlConfigurationPropertyItemsArrayObject <- jsonlite::fromJSON(SamlConfigurationPropertyItemsArrayJson)
      self$`name` <- SamlConfigurationPropertyItemsArrayObject$`name`
      self$`optional` <- SamlConfigurationPropertyItemsArrayObject$`optional`
      self$`is_set` <- SamlConfigurationPropertyItemsArrayObject$`is_set`
      self$`type` <- SamlConfigurationPropertyItemsArrayObject$`type`
      self$`values` <- SamlConfigurationPropertyItemsArrayObject$`values`
      self$`description` <- SamlConfigurationPropertyItemsArrayObject$`description`
    }
  )
)
