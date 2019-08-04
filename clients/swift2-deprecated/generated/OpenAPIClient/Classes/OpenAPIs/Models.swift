// Models.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation

protocol JSONEncodable {
    func encodeToJSON() -> AnyObject
}

public enum ErrorResponse : ErrorType {
    case Error(Int, NSData?, ErrorType)
}

public class Response<T> {
    public let statusCode: Int
    public let header: [String: String]
    public let body: T?

    public init(statusCode: Int, header: [String: String], body: T?) {
        self.statusCode = statusCode
        self.header = header
        self.body = body
    }

    public convenience init(response: NSHTTPURLResponse, body: T?) {
        let rawHeader = response.allHeaderFields
        var header = [String:String]()
        for case let (key, value) as (String, String) in rawHeader {
            header[key] = value
        }
        self.init(statusCode: response.statusCode, header: header, body: body)
    }
}

private var once = dispatch_once_t()
class Decoders {
    static private var decoders = Dictionary<String, ((AnyObject) -> AnyObject)>()

    static func addDecoder<T>(clazz clazz: T.Type, decoder: ((AnyObject) -> T)) {
        let key = "\(T.self)"
        decoders[key] = { decoder($0) as! AnyObject }
    }

    static func decode<T>(clazz clazz: [T].Type, source: AnyObject) -> [T] {
        let array = source as! [AnyObject]
        return array.map { Decoders.decode(clazz: T.self, source: $0) }
    }

    static func decode<T, Key: Hashable>(clazz clazz: [Key:T].Type, source: AnyObject) -> [Key:T] {
        let sourceDictionary = source as! [Key: AnyObject]
        var dictionary = [Key:T]()
        for (key, value) in sourceDictionary {
            dictionary[key] = Decoders.decode(clazz: T.self, source: value)
        }
        return dictionary
    }

    static func decode<T>(clazz clazz: T.Type, source: AnyObject) -> T {
        initialize()
        if T.self is Int32.Type && source is NSNumber {
            return source.intValue as! T;
        }
        if T.self is Int64.Type && source is NSNumber {
            return source.longLongValue as! T;
        }
        if T.self is NSUUID.Type && source is String {
            return NSUUID(UUIDString: source as! String) as! T
        }
        if source is T {
            return source as! T
        }
        if T.self is NSData.Type && source is String {
            return NSData(base64EncodedString: source as! String, options: NSDataBase64DecodingOptions()) as! T
        }

        let key = "\(T.self)"
        if let decoder = decoders[key] {
           return decoder(source) as! T
        } else {
            fatalError("Source \(source) is not convertible to type \(clazz): Maybe OpenAPI spec file is insufficient")
        }
    }

    static func decodeOptional<T>(clazz clazz: T.Type, source: AnyObject?) -> T? {
        if source is NSNull {
            return nil
        }
        return source.map { (source: AnyObject) -> T in
            Decoders.decode(clazz: clazz, source: source)
        }
    }

    static func decodeOptional<T>(clazz clazz: [T].Type, source: AnyObject?) -> [T]? {
        if source is NSNull {
            return nil
        }
        return source.map { (someSource: AnyObject) -> [T] in
            Decoders.decode(clazz: clazz, source: someSource)
        }
    }

    static func decodeOptional<T, Key: Hashable>(clazz clazz: [Key:T].Type, source: AnyObject?) -> [Key:T]? {
        if source is NSNull {
            return nil
        }
        return source.map { (someSource: AnyObject) -> [Key:T] in
            Decoders.decode(clazz: clazz, source: someSource)
        }
    }

