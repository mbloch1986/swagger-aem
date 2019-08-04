# This file is auto-generated by OpenAPI Generator (https://openapi-generator.tech)
# Please replace "TEST_VALUE" with a proper value and uncomment the code for testing the function

Describe 'Org.OpenAPITools ConsoleApi' {
    Context 'ConsoleApi' {
        It 'Invoke-ConsoleApiGetAemProductInfo' {
            $ret = Invoke-PetApiGetPetById
            #$ret | Should BeOfType Org.OpenAPITools.Model.ModelNameHere
            #$ret.property | Should Be 0
        }
    }

    Context 'ConsoleApi' {
        It 'Invoke-ConsoleApiGetConfigMgr' {
            $ret = Invoke-PetApiGetPetById
            #$ret | Should BeOfType Org.OpenAPITools.Model.ModelNameHere
            #$ret.property | Should Be 0
        }
    }

    Context 'ConsoleApi' {
        It 'Invoke-ConsoleApiPostBundle' {
            $ret = Invoke-PetApiGetPetById -name "TEST_VALUE" -action "TEST_VALUE"
            #$ret | Should BeOfType Org.OpenAPITools.Model.ModelNameHere
            #$ret.property | Should Be 0
        }
    }

    Context 'ConsoleApi' {
        It 'Invoke-ConsoleApiPostJmxRepository' {
            $ret = Invoke-PetApiGetPetById -action "TEST_VALUE"
            #$ret | Should BeOfType Org.OpenAPITools.Model.ModelNameHere
            #$ret.property | Should Be 0
        }
    }

    Context 'ConsoleApi' {
        It 'Invoke-ConsoleApiPostSamlConfiguration' {
            $ret = Invoke-PetApiGetPetById -post "TEST_VALUE" -apply "TEST_VALUE" -delete "TEST_VALUE" -action "TEST_VALUE" -Dollarlocation "TEST_VALUE" -path "TEST_VALUE" -servicePeriodranking "TEST_VALUE" -idpUrl "TEST_VALUE" -idpCertAlias "TEST_VALUE" -idpHttpRedirect "TEST_VALUE" -serviceProviderEntityId "TEST_VALUE" -assertionConsumerServiceURL "TEST_VALUE" -spPrivateKeyAlias "TEST_VALUE" -keyStorePassword "TEST_VALUE" -defaultRedirectUrl "TEST_VALUE" -userIDAttribute "TEST_VALUE" -useEncryption "TEST_VALUE" -createUser "TEST_VALUE" -addGroupMemberships "TEST_VALUE" -groupMembershipAttribute "TEST_VALUE" -defaultGroups "TEST_VALUE" -nameIdFormat "TEST_VALUE" -synchronizeAttributes "TEST_VALUE" -handleLogout "TEST_VALUE" -logoutUrl "TEST_VALUE" -clockTolerance "TEST_VALUE" -digestMethod "TEST_VALUE" -signatureMethod "TEST_VALUE" -userIntermediatePath "TEST_VALUE" -propertylist "TEST_VALUE"
            #$ret | Should BeOfType Org.OpenAPITools.Model.ModelNameHere
            #$ret.property | Should Be 0
        }
    }

}
