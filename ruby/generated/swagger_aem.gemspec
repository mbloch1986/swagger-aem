# -*- encoding: utf-8 -*-
#
=begin
#Adobe Experience Manager (AEM) API

#Swagger AEM is an OpenAPI specification for Adobe Experience Manager (AEM) API

OpenAPI spec version: 1.2.0
Contact: opensource@shinesolutions.com
Generated by: https://github.com/swagger-api/swagger-codegen.git
Swagger Codegen version: 2.2.3-SNAPSHOT

=end

$:.push File.expand_path("../lib", __FILE__)
require "swagger_aem/version"

Gem::Specification.new do |s|
  s.name        = "swagger_aem"
  s.version     = SwaggerAemClient::VERSION
  s.platform    = Gem::Platform::RUBY
  s.authors     = ["Shine Solutions"]
  s.email       = ["opensource@shinesolutions.com"]
  s.homepage    = "https://github.com/shinesolutions/swagger-aem/tree/master/ruby"
  s.summary     = "Adobe Experience Manager (AEM) API Ruby Gem"
  s.description = "Swagger AEM is an OpenAPI specification for Adobe Experience Manager (AEM) API"
  s.license     = "Apache 2.0"
  s.required_ruby_version = ">= 2.0"

  s.add_runtime_dependency 'typhoeus', '~> 1.0', '>= 1.0.1'
  s.add_runtime_dependency 'json', '~> 1.8', '>= 1.8.3'

  s.add_development_dependency 'rspec', '~> 3.4', '>= 3.4.0'
  s.add_development_dependency 'vcr', '~> 3.0', '>= 3.0.1'
  s.add_development_dependency 'webmock', '~> 1.24', '>= 1.24.3'
  s.add_development_dependency 'autotest', '~> 4.4', '>= 4.4.6'
  s.add_development_dependency 'autotest-rails-pure', '~> 4.1', '>= 4.1.2'
  s.add_development_dependency 'autotest-growl', '~> 0.2', '>= 0.2.16'
  s.add_development_dependency 'autotest-fsevent', '~> 0.2', '>= 0.2.12'

  s.files         = `find *`.split("\n").uniq.sort.select{|f| !f.empty? }
  s.test_files    = `find spec/*`.split("\n")
  s.executables   = []
  s.require_paths = ["lib"]
end
