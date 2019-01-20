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

/*
 * EntityInstanceApi.h
 *
 * 
 */

#pragma once

#include <memory>
#include <crossguid/guid.hpp>
#include <string>
#include <restbed>

#include "../model/Attribute.hpp"
#include "../model/EntityInstance.hpp"
#include "../model/EntitySystemMessage.hpp"
#include "../model/RelationshipInstance.hpp"
#include "entity-system/EntitySystem.hpp"

using namespace inexor::entity_system::rest::model;
using namespace restbed;

namespace inexor {
namespace entity_system {
namespace rest {
namespace api {

class  EntityInstanceApi: public restbed::Service
{
public:
	EntityInstanceApi();
	~EntityInstanceApi();
	void createResources(std::shared_ptr<inexor::entity_system::EntitySystem> entity_system, std::shared_ptr<Service> service);
};


/// <summary>
/// Creates an entity instance
/// </summary>
/// <remarks>
/// 
/// </remarks>
class  EntityInstanceApiEntitiesInstancesResource: public restbed::Resource
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
class  EntityInstanceApiEntitiesInstancesEntity_instance_uuidResource: public restbed::Resource
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
class  EntityInstanceApiEntitiesInstancesEntity_instance_uuidAttributesNameResource: public restbed::Resource
{
public:
	EntityInstanceApiEntitiesInstancesEntity_instance_uuidAttributesNameResource();
    virtual ~EntityInstanceApiEntitiesInstancesEntity_instance_uuidAttributesNameResource();
    void POST_method_handler(const std::shared_ptr<restbed::Session> session);
    void DELETE_method_handler(const std::shared_ptr<restbed::Session> session);
    void GET_method_handler(const std::shared_ptr<restbed::Session> session);
};

/// <summary>
/// Deletes all relationships instances between a start entity instance and an end entity instance
/// </summary>
/// <remarks>
/// 
/// </remarks>
class  EntityInstanceApiRelationshipsInstancesStartStart_entity_instance_uuidEndEnd_entity_instance_uuidResource: public restbed::Resource
{
public:
	EntityInstanceApiRelationshipsInstancesStartStart_entity_instance_uuidEndEnd_entity_instance_uuidResource();
    virtual ~EntityInstanceApiRelationshipsInstancesStartStart_entity_instance_uuidEndEnd_entity_instance_uuidResource();
    void DELETE_method_handler(const std::shared_ptr<restbed::Session> session);
    void GET_method_handler(const std::shared_ptr<restbed::Session> session);
};

/// <summary>
/// Returns all incoming and outgoing relationship instances of a certain relationship type
/// </summary>
/// <remarks>
/// 
/// </remarks>
class  EntityInstanceApiEntitiesInstancesEntity_instance_uuidRelationshipsRelationship_type_uuidResource: public restbed::Resource
{
public:
	EntityInstanceApiEntitiesInstancesEntity_instance_uuidRelationshipsRelationship_type_uuidResource();
    virtual ~EntityInstanceApiEntitiesInstancesEntity_instance_uuidRelationshipsRelationship_type_uuidResource();
    void GET_method_handler(const std::shared_ptr<restbed::Session> session);
};

/// <summary>
/// Returns all incoming and outgoing relationship instances of the entity instance
/// </summary>
/// <remarks>
/// 
/// </remarks>
class  EntityInstanceApiEntitiesInstancesEntity_instance_uuidRelationshipsResource: public restbed::Resource
{
public:
	EntityInstanceApiEntitiesInstancesEntity_instance_uuidRelationshipsResource();
    virtual ~EntityInstanceApiEntitiesInstancesEntity_instance_uuidRelationshipsResource();
    void GET_method_handler(const std::shared_ptr<restbed::Session> session);
};

/// <summary>
/// Returns all attributes of the entity instance with the given UUID
/// </summary>
/// <remarks>
/// 
/// </remarks>
class  EntityInstanceApiEntitiesInstancesEntity_instance_uuidAttributesResource: public restbed::Resource
{
public:
	EntityInstanceApiEntitiesInstancesEntity_instance_uuidAttributesResource();
    virtual ~EntityInstanceApiEntitiesInstancesEntity_instance_uuidAttributesResource();
    void GET_method_handler(const std::shared_ptr<restbed::Session> session);
};

/// <summary>
/// Returns all incoming and outgoing relationship instances of a certain relationship type
/// </summary>
/// <remarks>
/// 
/// </remarks>
class  EntityInstanceApiEntitiesInstancesEntity_instance_uuidRelationshipsRelationship_type_uuidIncomingResource: public restbed::Resource
{
public:
	EntityInstanceApiEntitiesInstancesEntity_instance_uuidRelationshipsRelationship_type_uuidIncomingResource();
    virtual ~EntityInstanceApiEntitiesInstancesEntity_instance_uuidRelationshipsRelationship_type_uuidIncomingResource();
    void GET_method_handler(const std::shared_ptr<restbed::Session> session);
};

/// <summary>
/// Returns all incoming relationship instances of the entity instance
/// </summary>
/// <remarks>
/// 
/// </remarks>
class  EntityInstanceApiEntitiesInstancesEntity_instance_uuidRelationshipsIncomingResource: public restbed::Resource
{
public:
	EntityInstanceApiEntitiesInstancesEntity_instance_uuidRelationshipsIncomingResource();
    virtual ~EntityInstanceApiEntitiesInstancesEntity_instance_uuidRelationshipsIncomingResource();
    void GET_method_handler(const std::shared_ptr<restbed::Session> session);
};

/// <summary>
/// Returns all incoming and outgoing relationship instances of a certain relationship type
/// </summary>
/// <remarks>
/// 
/// </remarks>
class  EntityInstanceApiEntitiesInstancesEntity_instance_uuidRelationshipsRelationship_type_uuidOutgoingResource: public restbed::Resource
{
public:
	EntityInstanceApiEntitiesInstancesEntity_instance_uuidRelationshipsRelationship_type_uuidOutgoingResource();
    virtual ~EntityInstanceApiEntitiesInstancesEntity_instance_uuidRelationshipsRelationship_type_uuidOutgoingResource();
    void GET_method_handler(const std::shared_ptr<restbed::Session> session);
};

/// <summary>
/// Returns all outgoing relationship instances of the entity instance
/// </summary>
/// <remarks>
/// 
/// </remarks>
class  EntityInstanceApiEntitiesInstancesEntity_instance_uuidRelationshipsOutgoingResource: public restbed::Resource
{
public:
	EntityInstanceApiEntitiesInstancesEntity_instance_uuidRelationshipsOutgoingResource();
    virtual ~EntityInstanceApiEntitiesInstancesEntity_instance_uuidRelationshipsOutgoingResource();
    void GET_method_handler(const std::shared_ptr<restbed::Session> session);
};


}
}
}
}
