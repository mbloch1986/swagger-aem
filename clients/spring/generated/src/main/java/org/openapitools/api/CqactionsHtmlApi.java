/**
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech) (3.2.1-SNAPSHOT).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */
package org.openapitools.api;

import io.swagger.annotations.*;
import org.springframework.http.HttpStatus;
import org.springframework.http.MediaType;
import org.springframework.http.ResponseEntity;
import org.springframework.validation.annotation.Validated;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestHeader;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestMethod;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RequestPart;
import org.springframework.web.context.request.NativeWebRequest;
import org.springframework.web.multipart.MultipartFile;

import javax.validation.Valid;
import javax.validation.constraints.*;
import java.util.List;
import java.util.Map;
import java.util.Optional;
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.SpringCodegen", date = "2019-08-04T23:44:43.219Z[GMT]")

@Validated
@Api(value = ".cqactions.html", description = "the .cqactions.html API")
public interface CqactionsHtmlApi {

    default Optional<NativeWebRequest> getRequest() {
        return Optional.empty();
    }

    @ApiOperation(value = "", nickname = "postCqActions", notes = "", authorizations = {
        @Authorization(value = "aemAuth")
    }, tags={ "cq", })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Default response") })
    @RequestMapping(value = "/.cqactions.html",
        method = RequestMethod.POST)
    default ResponseEntity<Void> postCqActions(@NotNull @ApiParam(value = "", required = true) @Valid @RequestParam(value = "authorizableId", required = true) String authorizableId,@NotNull @ApiParam(value = "", required = true) @Valid @RequestParam(value = "changelog", required = true) String changelog) {
        return new ResponseEntity<>(HttpStatus.NOT_IMPLEMENTED);

    }

}
