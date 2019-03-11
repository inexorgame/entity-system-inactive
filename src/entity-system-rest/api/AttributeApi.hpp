/**
 * Inexor Entity System
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * OpenAPI spec version: 3.0.0
 * Contact: info@inexor.org
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.0.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#pragma once

#include "entity-system/managers/entity-attributes/entity-attribute-instance-manager/EntityAttributeInstanceManager.hpp"
#include "entity-system/managers/entity-attributes/entity-attribute-type-manager/EntityAttributeTypeManager.hpp"
#include "../model/AttributeDto.hpp"
#include "../model/EntitySystemMessageDto.hpp"
#include "../model/EntityTypeDto.hpp"

#include <memory>
#include <corvusoft/restbed/request.hpp>
#include <corvusoft/restbed/resource.hpp>
#include <corvusoft/restbed/service.hpp>
#include <corvusoft/restbed/session.hpp>
#include <corvusoft/restbed/status_code.hpp>
#include <crossguid/guid.hpp>
#include <string>

#include "spdlog/spdlog.h"


using namespace inexor::entity_system::rest::model;
using namespace restbed;

namespace inexor {
namespace entity_system {
namespace rest {
namespace api {

// Forward declarations
class AttributeApiEntitiesInstancesEntity_instance_uuidAttributesNameResource;
class AttributeApiEntitiesTypesEntity_type_uuidAttributesNameResource;
class AttributeApiEntitiesInstancesEntity_instance_uuidAttributesResource;
class AttributeApiEntitiesTypesEntity_type_uuidAttributesResource;

class AttributeApi
{
	public:
		AttributeApi(
			std::shared_ptr<AttributeApiEntitiesInstancesEntity_instance_uuidAttributesNameResource> spAttributeApiEntitiesInstancesEntity_instance_uuidAttributesNameResource,
			std::shared_ptr<AttributeApiEntitiesTypesEntity_type_uuidAttributesNameResource> spAttributeApiEntitiesTypesEntity_type_uuidAttributesNameResource,
			std::shared_ptr<AttributeApiEntitiesInstancesEntity_instance_uuidAttributesResource> spAttributeApiEntitiesInstancesEntity_instance_uuidAttributesResource,
			std::shared_ptr<AttributeApiEntitiesTypesEntity_type_uuidAttributesResource> spAttributeApiEntitiesTypesEntity_type_uuidAttributesResource
		);
		~AttributeApi();
		void publish_resources(std::shared_ptr<Service> service);
	private:
		std::shared_ptr<AttributeApiEntitiesInstancesEntity_instance_uuidAttributesNameResource> spAttributeApiEntitiesInstancesEntity_instance_uuidAttributesNameResource;
		std::shared_ptr<AttributeApiEntitiesTypesEntity_type_uuidAttributesNameResource> spAttributeApiEntitiesTypesEntity_type_uuidAttributesNameResource;
		std::shared_ptr<AttributeApiEntitiesInstancesEntity_instance_uuidAttributesResource> spAttributeApiEntitiesInstancesEntity_instance_uuidAttributesResource;
		std::shared_ptr<AttributeApiEntitiesTypesEntity_type_uuidAttributesResource> spAttributeApiEntitiesTypesEntity_type_uuidAttributesResource;
};


/// <summary>
/// Creates (or updates if already exists) the attribute of the entity instance
/// </summary>
/// <remarks>
/// 
/// </remarks>
class AttributeApiEntitiesInstancesEntity_instance_uuidAttributesNameResource: public restbed::Resource
{
	public:
		AttributeApiEntitiesInstancesEntity_instance_uuidAttributesNameResource(
			std::shared_ptr<EntityAttributeInstanceManager> entity_attribute_instance_manager
		);
		virtual ~AttributeApiEntitiesInstancesEntity_instance_uuidAttributesNameResource();
		void POST_method_handler(const std::shared_ptr<restbed::Session> session);
		void DELETE_method_handler(const std::shared_ptr<restbed::Session> session);
		void GET_method_handler(const std::shared_ptr<restbed::Session> session);
	private:
		std::shared_ptr<EntityAttributeInstanceManager> entity_attribute_instance_manager;
};

/// <summary>
/// Creates (or updates if already exists) the value of the named attribute of the entity type with the given UUID
/// </summary>
/// <remarks>
/// 
/// </remarks>
class AttributeApiEntitiesTypesEntity_type_uuidAttributesNameResource: public restbed::Resource
{
	public:
		AttributeApiEntitiesTypesEntity_type_uuidAttributesNameResource(
			std::shared_ptr<EntityAttributeTypeManager> entity_attribute_type_manager
		);
		virtual ~AttributeApiEntitiesTypesEntity_type_uuidAttributesNameResource();
		void POST_method_handler(const std::shared_ptr<restbed::Session> session);
		void DELETE_method_handler(const std::shared_ptr<restbed::Session> session);
		void GET_method_handler(const std::shared_ptr<restbed::Session> session);
	private:
		std::shared_ptr<EntityAttributeTypeManager> entity_attribute_type_manager;
};

/// <summary>
/// Returns all attributes of the entity instance with the given UUID
/// </summary>
/// <remarks>
/// 
/// </remarks>
class AttributeApiEntitiesInstancesEntity_instance_uuidAttributesResource: public restbed::Resource
{
	public:
		AttributeApiEntitiesInstancesEntity_instance_uuidAttributesResource(
			std::shared_ptr<EntityAttributeInstanceManager> entity_attribute_instance_manager
		);
		virtual ~AttributeApiEntitiesInstancesEntity_instance_uuidAttributesResource();
		void GET_method_handler(const std::shared_ptr<restbed::Session> session);
	private:
		std::shared_ptr<EntityAttributeInstanceManager> entity_attribute_instance_manager;
};

/// <summary>
/// Returns all attributes of the given entity type with the given UUID
/// </summary>
/// <remarks>
/// 
/// </remarks>
class AttributeApiEntitiesTypesEntity_type_uuidAttributesResource: public restbed::Resource
{
	public:
		AttributeApiEntitiesTypesEntity_type_uuidAttributesResource(
			std::shared_ptr<EntityAttributeTypeManager> entity_attribute_type_manager
		);
		virtual ~AttributeApiEntitiesTypesEntity_type_uuidAttributesResource();
		void GET_method_handler(const std::shared_ptr<restbed::Session> session);
	private:
		std::shared_ptr<EntityAttributeTypeManager> entity_attribute_type_manager;
};


}
}
}
}
