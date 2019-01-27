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

#include <memory>
#include <corvusoft/restbed/request.hpp>
#include <corvusoft/restbed/resource.hpp>
#include <corvusoft/restbed/service.hpp>
#include <corvusoft/restbed/session.hpp>
#include <corvusoft/restbed/status_code.hpp>
#include <crossguid/guid.hpp>
#include <string>

#include "spdlog/spdlog.h"

#include "../model/AttributeDto.hpp"
#include "../model/EntityInstanceDto.hpp"
#include "../model/EntitySystemMessageDto.hpp"
#include "../model/RelationInstanceDto.hpp"
#include "entity-system/EntitySystem.hpp"

using namespace inexor::entity_system::rest::model;
using namespace restbed;

namespace inexor {
namespace entity_system {
namespace rest {
namespace api {

// Forward declarations
class EntityInstanceApiEntitiesInstancesResource;
class EntityInstanceApiEntitiesInstancesEntity_instance_uuidResource;
class EntityInstanceApiEntitiesInstancesEntity_instance_uuidAttributesNameResource;
class EntityInstanceApiRelationsInstancesStartStart_entity_instance_uuidEndEnd_entity_instance_uuidResource;
class EntityInstanceApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidResource;
class EntityInstanceApiEntitiesInstancesEntity_instance_uuidRelationsResource;
class EntityInstanceApiEntitiesInstancesEntity_instance_uuidAttributesResource;
//class EntityInstanceApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidIncomingResource;
//class EntityInstanceApiEntitiesInstancesEntity_instance_uuidRelationsIncomingResource;
//class EntityInstanceApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidOutgoingResource;
//class EntityInstanceApiEntitiesInstancesEntity_instance_uuidRelationsOutgoingResource;


class  EntityInstanceApi: public restbed::Service
{
	public:
		EntityInstanceApi(
			std::shared_ptr<EntityInstanceApiEntitiesInstancesResource> spEntityInstanceApiEntitiesInstancesResource,
			std::shared_ptr<EntityInstanceApiEntitiesInstancesEntity_instance_uuidResource> spEntityInstanceApiEntitiesInstancesEntity_instance_uuidResource,
			std::shared_ptr<EntityInstanceApiEntitiesInstancesEntity_instance_uuidAttributesNameResource> spEntityInstanceApiEntitiesInstancesEntity_instance_uuidAttributesNameResource,
			std::shared_ptr<EntityInstanceApiRelationsInstancesStartStart_entity_instance_uuidEndEnd_entity_instance_uuidResource> spEntityInstanceApiRelationsInstancesStartStart_entity_instance_uuidEndEnd_entity_instance_uuidResource,
			std::shared_ptr<EntityInstanceApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidResource> spEntityInstanceApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidResource,
			std::shared_ptr<EntityInstanceApiEntitiesInstancesEntity_instance_uuidRelationsResource> spEntityInstanceApiEntitiesInstancesEntity_instance_uuidRelationsResource,
			std::shared_ptr<EntityInstanceApiEntitiesInstancesEntity_instance_uuidAttributesResource> spEntityInstanceApiEntitiesInstancesEntity_instance_uuidAttributesResource
//			std::shared_ptr<EntityInstanceApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidIncomingResource> spEntityInstanceApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidIncomingResource,
//			std::shared_ptr<EntityInstanceApiEntitiesInstancesEntity_instance_uuidRelationsIncomingResource> spEntityInstanceApiEntitiesInstancesEntity_instance_uuidRelationsIncomingResource,
//			std::shared_ptr<EntityInstanceApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidOutgoingResource> spEntityInstanceApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidOutgoingResource,
//			std::shared_ptr<EntityInstanceApiEntitiesInstancesEntity_instance_uuidRelationsOutgoingResource> spEntityInstanceApiEntitiesInstancesEntity_instance_uuidRelationsOutgoingResource
		);
		~EntityInstanceApi();

		void publish_resources(std::shared_ptr<Service> service);

