note
 description:"[
		Adobe Experience Manager (AEM) API
 		Swagger AEM is an OpenAPI specification for Adobe Experience Manager (AEM) API
  		OpenAPI spec version: 3.2.0-pre.0
 	    Contact: opensource@shinesolutions.com

  	NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

 		 Do not edit the class manually.
 	]"
	date: "$Date$"
	revision: "$Revision$"
	EIS:"Eiffel openapi generator", "src=https://openapi-generator.tech", "protocol=uri"
class INSTALL_STATUS 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    status: detachable INSTALL_STATUS_STATUS 
      

feature -- Change Element  
 
    set_status (a_name: like status)
        -- Set 'status' with 'a_name'.
      do
        status := a_name
      ensure
        status_set: status = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass INSTALL_STATUS%N")
        if attached status as l_status then
          Result.append ("%Nstatus:")
          Result.append (l_status.out)
          Result.append ("%N")    
        end  
      end
end

