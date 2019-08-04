//
// TruststoreInfo.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class TruststoreInfo: JSONEncodable {

    public var aliases: [TruststoreItems]?
    /** False if truststore don&#39;t exist */
    public var exists: Bool?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["aliases"] = self.aliases?.encodeToJSON()
        nillableDictionary["exists"] = self.exists

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}

