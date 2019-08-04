package org.openapitools.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.List;
import org.openapitools.model.KeystoreChainItems;





@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaInflectorServerCodegen", date = "2019-08-04T23:41:21.082Z[GMT]")
public class KeystoreItems   {
  @JsonProperty("alias")
  private String alias = null;

  @JsonProperty("entryType")
  private String entryType = null;

  @JsonProperty("algorithm")
  private String algorithm = null;

  @JsonProperty("format")
  private String format = null;

  @JsonProperty("chain")
  private List<KeystoreChainItems> chain = null;

  /**
   * Keystore alias name
   **/
  public KeystoreItems alias(String alias) {
    this.alias = alias;
    return this;
  }

  
  @ApiModelProperty(value = "Keystore alias name")
  @JsonProperty("alias")
  public String getAlias() {
    return alias;
  }
  public void setAlias(String alias) {
    this.alias = alias;
  }

  /**
   * e.g. \"privateKey\"
   **/
  public KeystoreItems entryType(String entryType) {
    this.entryType = entryType;
    return this;
  }

  
  @ApiModelProperty(value = "e.g. \"privateKey\"")
  @JsonProperty("entryType")
  public String getEntryType() {
    return entryType;
  }
  public void setEntryType(String entryType) {
    this.entryType = entryType;
  }

  /**
   * e.g. \"RSA\"
   **/
  public KeystoreItems algorithm(String algorithm) {
    this.algorithm = algorithm;
    return this;
  }

  
  @ApiModelProperty(value = "e.g. \"RSA\"")
  @JsonProperty("algorithm")
  public String getAlgorithm() {
    return algorithm;
  }
  public void setAlgorithm(String algorithm) {
    this.algorithm = algorithm;
  }

  /**
   * e.g. \"PKCS#8\"
   **/
  public KeystoreItems format(String format) {
    this.format = format;
    return this;
  }

  
  @ApiModelProperty(value = "e.g. \"PKCS#8\"")
  @JsonProperty("format")
  public String getFormat() {
    return format;
  }
  public void setFormat(String format) {
    this.format = format;
  }

  /**
   **/
  public KeystoreItems chain(List<KeystoreChainItems> chain) {
    this.chain = chain;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("chain")
  public List<KeystoreChainItems> getChain() {
    return chain;
  }
  public void setChain(List<KeystoreChainItems> chain) {
    this.chain = chain;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    KeystoreItems keystoreItems = (KeystoreItems) o;
    return Objects.equals(alias, keystoreItems.alias) &&
        Objects.equals(entryType, keystoreItems.entryType) &&
        Objects.equals(algorithm, keystoreItems.algorithm) &&
        Objects.equals(format, keystoreItems.format) &&
        Objects.equals(chain, keystoreItems.chain);
  }

  @Override
  public int hashCode() {
    return Objects.hash(alias, entryType, algorithm, format, chain);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class KeystoreItems {\n");
    
    sb.append("    alias: ").append(toIndentedString(alias)).append("\n");
    sb.append("    entryType: ").append(toIndentedString(entryType)).append("\n");
    sb.append("    algorithm: ").append(toIndentedString(algorithm)).append("\n");
    sb.append("    format: ").append(toIndentedString(format)).append("\n");
    sb.append("    chain: ").append(toIndentedString(chain)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

