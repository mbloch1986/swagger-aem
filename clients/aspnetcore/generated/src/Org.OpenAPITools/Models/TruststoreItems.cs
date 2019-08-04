/*
 * Adobe Experience Manager (AEM) API
 *
 * Swagger AEM is an OpenAPI specification for Adobe Experience Manager (AEM) API
 *
 * OpenAPI spec version: 3.2.0-pre.0
 * Contact: opensource@shinesolutions.com
 * Generated by: https://openapi-generator.tech
 */

using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace Org.OpenAPITools.Models
{ 
    /// <summary>
    /// 
    /// </summary>
    [DataContract]
    public partial class TruststoreItems : IEquatable<TruststoreItems>
    { 
        /// <summary>
        /// Truststore alias name
        /// </summary>
        /// <value>Truststore alias name</value>
        [DataMember(Name="alias")]
        public string Alias { get; set; }

        /// <summary>
        /// Gets or Sets EntryType
        /// </summary>
        [DataMember(Name="entryType")]
        public string EntryType { get; set; }

        /// <summary>
        /// e.g. \&quot;CN&#x3D;localhost\&quot;
        /// </summary>
        /// <value>e.g. \&quot;CN&#x3D;localhost\&quot;</value>
        [DataMember(Name="subject")]
        public string Subject { get; set; }

        /// <summary>
        /// e.g. \&quot;CN&#x3D;Admin\&quot;
        /// </summary>
        /// <value>e.g. \&quot;CN&#x3D;Admin\&quot;</value>
        [DataMember(Name="issuer")]
        public string Issuer { get; set; }

        /// <summary>
        /// e.g. \&quot;Sun Jul 01 12:00:00 AEST 2018\&quot;
        /// </summary>
        /// <value>e.g. \&quot;Sun Jul 01 12:00:00 AEST 2018\&quot;</value>
        [DataMember(Name="notBefore")]
        public string NotBefore { get; set; }

        /// <summary>
        /// e.g. \&quot;Sun Jun 30 23:59:50 AEST 2019\&quot;
        /// </summary>
        /// <value>e.g. \&quot;Sun Jun 30 23:59:50 AEST 2019\&quot;</value>
        [DataMember(Name="notAfter")]
        public string NotAfter { get; set; }

        /// <summary>
        /// 18165099476682912368
        /// </summary>
        /// <value>18165099476682912368</value>
        [DataMember(Name="serialNumber")]
        public int? SerialNumber { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class TruststoreItems {\n");
            sb.Append("  Alias: ").Append(Alias).Append("\n");
            sb.Append("  EntryType: ").Append(EntryType).Append("\n");
            sb.Append("  Subject: ").Append(Subject).Append("\n");
            sb.Append("  Issuer: ").Append(Issuer).Append("\n");
            sb.Append("  NotBefore: ").Append(NotBefore).Append("\n");
            sb.Append("  NotAfter: ").Append(NotAfter).Append("\n");
            sb.Append("  SerialNumber: ").Append(SerialNumber).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }

        /// <summary>
        /// Returns the JSON string presentation of the object
        /// </summary>
        /// <returns>JSON string presentation of the object</returns>
        public string ToJson()
        {
            return JsonConvert.SerializeObject(this, Formatting.Indented);
        }

        /// <summary>
        /// Returns true if objects are equal
        /// </summary>
        /// <param name="obj">Object to be compared</param>
        /// <returns>Boolean</returns>
        public override bool Equals(object obj)
        {
            if (obj is null) return false;
            if (ReferenceEquals(this, obj)) return true;
            return obj.GetType() == GetType() && Equals((TruststoreItems)obj);
        }

        /// <summary>
        /// Returns true if TruststoreItems instances are equal
        /// </summary>
        /// <param name="other">Instance of TruststoreItems to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(TruststoreItems other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    Alias == other.Alias ||
                    Alias != null &&
                    Alias.Equals(other.Alias)
                ) && 
                (
                    EntryType == other.EntryType ||
                    EntryType != null &&
                    EntryType.Equals(other.EntryType)
                ) && 
                (
                    Subject == other.Subject ||
                    Subject != null &&
                    Subject.Equals(other.Subject)
                ) && 
                (
                    Issuer == other.Issuer ||
                    Issuer != null &&
                    Issuer.Equals(other.Issuer)
                ) && 
                (
                    NotBefore == other.NotBefore ||
                    NotBefore != null &&
                    NotBefore.Equals(other.NotBefore)
                ) && 
                (
                    NotAfter == other.NotAfter ||
                    NotAfter != null &&
                    NotAfter.Equals(other.NotAfter)
                ) && 
                (
                    SerialNumber == other.SerialNumber ||
                    SerialNumber != null &&
                    SerialNumber.Equals(other.SerialNumber)
                );
        }

        /// <summary>
        /// Gets the hash code
        /// </summary>
        /// <returns>Hash code</returns>
        public override int GetHashCode()
        {
            unchecked // Overflow is fine, just wrap
            {
                var hashCode = 41;
                // Suitable nullity checks etc, of course :)
                    if (Alias != null)
                    hashCode = hashCode * 59 + Alias.GetHashCode();
                    if (EntryType != null)
                    hashCode = hashCode * 59 + EntryType.GetHashCode();
                    if (Subject != null)
                    hashCode = hashCode * 59 + Subject.GetHashCode();
                    if (Issuer != null)
                    hashCode = hashCode * 59 + Issuer.GetHashCode();
                    if (NotBefore != null)
                    hashCode = hashCode * 59 + NotBefore.GetHashCode();
                    if (NotAfter != null)
                    hashCode = hashCode * 59 + NotAfter.GetHashCode();
                    if (SerialNumber != null)
                    hashCode = hashCode * 59 + SerialNumber.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(TruststoreItems left, TruststoreItems right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(TruststoreItems left, TruststoreItems right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
