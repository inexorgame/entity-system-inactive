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

#include "entity-system/managers/entities/entity-type-manager/EntityTypeManager.hpp"
#include "../model/AttributeDto.hpp"
#include "../model/EntityInstanceDto.hpp"
#include "../model/EntitySystemMessageDto.hpp"
#include "../model/EntityTypeDto.hpp"
#include "../model/RelationTypeDto.hpp"

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
class EntityTypeApiEntitiesTypesResource;
class EntityTypeApiEntitiesTypesEntity_type_uuidResource;
class EntityTypeApiEntitiesTypesEntity_type_uuidAttributesNameResource;
class EntityTypeApiEntitiesTypesEntity_type_uuidInstancesResource;
class EntityTypeApiEntitiesTypesEntity_type_uuidRelationsIncomingResource;
class EntityTypeApiEntitiesTypesEntity_type_uuidRelationsOutgoingResource;
class EntityTypeApiEntitiesTypesEntity_type_uuidRelationsResource;
class EntityTypeApiEntitiesTypesEntity_type_uuidAttributesResource;

class EntityTypeApi
{
	public:
		EntityTypeApi(
			std::shared_ptr<EntityTypeApiEntitiesTypesResource> spEntityTypeApiEntitiesTypesResource,
			std::shared_ptr<EntityTypeApiEntitiesTypesEntity_type_uuidResource> spEntityTypeApiEntitiesTypesEntity_type_uuidResource,
			std::shared_ptr<EntityTypeApiEntitiesTypesEntity_type_uuidAttributesNameResource> spEntityTypeApiEntitiesTypesEntity_type_uuidAttributesNameResource,
			std::shared_ptr<EntityTypeApiEntitiesTypesEntity_type_uuidInstancesResource> spEntityTypeApiEntitiesTypesEntity_type_uuidInstancesResource,
			std::shared_ptr<EntityTypeApiEntitiesTypesEntity_type_uuidRelationsIncomingResource> spEntityTypeApiEntitiesTypesEntity_type_uuidRelationsIncomingResource,
			std::shared_ptr<EntityTypeApiEntitiesTypesEntity_type_uuidRelationsOutgoingResource> spEntityTypeApiEntitiesTypesEntity_type_uuidRelationsOutgoingResource,
			std::shared_ptr<EntityTypeApiEntitiesTypesEntity_type_uuidRelationsResource> spEntityTypeApiEntitiesTypesEntity_type_uuidRelationsResource,
			std::shared_ptr<EntityTypeApiEntitiesTypesEntity_type_uuidAttributesResource> spEntityTypeApiEntitiesTypesEntity_type_uuidAttributesResource
		);
		~EntityTypeApi();

		void publish_resources(std::shared_ptr<Service> service);

	private:
		std::shared_ptr<EntityTypeApiEntitiesTypesResource> spEntityTypeApiEntitiesTypesResource;
		std::shared_ptr<EntityTypeApiEntitiesTypesEntity_type_uuidResource> spEntityTypeApiEntitiesTypesEntity_type_uuidResource;
		std::shared_ptr<EntityTypeApiEntitiesTypesEntity_type_uuidAttributesNameResource> spEntityTypeApiEntitiesTypesEntity_type_uuidAttributesNameResource;
		std::shared_ptr<EntityTypeApiEntitiesTypesEntity_type_uuidInstancesResource> spEntityTypeApiEntitiesTypesEntity_type_uuidInstancesResource;
		std::shared_ptr<EntityTypeApiEntitiesTypesEntity_type_uuidRelationsIncomingResource> spEntityTypeApiEntitiesTypesEntity_type_uuidRelationsIncomingResource;
		std::shared_ptr<EntityTypeApiEntitiesTypesEntity_type_uuidRelationsOutgoingResource> spEntityTypeApiEntitiesTypesEntity_type_uuidRelationsOutgoingResource;
		std::shared_ptr<EntityTypeApiEntitiesTypesEntity_type_uuidRelationsResource> spEntityTypeApiEntitiesTypesEntity_type_uuidRelationsResource;
		std::shared_ptr<EntityTypeApiEntitiesTypesEntity_type_uuidAttributesResource> spEntityTypeApiEntitiesTypesEntity_type_uuidAttributesResource;

};


/// <summary>
/// Creates an entity type
/// </summary>
/// <remarks>
/// 
/// </remarks>
class  EntityTypeApiEntitiesTypesResource: public Resource
{
	public:
		EntityTypeApiEntitiesTypesResource(
			std::shared_ptr<inexor::entity_system::EntityTypeManager> entity_type_manager
		);
		virtual ~EntityTypeApiEntitiesTypesResource();
		void POST_method_handler(const std::shared_ptr<Session> session);
		void DELETE_method_handler(const std::shared_ptr<Session> session);
		void GET_method_handler(const std::shared_ptr<Session> session);
	private:
		std::shared_ptr<inexor::entity_system::EntityTypeManager> entity_type_manager;
};