	private:
		std::shared_ptr<EntityInstanceApiEntitiesInstancesResource> spEntityInstanceApiEntitiesInstancesResource;
		std::shared_ptr<EntityInstanceApiEntitiesInstancesEntity_instance_uuidResource> spEntityInstanceApiEntitiesInstancesEntity_instance_uuidResource;
		std::shared_ptr<EntityInstanceApiEntitiesInstancesEntity_instance_uuidAttributesNameResource> spEntityInstanceApiEntitiesInstancesEntity_instance_uuidAttributesNameResource;
		std::shared_ptr<EntityInstanceApiRelationsInstancesStartStart_entity_instance_uuidEndEnd_entity_instance_uuidResource> spEntityInstanceApiRelationsInstancesStartStart_entity_instance_uuidEndEnd_entity_instance_uuidResource;
		std::shared_ptr<EntityInstanceApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidResource> spEntityInstanceApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidResource;
		std::shared_ptr<EntityInstanceApiEntitiesInstancesEntity_instance_uuidRelationsResource> spEntityInstanceApiEntitiesInstancesEntity_instance_uuidRelationsResource;
		std::shared_ptr<EntityInstanceApiEntitiesInstancesEntity_instance_uuidAttributesResource> spEntityInstanceApiEntitiesInstancesEntity_instance_uuidAttributesResource;
//		std::shared_ptr<EntityInstanceApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidIncomingResource> spEntityInstanceApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidIncomingResource;
//		std::shared_ptr<EntityInstanceApiEntitiesInstancesEntity_instance_uuidRelationsIncomingResource> spEntityInstanceApiEntitiesInstancesEntity_instance_uuidRelationsIncomingResource;
//		std::shared_ptr<EntityInstanceApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidOutgoingResource> spEntityInstanceApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidOutgoingResource;
//		std::shared_ptr<EntityInstanceApiEntitiesInstancesEntity_instance_uuidRelationsOutgoingResource> spEntityInstanceApiEntitiesInstancesEntity_instance_uuidRelationsOutgoingResource;

};


/// <summary>
/// Creates an entity instance
/// </summary>
/// <remarks>
/// 
/// </remarks>
class EntityInstanceApiEntitiesInstancesResource: public restbed::Resource
{
	public:
		EntityInstanceApiEntitiesInstancesResource();
		virtual ~EntityInstanceApiEntitiesInstancesResource();
		void POST_method_handler(const std::shared_ptr<restbed::Session> session);
		void DELETE_method_handler(const std::shared_ptr<restbed::Session> session);
		void GET_method_handler(const std::shared_ptr<restbed::Session> session);
};

/// <summary>
/// Creates or updates an entity instance
/// </summary>
/// <remarks>
/// 
/// </remarks>
class EntityInstanceApiEntitiesInstancesEntity_instance_uuidResource: public restbed::Resource
{
	public:
		EntityInstanceApiEntitiesInstancesEntity_instance_uuidResource();
		virtual ~EntityInstanceApiEntitiesInstancesEntity_instance_uuidResource();
		void POST_method_handler(const std::shared_ptr<restbed::Session> session);
		void DELETE_method_handler(const std::shared_ptr<restbed::Session> session);
		void GET_method_handler(const std::shared_ptr<restbed::Session> session);
};

/// <summary>
/// Creates (or updates if already exists) the attribute of the entity instance
/// </summary>
/// <remarks>
/// 
/// </remarks>
class EntityInstanceApiEntitiesInstancesEntity_instance_uuidAttributesNameResource: public restbed::Resource
{
	public:
		EntityInstanceApiEntitiesInstancesEntity_instance_uuidAttributesNameResource();
		virtual ~EntityInstanceApiEntitiesInstancesEntity_instance_uuidAttributesNameResource();
		void POST_method_handler(const std::shared_ptr<restbed::Session> session);
		void DELETE_method_handler(const std::shared_ptr<restbed::Session> session);
		void GET_method_handler(const std::shared_ptr<restbed::Session> session);
};

/// <summary>
/// Deletes all relations instances between a start entity instance and an end entity instance
/// </summary>
/// <remarks>
/// 
/// </remarks>
class EntityInstanceApiRelationsInstancesStartStart_entity_instance_uuidEndEnd_entity_instance_uuidResource: public restbed::Resource
{
	public:
		EntityInstanceApiRelationsInstancesStartStart_entity_instance_uuidEndEnd_entity_instance_uuidResource();
		virtual ~EntityInstanceApiRelationsInstancesStartStart_entity_instance_uuidEndEnd_entity_instance_uuidResource();
		void DELETE_method_handler(const std::shared_ptr<restbed::Session> session);
		void GET_method_handler(const std::shared_ptr<restbed::Session> session);
};

/// <summary>
/// Returns all incoming and outgoing relation instances of a certain relation type
/// </summary>
/// <remarks>
/// 
/// </remarks>
class EntityInstanceApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidResource: public restbed::Resource
{
	public:
		EntityInstanceApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidResource();
		virtual ~EntityInstanceApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidResource();
		void GET_method_handler(const std::shared_ptr<restbed::Session> session);
};

/// <summary>
/// Returns all incoming and outgoing relation instances of the entity instance
/// </summary>
/// <remarks>
/// 
/// </remarks>
class EntityInstanceApiEntitiesInstancesEntity_instance_uuidRelationsResource: public restbed::Resource
{
	public:
		EntityInstanceApiEntitiesInstancesEntity_instance_uuidRelationsResource();
		virtual ~EntityInstanceApiEntitiesInstancesEntity_instance_uuidRelationsResource();
		void GET_method_handler(const std::shared_ptr<restbed::Session> session);
};

/// <summary>
/// Returns all attributes of the entity instance with the given UUID
/// </summary>
/// <remarks>
/// 
/// </remarks>
class EntityInstanceApiEntitiesInstancesEntity_instance_uuidAttributesResource: public restbed::Resource
{
	public:
		EntityInstanceApiEntitiesInstancesEntity_instance_uuidAttributesResource();
		virtual ~EntityInstanceApiEntitiesInstancesEntity_instance_uuidAttributesResource();
		void GET_method_handler(const std::shared_ptr<restbed::Session> session);
};

/// <summary>
/// Returns all incoming and outgoing relation instances of a certain relation type
/// </summary>
/// <remarks>
/// 
/// </remarks>
class EntityInstanceApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidIncomingResource: public restbed::Resource
{
	public:
		EntityInstanceApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidIncomingResource();
		virtual ~EntityInstanceApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidIncomingResource();
		void GET_method_handler(const std::shared_ptr<restbed::Session> session);
};

/// <summary>
/// Returns all incoming relation instances of the entity instance
/// </summary>
/// <remarks>
/// 
/// </remarks>
class EntityInstanceApiEntitiesInstancesEntity_instance_uuidRelationsIncomingResource: public restbed::Resource
{
	public:
		EntityInstanceApiEntitiesInstancesEntity_instance_uuidRelationsIncomingResource();
		virtual ~EntityInstanceApiEntitiesInstancesEntity_instance_uuidRelationsIncomingResource();
		void GET_method_handler(const std::shared_ptr<restbed::Session> session);
};

/// <summary>
/// Returns all incoming and outgoing relation instances of a certain relation type
/// </summary>
/// <remarks>
/// 
/// </remarks>
class EntityInstanceApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidOutgoingResource: public restbed::Resource
{
	public:
		EntityInstanceApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidOutgoingResource();
		virtual ~EntityInstanceApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidOutgoingResource();
		void GET_method_handler(const std::shared_ptr<restbed::Session> session);
};

/// <summary>
/// Returns all outgoing relation instances of the entity instance
/// </summary>
/// <remarks>
/// 
/// </remarks>
class EntityInstanceApiEntitiesInstancesEntity_instance_uuidRelationsOutgoingResource: public restbed::Resource
{
	public:
		EntityInstanceApiEntitiesInstancesEntity_instance_uuidRelationsOutgoingResource();
		virtual ~EntityInstanceApiEntitiesInstancesEntity_instance_uuidRelationsOutgoingResource();
		void GET_method_handler(const std::shared_ptr<restbed::Session> session);
};


}
}
}
}
