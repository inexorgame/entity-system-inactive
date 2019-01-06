/**
* Inexor Entity System
* No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
*
* OpenAPI spec version: 3.0.0
* Contact: info@inexor.org
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/

#include "AttributeApiImpl.h"

namespace inexor {
namespace entity_system {
namespace server {
namespace api {

using namespace inexor::entity_system::server::model;

AttributeApiImpl::AttributeApiImpl(std::shared_ptr<Pistache::Rest::Router> rtr)
    : AttributeApi(rtr)
    { }

void AttributeApiImpl::create_or_update_entity_instance_attribute(const std::string &entityInstanceUuid, const std::string &name, const Attribute &attribute, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void AttributeApiImpl::create_or_update_entity_type_attribute(const std::string &entityTypeUuid, const std::string &name, const std::string &body, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void AttributeApiImpl::delete_entity_instance_attribute(const std::string &entityInstanceUuid, const std::string &name, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void AttributeApiImpl::delete_entity_type_attribute(const std::string &entityTypeUuid, const std::string &name, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void AttributeApiImpl::get_entity_instance_attribute(const std::string &entityInstanceUuid, const std::string &name, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void AttributeApiImpl::get_entity_instance_attributes(const std::string &entityInstanceUuid, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void AttributeApiImpl::get_entity_type_attribute(const std::string &entityTypeUuid, const std::string &name, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void AttributeApiImpl::get_entity_type_attributes(const std::string &entityTypeUuid, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}

}
}
}
}