/// <summary>
/// Creates (or updates if already exists) the entity type with the given UUID
/// </summary>
/// <remarks>
/// 
/// </remarks>
class  EntityTypeApiEntitiesTypesEntity_type_uuidResource: public Resource
{
	public:
		EntityTypeApiEntitiesTypesEntity_type_uuidResource(
			std::shared_ptr<inexor::entity_system::EntityTypeManager> entity_type_manager
		);
		virtual ~EntityTypeApiEntitiesTypesEntity_type_uuidResource();
		void POST_method_handler(const std::shared_ptr<Session> session);
		void DELETE_method_handler(const std::shared_ptr<Session> session);
		void GET_method_handler(const std::shared_ptr<Session> session);
	private:
		std::shared_ptr<inexor::entity_system::EntityTypeManager> entity_type_manager;
};

/// <summary>
/// Creates (or updates if already exists) the value of the named attribute of the entity type with the given UUID
/// </summary>
/// <remarks>
/// 
/// </remarks>
class  EntityTypeApiEntitiesTypesEntity_type_uuidAttributesNameResource: public Resource
{
	public:
		EntityTypeApiEntitiesTypesEntity_type_uuidAttributesNameResource(
			std::shared_ptr<inexor::entity_system::EntityTypeManager> entity_type_manager
		);
		virtual ~EntityTypeApiEntitiesTypesEntity_type_uuidAttributesNameResource();
		void POST_method_handler(const std::shared_ptr<Session> session);
		void DELETE_method_handler(const std::shared_ptr<Session> session);
		void GET_method_handler(const std::shared_ptr<Session> session);
	private:
		std::shared_ptr<inexor::entity_system::EntityTypeManager> entity_type_manager;
};

/// <summary>
/// Deletes all entity instances of the entity type with the given UUID
/// </summary>
/// <remarks>
/// 
/// </remarks>
class  EntityTypeApiEntitiesTypesEntity_type_uuidInstancesResource: public Resource
{
	public:
		EntityTypeApiEntitiesTypesEntity_type_uuidInstancesResource(
			std::shared_ptr<inexor::entity_system::EntityTypeManager> entity_type_manager
		);
		virtual ~EntityTypeApiEntitiesTypesEntity_type_uuidInstancesResource();
		void DELETE_method_handler(const std::shared_ptr<Session> session);
		void GET_method_handler(const std::shared_ptr<Session> session);
	private:
		std::shared_ptr<inexor::entity_system::EntityTypeManager> entity_type_manager;
};

/// <summary>
/// Returns all incoming relation types of the entity type with the given UUID
/// </summary>
/// <remarks>
/// 
/// </remarks>
class  EntityTypeApiEntitiesTypesEntity_type_uuidRelationsIncomingResource: public Resource
{
	public:
		EntityTypeApiEntitiesTypesEntity_type_uuidRelationsIncomingResource(
			std::shared_ptr<inexor::entity_system::EntityTypeManager> entity_type_manager
		);
		virtual ~EntityTypeApiEntitiesTypesEntity_type_uuidRelationsIncomingResource();
		void GET_method_handler(const std::shared_ptr<Session> session);
	private:
		std::shared_ptr<inexor::entity_system::EntityTypeManager> entity_type_manager;
};

/// <summary>
/// Returns all outgoing relation types of the entity type with the given UUID
/// </summary>
/// <remarks>
/// 
/// </remarks>
class  EntityTypeApiEntitiesTypesEntity_type_uuidRelationsOutgoingResource: public Resource
{
	public:
		EntityTypeApiEntitiesTypesEntity_type_uuidRelationsOutgoingResource(
			std::shared_ptr<inexor::entity_system::EntityTypeManager> entity_type_manager
		);
		virtual ~EntityTypeApiEntitiesTypesEntity_type_uuidRelationsOutgoingResource();
		void GET_method_handler(const std::shared_ptr<Session> session);
	private:
		std::shared_ptr<inexor::entity_system::EntityTypeManager> entity_type_manager;
};

/// <summary>
/// Returns all incoming and outgoing relation types of the entity type with the given UUID
/// </summary>
/// <remarks>
/// 
/// </remarks>
class  EntityTypeApiEntitiesTypesEntity_type_uuidRelationsResource: public Resource
{
	public:
		EntityTypeApiEntitiesTypesEntity_type_uuidRelationsResource(
			std::shared_ptr<inexor::entity_system::EntityTypeManager> entity_type_manager
		);
		virtual ~EntityTypeApiEntitiesTypesEntity_type_uuidRelationsResource();
		void GET_method_handler(const std::shared_ptr<Session> session);
	private:
		std::shared_ptr<inexor::entity_system::EntityTypeManager> entity_type_manager;
};

/// <summary>
/// Returns all attributes of the given entity type with the given UUID
/// </summary>
/// <remarks>
/// 
/// </remarks>
class  EntityTypeApiEntitiesTypesEntity_type_uuidAttributesResource: public Resource
{
	public:
		EntityTypeApiEntitiesTypesEntity_type_uuidAttributesResource(
			std::shared_ptr<inexor::entity_system::EntityTypeManager> entity_type_manager
		);
		virtual ~EntityTypeApiEntitiesTypesEntity_type_uuidAttributesResource();
		void GET_method_handler(const std::shared_ptr<Session> session);
	private:
		std::shared_ptr<inexor::entity_system::EntityTypeManager> entity_type_manager;
};


}
}
}
}