    static private func initialize() {
        dispatch_once(&once) {
            let formatters = [
                "yyyy-MM-dd",
                "yyyy-MM-dd'T'HH:mm:ssZZZZZ",
                "yyyy-MM-dd'T'HH:mm:ss.SSSZZZZZ",
                "yyyy-MM-dd'T'HH:mm:ss'Z'",
                "yyyy-MM-dd'T'HH:mm:ss.SSS"
            ].map { (format: String) -> NSDateFormatter in
                let formatter = NSDateFormatter()
                formatter.locale = NSLocale(localeIdentifier:"en_US_POSIX")
                formatter.dateFormat = format
                return formatter
            }
            // Decoder for NSDate
            Decoders.addDecoder(clazz: NSDate.self) { (source: AnyObject) -> NSDate in
               if let sourceString = source as? String {
                    for formatter in formatters {
                        if let date = formatter.dateFromString(sourceString) {
                            return date
                        }
                    }

                }
                if let sourceInt = source as? Int {
                    // treat as a java date
                    return NSDate(timeIntervalSince1970: Double(sourceInt / 1000) )
                }
                fatalError("formatter failed to parse \(source)")
            }

            // Decoder for ISOFullDate
            Decoders.addDecoder(clazz: ISOFullDate.self, decoder: { (source: AnyObject) -> ISOFullDate in
                if let string = source as? String,
                   let isoDate = ISOFullDate.from(string: string) {
                    return isoDate
                }
                fatalError("formatter failed to parse \(source)")
            }) 

            // Decoder for [InstallStatus]
            Decoders.addDecoder(clazz: [InstallStatus].self) { (source: AnyObject) -> [InstallStatus] in
                return Decoders.decode(clazz: [InstallStatus].self, source: source)
            }
            // Decoder for InstallStatus
            Decoders.addDecoder(clazz: InstallStatus.self) { (source: AnyObject) -> InstallStatus in
                let sourceDictionary = source as! [NSObject:AnyObject]
                let instance = InstallStatus()
                instance.status = Decoders.decodeOptional(clazz: InstallStatusStatus.self, source: sourceDictionary["status"])
                return instance
            }


            // Decoder for [InstallStatusStatus]
            Decoders.addDecoder(clazz: [InstallStatusStatus].self) { (source: AnyObject) -> [InstallStatusStatus] in
                return Decoders.decode(clazz: [InstallStatusStatus].self, source: source)
            }
            // Decoder for InstallStatusStatus
            Decoders.addDecoder(clazz: InstallStatusStatus.self) { (source: AnyObject) -> InstallStatusStatus in
                let sourceDictionary = source as! [NSObject:AnyObject]
                let instance = InstallStatusStatus()
                instance.finished = Decoders.decodeOptional(clazz: Bool.self, source: sourceDictionary["finished"])
                instance.itemCount = Decoders.decodeOptional(clazz: Int32.self, source: sourceDictionary["itemCount"])
                return instance
            }


            // Decoder for [KeystoreChainItems]
            Decoders.addDecoder(clazz: [KeystoreChainItems].self) { (source: AnyObject) -> [KeystoreChainItems] in
                return Decoders.decode(clazz: [KeystoreChainItems].self, source: source)
            }
            // Decoder for KeystoreChainItems
            Decoders.addDecoder(clazz: KeystoreChainItems.self) { (source: AnyObject) -> KeystoreChainItems in
                let sourceDictionary = source as! [NSObject:AnyObject]
                let instance = KeystoreChainItems()
                instance.subject = Decoders.decodeOptional(clazz: String.self, source: sourceDictionary["subject"])
                instance.issuer = Decoders.decodeOptional(clazz: String.self, source: sourceDictionary["issuer"])
                instance.notBefore = Decoders.decodeOptional(clazz: String.self, source: sourceDictionary["notBefore"])
                instance.notAfter = Decoders.decodeOptional(clazz: String.self, source: sourceDictionary["notAfter"])
                instance.serialNumber = Decoders.decodeOptional(clazz: Int32.self, source: sourceDictionary["serialNumber"])
                return instance
            }


            // Decoder for [KeystoreInfo]
            Decoders.addDecoder(clazz: [KeystoreInfo].self) { (source: AnyObject) -> [KeystoreInfo] in
                return Decoders.decode(clazz: [KeystoreInfo].self, source: source)
            }
            // Decoder for KeystoreInfo
            Decoders.addDecoder(clazz: KeystoreInfo.self) { (source: AnyObject) -> KeystoreInfo in
                let sourceDictionary = source as! [NSObject:AnyObject]
                let instance = KeystoreInfo()
                instance.aliases = Decoders.decodeOptional(clazz: Array.self, source: sourceDictionary["aliases"])
                instance.exists = Decoders.decodeOptional(clazz: Bool.self, source: sourceDictionary["exists"])
                return instance
            }


            // Decoder for [KeystoreItems]
            Decoders.addDecoder(clazz: [KeystoreItems].self) { (source: AnyObject) -> [KeystoreItems] in
                return Decoders.decode(clazz: [KeystoreItems].self, source: source)
            }
            // Decoder for KeystoreItems
            Decoders.addDecoder(clazz: KeystoreItems.self) { (source: AnyObject) -> KeystoreItems in
                let sourceDictionary = source as! [NSObject:AnyObject]
                let instance = KeystoreItems()
                instance.alias = Decoders.decodeOptional(clazz: String.self, source: sourceDictionary["alias"])
                instance.entryType = Decoders.decodeOptional(clazz: String.self, source: sourceDictionary["entryType"])
                instance.algorithm = Decoders.decodeOptional(clazz: String.self, source: sourceDictionary["algorithm"])
                instance.format = Decoders.decodeOptional(clazz: String.self, source: sourceDictionary["format"])
                instance.chain = Decoders.decodeOptional(clazz: Array.self, source: sourceDictionary["chain"])
                return instance
            }


            // Decoder for [SamlConfigurationInfo]
            Decoders.addDecoder(clazz: [SamlConfigurationInfo].self) { (source: AnyObject) -> [SamlConfigurationInfo] in
                return Decoders.decode(clazz: [SamlConfigurationInfo].self, source: source)
            }
            // Decoder for SamlConfigurationInfo
            Decoders.addDecoder(clazz: SamlConfigurationInfo.self) { (source: AnyObject) -> SamlConfigurationInfo in
                let sourceDictionary = source as! [NSObject:AnyObject]
                let instance = SamlConfigurationInfo()
                instance.pid = Decoders.decodeOptional(clazz: String.self, source: sourceDictionary["pid"])
                instance.title = Decoders.decodeOptional(clazz: String.self, source: sourceDictionary["title"])
                instance.description = Decoders.decodeOptional(clazz: String.self, source: sourceDictionary["description"])
                instance.bundleLocation = Decoders.decodeOptional(clazz: String.self, source: sourceDictionary["bundle_location"])
                instance.serviceLocation = Decoders.decodeOptional(clazz: String.self, source: sourceDictionary["service_location"])
                instance.properties = Decoders.decodeOptional(clazz: SamlConfigurationProperties.self, source: sourceDictionary["properties"])
                return instance
            }


            // Decoder for [SamlConfigurationProperties]
            Decoders.addDecoder(clazz: [SamlConfigurationProperties].self) { (source: AnyObject) -> [SamlConfigurationProperties] in
                return Decoders.decode(clazz: [SamlConfigurationProperties].self, source: source)
            }
            // Decoder for SamlConfigurationProperties
            Decoders.addDecoder(clazz: SamlConfigurationProperties.self) { (source: AnyObject) -> SamlConfigurationProperties in
                let sourceDictionary = source as! [NSObject:AnyObject]
                let instance = SamlConfigurationProperties()
                instance.path = Decoders.decodeOptional(clazz: SamlConfigurationPropertyItemsArray.self, source: sourceDictionary["path"])
                instance.serviceRanking = Decoders.decodeOptional(clazz: SamlConfigurationPropertyItemsLong.self, source: sourceDictionary["service.ranking"])
                instance.idpUrl = Decoders.decodeOptional(clazz: SamlConfigurationPropertyItemsString.self, source: sourceDictionary["idpUrl"])
                instance.idpCertAlias = Decoders.decodeOptional(clazz: SamlConfigurationPropertyItemsString.self, source: sourceDictionary["idpCertAlias"])
                instance.idpHttpRedirect = Decoders.decodeOptional(clazz: SamlConfigurationPropertyItemsBoolean.self, source: sourceDictionary["idpHttpRedirect"])
                instance.serviceProviderEntityId = Decoders.decodeOptional(clazz: SamlConfigurationPropertyItemsString.self, source: sourceDictionary["serviceProviderEntityId"])
                instance.assertionConsumerServiceURL = Decoders.decodeOptional(clazz: SamlConfigurationPropertyItemsString.self, source: sourceDictionary["assertionConsumerServiceURL"])
                instance.spPrivateKeyAlias = Decoders.decodeOptional(clazz: SamlConfigurationPropertyItemsString.self, source: sourceDictionary["spPrivateKeyAlias"])
                instance.keyStorePassword = Decoders.decodeOptional(clazz: SamlConfigurationPropertyItemsString.self, source: sourceDictionary["keyStorePassword"])
                instance.defaultRedirectUrl = Decoders.decodeOptional(clazz: SamlConfigurationPropertyItemsString.self, source: sourceDictionary["defaultRedirectUrl"])
                instance.userIDAttribute = Decoders.decodeOptional(clazz: SamlConfigurationPropertyItemsString.self, source: sourceDictionary["userIDAttribute"])
                instance.useEncryption = Decoders.decodeOptional(clazz: SamlConfigurationPropertyItemsBoolean.self, source: sourceDictionary["useEncryption"])
                instance.createUser = Decoders.decodeOptional(clazz: SamlConfigurationPropertyItemsBoolean.self, source: sourceDictionary["createUser"])
                instance.addGroupMemberships = Decoders.decodeOptional(clazz: SamlConfigurationPropertyItemsBoolean.self, source: sourceDictionary["addGroupMemberships"])
                instance.groupMembershipAttribute = Decoders.decodeOptional(clazz: SamlConfigurationPropertyItemsString.self, source: sourceDictionary["groupMembershipAttribute"])
                instance.defaultGroups = Decoders.decodeOptional(clazz: SamlConfigurationPropertyItemsArray.self, source: sourceDictionary["defaultGroups"])
                instance.nameIdFormat = Decoders.decodeOptional(clazz: SamlConfigurationPropertyItemsString.self, source: sourceDictionary["nameIdFormat"])
                instance.synchronizeAttributes = Decoders.decodeOptional(clazz: SamlConfigurationPropertyItemsArray.self, source: sourceDictionary["synchronizeAttributes"])
                instance.handleLogout = Decoders.decodeOptional(clazz: SamlConfigurationPropertyItemsBoolean.self, source: sourceDictionary["handleLogout"])
                instance.logoutUrl = Decoders.decodeOptional(clazz: SamlConfigurationPropertyItemsString.self, source: sourceDictionary["logoutUrl"])
                instance.clockTolerance = Decoders.decodeOptional(clazz: SamlConfigurationPropertyItemsLong.self, source: sourceDictionary["clockTolerance"])
                instance.digestMethod = Decoders.decodeOptional(clazz: SamlConfigurationPropertyItemsString.self, source: sourceDictionary["digestMethod"])
                instance.signatureMethod = Decoders.decodeOptional(clazz: SamlConfigurationPropertyItemsString.self, source: sourceDictionary["signatureMethod"])
                instance.userIntermediatePath = Decoders.decodeOptional(clazz: SamlConfigurationPropertyItemsString.self, source: sourceDictionary["userIntermediatePath"])
                return instance
            }


            // Decoder for [SamlConfigurationPropertyItemsArray]
            Decoders.addDecoder(clazz: [SamlConfigurationPropertyItemsArray].self) { (source: AnyObject) -> [SamlConfigurationPropertyItemsArray] in
                return Decoders.decode(clazz: [SamlConfigurationPropertyItemsArray].self, source: source)
            }
            // Decoder for SamlConfigurationPropertyItemsArray
            Decoders.addDecoder(clazz: SamlConfigurationPropertyItemsArray.self) { (source: AnyObject) -> SamlConfigurationPropertyItemsArray in
                let sourceDictionary = source as! [NSObject:AnyObject]
                let instance = SamlConfigurationPropertyItemsArray()
                instance.name = Decoders.decodeOptional(clazz: String.self, source: sourceDictionary["name"])
                instance._optional = Decoders.decodeOptional(clazz: Bool.self, source: sourceDictionary["optional"])
                instance.isSet = Decoders.decodeOptional(clazz: Bool.self, source: sourceDictionary["is_set"])
                instance.type = Decoders.decodeOptional(clazz: Int32.self, source: sourceDictionary["type"])
                instance.values = Decoders.decodeOptional(clazz: Array.self, source: sourceDictionary["values"])
                instance.description = Decoders.decodeOptional(clazz: String.self, source: sourceDictionary["description"])
                return instance
            }


            // Decoder for [SamlConfigurationPropertyItemsBoolean]
            Decoders.addDecoder(clazz: [SamlConfigurationPropertyItemsBoolean].self) { (source: AnyObject) -> [SamlConfigurationPropertyItemsBoolean] in
                return Decoders.decode(clazz: [SamlConfigurationPropertyItemsBoolean].self, source: source)
            }
            // Decoder for SamlConfigurationPropertyItemsBoolean
            Decoders.addDecoder(clazz: SamlConfigurationPropertyItemsBoolean.self) { (source: AnyObject) -> SamlConfigurationPropertyItemsBoolean in
                let sourceDictionary = source as! [NSObject:AnyObject]
                let instance = SamlConfigurationPropertyItemsBoolean()
                instance.name = Decoders.decodeOptional(clazz: String.self, source: sourceDictionary["name"])
                instance._optional = Decoders.decodeOptional(clazz: Bool.self, source: sourceDictionary["optional"])
                instance.isSet = Decoders.decodeOptional(clazz: Bool.self, source: sourceDictionary["is_set"])
                instance.type = Decoders.decodeOptional(clazz: Int32.self, source: sourceDictionary["type"])
                instance.value = Decoders.decodeOptional(clazz: Bool.self, source: sourceDictionary["value"])
                instance.description = Decoders.decodeOptional(clazz: String.self, source: sourceDictionary["description"])
                return instance
            }


            // Decoder for [SamlConfigurationPropertyItemsLong]
            Decoders.addDecoder(clazz: [SamlConfigurationPropertyItemsLong].self) { (source: AnyObject) -> [SamlConfigurationPropertyItemsLong] in
                return Decoders.decode(clazz: [SamlConfigurationPropertyItemsLong].self, source: source)
            }
            // Decoder for SamlConfigurationPropertyItemsLong
            Decoders.addDecoder(clazz: SamlConfigurationPropertyItemsLong.self) { (source: AnyObject) -> SamlConfigurationPropertyItemsLong in
                let sourceDictionary = source as! [NSObject:AnyObject]
                let instance = SamlConfigurationPropertyItemsLong()
                instance.name = Decoders.decodeOptional(clazz: String.self, source: sourceDictionary["name"])
                instance._optional = Decoders.decodeOptional(clazz: Bool.self, source: sourceDictionary["optional"])
                instance.isSet = Decoders.decodeOptional(clazz: Bool.self, source: sourceDictionary["is_set"])
                instance.type = Decoders.decodeOptional(clazz: Int32.self, source: sourceDictionary["type"])
                instance.value = Decoders.decodeOptional(clazz: Int32.self, source: sourceDictionary["value"])
                instance.description = Decoders.decodeOptional(clazz: String.self, source: sourceDictionary["description"])
                return instance
            }


            // Decoder for [SamlConfigurationPropertyItemsString]
            Decoders.addDecoder(clazz: [SamlConfigurationPropertyItemsString].self) { (source: AnyObject) -> [SamlConfigurationPropertyItemsString] in
                return Decoders.decode(clazz: [SamlConfigurationPropertyItemsString].self, source: source)
            }
            // Decoder for SamlConfigurationPropertyItemsString
            Decoders.addDecoder(clazz: SamlConfigurationPropertyItemsString.self) { (source: AnyObject) -> SamlConfigurationPropertyItemsString in
                let sourceDictionary = source as! [NSObject:AnyObject]
                let instance = SamlConfigurationPropertyItemsString()
                instance.name = Decoders.decodeOptional(clazz: String.self, source: sourceDictionary["name"])
                instance._optional = Decoders.decodeOptional(clazz: Bool.self, source: sourceDictionary["optional"])
                instance.isSet = Decoders.decodeOptional(clazz: Bool.self, source: sourceDictionary["is_set"])
                instance.type = Decoders.decodeOptional(clazz: Int32.self, source: sourceDictionary["type"])
                instance.value = Decoders.decodeOptional(clazz: String.self, source: sourceDictionary["value"])
                instance.description = Decoders.decodeOptional(clazz: String.self, source: sourceDictionary["description"])
                return instance
            }


            // Decoder for [TruststoreInfo]
            Decoders.addDecoder(clazz: [TruststoreInfo].self) { (source: AnyObject) -> [TruststoreInfo] in
                return Decoders.decode(clazz: [TruststoreInfo].self, source: source)
            }
            // Decoder for TruststoreInfo
            Decoders.addDecoder(clazz: TruststoreInfo.self) { (source: AnyObject) -> TruststoreInfo in
                let sourceDictionary = source as! [NSObject:AnyObject]
                let instance = TruststoreInfo()
                instance.aliases = Decoders.decodeOptional(clazz: Array.self, source: sourceDictionary["aliases"])
                instance.exists = Decoders.decodeOptional(clazz: Bool.self, source: sourceDictionary["exists"])
                return instance
            }


            // Decoder for [TruststoreItems]
            Decoders.addDecoder(clazz: [TruststoreItems].self) { (source: AnyObject) -> [TruststoreItems] in
                return Decoders.decode(clazz: [TruststoreItems].self, source: source)
            }
            // Decoder for TruststoreItems
            Decoders.addDecoder(clazz: TruststoreItems.self) { (source: AnyObject) -> TruststoreItems in
                let sourceDictionary = source as! [NSObject:AnyObject]
                let instance = TruststoreItems()
                instance.alias = Decoders.decodeOptional(clazz: String.self, source: sourceDictionary["alias"])
                instance.entryType = Decoders.decodeOptional(clazz: String.self, source: sourceDictionary["entryType"])
                instance.subject = Decoders.decodeOptional(clazz: String.self, source: sourceDictionary["subject"])
                instance.issuer = Decoders.decodeOptional(clazz: String.self, source: sourceDictionary["issuer"])
                instance.notBefore = Decoders.decodeOptional(clazz: String.self, source: sourceDictionary["notBefore"])
                instance.notAfter = Decoders.decodeOptional(clazz: String.self, source: sourceDictionary["notAfter"])
                instance.serialNumber = Decoders.decodeOptional(clazz: Int32.self, source: sourceDictionary["serialNumber"])
                return instance
            }
        }
    }
}
