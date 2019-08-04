{-
   Adobe Experience Manager (AEM) API
   Swagger AEM is an OpenAPI specification for Adobe Experience Manager (AEM) API

   OpenAPI spec version: 3.2.0-pre.0
   Contact: opensource@shinesolutions.com

   NOTE: This file is auto generated by the openapi-generator.
   https://github.com/openapitools/openapi-generator.git
   Do not edit this file manually.
-}


module Data.KeystoreItems exposing (KeystoreItems, keystoreItemsDecoder, keystoreItemsEncoder)

import Data.KeystoreChainItems exposing (KeystoreChainItems, keystoreChainItemsDecoder, keystoreChainItemsEncoder)
import Json.Decode as Decode exposing (Decoder)
import Json.Decode.Pipeline exposing (decode, optional, required)
import Json.Encode as Encode
import Maybe exposing (map, withDefault)


type alias KeystoreItems =
    { alias : Maybe String
    , entryType : Maybe String
    , algorithm : Maybe String
    , format : Maybe String
    , chain : Maybe (List KeystoreChainItems)
    }


keystoreItemsDecoder : Decoder KeystoreItems
keystoreItemsDecoder =
    decode KeystoreItems
        |> optional "alias" (Decode.nullable Decode.string) Nothing
        |> optional "entryType" (Decode.nullable Decode.string) Nothing
        |> optional "algorithm" (Decode.nullable Decode.string) Nothing
        |> optional "format" (Decode.nullable Decode.string) Nothing
        |> optional "chain" (Decode.nullable (Decode.list keystoreChainItemsDecoder)) Nothing



keystoreItemsEncoder : KeystoreItems -> Encode.Value
keystoreItemsEncoder model =
    Encode.object
        [ ( "alias", withDefault Encode.null (map Encode.string model.alias) )
        , ( "entryType", withDefault Encode.null (map Encode.string model.entryType) )
        , ( "algorithm", withDefault Encode.null (map Encode.string model.algorithm) )
        , ( "format", withDefault Encode.null (map Encode.string model.format) )
        , ( "chain", withDefault Encode.null (map (Encode.list << List.map keystoreChainItemsEncoder) model.chain) )
        ]


