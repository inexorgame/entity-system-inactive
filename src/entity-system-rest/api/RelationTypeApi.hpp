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

#include "../model/EntitySystemMessageDto.hpp"
#include "../model/RelationInstanceDto.hpp"
#include "../model/RelationTypeDto.hpp"

#include "entity-system/managers/relations/relation-type-manager/RelationTypeManager.hpp"

#include <memory>
#include <corvusoft/restbed/request.hpp>
#include <corvusoft/restbed/resource.hpp>
#include <corvusoft/restbed/service.hpp>
#include <corvusoft/restbed/session.hpp>
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
class RelationTypeApiRelationsTypesRelation_type_uuidResource;
class RelationTypeApiRelationsTypesResource;
class RelationTypeApiEntitiesTypesEntity_type_uuidRelationsIncomingResource;
class RelationTypeApiEntitiesTypesEntity_type_uuidRelationsOutgoingResource;
class RelationTypeApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidResource;
class RelationTypeApiEntitiesTypesEntity_type_uuidRelationsResource;
class RelationTypeApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidIncomingResource;
class RelationTypeApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidOutgoingResource;

class  RelationTypeApi
{
	public:
		RelationTypeApi(
			std::shared_ptr<RelationTypeApiRelationsTypesRelation_type_uuidResource> spRelationTypeApiRelationsTypesRelation_type_uuidResource,
			std::shared_ptr<RelationTypeApiRelationsTypesResource> spRelationTypeApiRelationsTypesResource,
			std::shared_ptr<RelationTypeApiEntitiesTypesEntity_type_uuidRelationsIncomingResource> spRelationTypeApiEntitiesTypesEntity_type_uuidRelationsIncomingResource,
			std::shared_ptr<RelationTypeApiEntitiesTypesEntity_type_uuidRelationsOutgoingResource> spRelationTypeApiEntitiesTypesEntity_type_uuidRelationsOutgoingResource,
			std::shared_ptr<RelationTypeApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidResource> spRelationTypeApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidResource,
			std::shared_ptr<RelationTypeApiEntitiesTypesEntity_type_uuidRelationsResource> spRelationTypeApiEntitiesTypesEntity_type_uuidRelationsResource,
			std::shared_ptr<RelationTypeApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidIncomingResource> spRelationTypeApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidIncomingResource,
			std::shared_ptr<RelationTypeApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidOutgoingResource> spRelationTypeApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidOutgoingResource
		);
		~RelationTypeApi();

		void publish_resources(std::shared_ptr<Service> service);

	private:
		std::shared_ptr<RelationTypeApiRelationsTypesRelation_type_uuidResource> spRelationTypeApiRelationsTypesRelation_type_uuidResource;
		std::shared_ptr<RelationTypeApiRelationsTypesResource> spRelationTypeApiRelationsTypesResource;
		std::shared_ptr<RelationTypeApiEntitiesTypesEntity_type_uuidRelationsIncomingResource> spRelationTypeApiEntitiesTypesEntity_type_uuidRelationsIncomingResource;
		std::shared_ptr<RelationTypeApiEntitiesTypesEntity_type_uuidRelationsOutgoingResource> spRelationTypeApiEntitiesTypesEntity_type_uuidRelationsOutgoingResource;
		std::shared_ptr<RelationTypeApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidResource> spRelationTypeApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidResource;
		std::shared_ptr<RelationTypeApiEntitiesTypesEntity_type_uuidRelationsResource> spRelationTypeApiEntitiesTypesEntity_type_uuidRelationsResource;
		std::shared_ptr<RelationTypeApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidIncomingResource> spRelationTypeApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidIncomingResource;
		std::shared_ptr<RelationTypeApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidOutgoingResource> spRelationTypeApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidOutgoingResource;

};


/// <summary>
/// Creates or updates a relation type
/// </summary>
/// <remarks>
/// 
/// </remarks>
class RelationTypeApiRelationsTypesRelation_type_uuidResource: public restbed::Resource
{
	public:
		RelationTypeApiRelationsTypesRelation_type_uuidResource(
			std::shared_ptr<inexor::entity_system::RelationTypeManager> relation_type_manager
		);
		virtual ~RelationTypeApiRelationsTypesRelation_type_uuidResource();
		void POST_method_handler(const std::shared_ptr<restbed::Session> session);
		void DELETE_method_handler(const std::shared_ptr<restbed::Session> session);
		void GET_method_handler(const std::shared_ptr<restbed::Session> session);
	private:
		std::shared_ptr<inexor::entity_system::RelationTypeManager> relation_type_manager;
};

/// <summary>
/// Creates a relation type
/// </summary>
/// <remarks>
/// 
/// </remarks>
class RelationTypeApiRelationsTypesResource: public restbed::Resource
{
	public:
		RelationTypeApiRelationsTypesResource(
			std::shared_ptr<inexor::entity_system::RelationTypeManager> relation_type_manager
		);
		virtual ~RelationTypeApiRelationsTypesResource();
		void POST_method_handler(const std::shared_ptr<restbed::Session> session);
		void DELETE_method_handler(const std::shared_ptr<restbed::Session> session);
		void GET_method_handler(const std::shared_ptr<restbed::Session> session);
	private:
		std::shared_ptr<inexor::entity_system::RelationTypeManager> relation_type_manager;
};

/// <summary>
/// Returns all incoming relation types of the entity type with the given UUID
/// </summary>
/// <remarks>
/// 
/// </remarks>
class RelationTypeApiEntitiesTypesEntity_type_uuidRelationsIncomingResource: public restbed::Resource
{
	public:
		RelationTypeApiEntitiesTypesEntity_type_uuidRelationsIncomingResource(
			std::shared_ptr<inexor::entity_system::RelationTypeManager> relation_type_manager
		);
		virtual ~RelationTypeApiEntitiesTypesEntity_type_uuidRelationsIncomingResource();
		void GET_method_handler(const std::shared_ptr<restbed::Session> session);
	private:
		std::shared_ptr<inexor::entity_system::RelationTypeManager> relation_type_manager;
};

/// <summary>
/// Returns all outgoing relation types of the entity type with the given UUID
/// </summary>
/// <remarks>
/// 
/// </remarks>
class RelationTypeApiEntitiesTypesEntity_type_uuidRelationsOutgoingResource: public restbed::Resource
{
	public:
		RelationTypeApiEntitiesTypesEntity_type_uuidRelationsOutgoingResource(
			std::shared_ptr<inexor::entity_system::RelationTypeManager> relation_type_manager
		);
		virtual ~RelationTypeApiEntitiesTypesEntity_type_uuidRelationsOutgoingResource();
		void GET_method_handler(const std::shared_ptr<restbed::Session> session);
	private:
		std::shared_ptr<inexor::entity_system::RelationTypeManager> relation_type_manager;
};

/// <summary>
/// Returns all incoming and outgoing relation instances of a certain relation type
/// </summary>
/// <remarks>
/// 
/// </remarks>
class RelationTypeApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidResource: public restbed::Resource
{
	public:
		RelationTypeApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidResource(
			std::shared_ptr<inexor::entity_system::RelationTypeManager> relation_type_manager
		);
		virtual ~RelationTypeApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidResource();
		void GET_method_handler(const std::shared_ptr<restbed::Session> session);
	private:
		std::shared_ptr<inexor::entity_system::RelationTypeManager> relation_type_manager;
};

/// <summary>
/// Returns all incoming and outgoing relation types of the entity type with the given UUID
/// </summary>
/// <remarks>
/// 
/// </remarks>
class RelationTypeApiEntitiesTypesEntity_type_uuidRelationsResource: public restbed::Resource
{
	public:
		RelationTypeApiEntitiesTypesEntity_type_uuidRelationsResource(
			std::shared_ptr<inexor::entity_system::RelationTypeManager> relation_type_manager
		);
		virtual ~RelationTypeApiEntitiesTypesEntity_type_uuidRelationsResource();
		void GET_method_handler(const std::shared_ptr<restbed::Session> session);
	private:
		std::shared_ptr<inexor::entity_system::RelationTypeManager> relation_type_manager;
};

/// <summary>
/// Returns all incoming and outgoing relation instances of a certain relation type
/// </summary>
/// <remarks>
/// 
/// </remarks>
class RelationTypeApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidIncomingResource: public restbed::Resource
{
	public:
		RelationTypeApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidIncomingResource(
			std::shared_ptr<inexor::entity_system::RelationTypeManager> relation_type_manager
		);
		virtual ~RelationTypeApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidIncomingResource();
		void GET_method_handler(const std::shared_ptr<restbed::Session> session);
	private:
		std::shared_ptr<inexor::entity_system::RelationTypeManager> relation_type_manager;
};

/// <summary>
/// Returns all incoming and outgoing relation instances of a certain relation type
/// </summary>
/// <remarks>
/// 
/// </remarks>
class RelationTypeApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidOutgoingResource: public restbed::Resource
{
	public:
		RelationTypeApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidOutgoingResource(
			std::shared_ptr<inexor::entity_system::RelationTypeManager> relation_type_manager
		);
		virtual ~RelationTypeApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidOutgoingResource();
		void GET_method_handler(const std::shared_ptr<restbed::Session> session);
	private:
		std::shared_ptr<inexor::entity_system::RelationTypeManager> relation_type_manager;
};


}
}
}
}
