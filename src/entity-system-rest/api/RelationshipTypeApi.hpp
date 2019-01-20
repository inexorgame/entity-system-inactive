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
 * RelationshipTypeApi.h
 *
 * 
 */

#pragma once

#include <memory>
#include <crossguid/guid.hpp>
#include <string>
#include <restbed>

#include "../model/EntitySystemMessage.hpp"
#include "../model/RelationshipInstance.hpp"
#include "../model/RelationshipType.hpp"
#include "entity-system/EntitySystem.hpp"

using namespace inexor::entity_system::rest::model;
using namespace restbed;

namespace inexor {
namespace entity_system {
namespace rest {
namespace api {

class  RelationshipTypeApi
{
public:
	RelationshipTypeApi();
	~RelationshipTypeApi();
	void createResources(std::shared_ptr<inexor::entity_system::EntitySystem> entity_system, std::shared_ptr<Service> service);
};


/// <summary>
/// Creates or updates a relationship type
/// </summary>
/// <remarks>
/// 
/// </remarks>
class  RelationshipTypeApiRelationshipsTypesRelationship_type_uuidResource: public restbed::Resource
{
public:
	RelationshipTypeApiRelationshipsTypesRelationship_type_uuidResource();
    virtual ~RelationshipTypeApiRelationshipsTypesRelationship_type_uuidResource();
    void POST_method_handler(const std::shared_ptr<restbed::Session> session);
    void DELETE_method_handler(const std::shared_ptr<restbed::Session> session);
    void GET_method_handler(const std::shared_ptr<restbed::Session> session);
};

/// <summary>
/// Creates a relationship type
/// </summary>
/// <remarks>
/// 
/// </remarks>
class  RelationshipTypeApiRelationshipsTypesResource: public restbed::Resource
{
public:
	RelationshipTypeApiRelationshipsTypesResource();
    virtual ~RelationshipTypeApiRelationshipsTypesResource();
    void POST_method_handler(const std::shared_ptr<restbed::Session> session);
    void DELETE_method_handler(const std::shared_ptr<restbed::Session> session);
    void GET_method_handler(const std::shared_ptr<restbed::Session> session);
};

/// <summary>
/// Returns all incoming relationship types of the entity type with the given UUID
/// </summary>
/// <remarks>
/// 
/// </remarks>
class  RelationshipTypeApiEntitiesTypesEntity_type_uuidRelationshipsIncomingResource: public restbed::Resource
{
public:
	RelationshipTypeApiEntitiesTypesEntity_type_uuidRelationshipsIncomingResource();
    virtual ~RelationshipTypeApiEntitiesTypesEntity_type_uuidRelationshipsIncomingResource();
    void GET_method_handler(const std::shared_ptr<restbed::Session> session);
};

/// <summary>
/// Returns all outgoing relationship types of the entity type with the given UUID
/// </summary>
/// <remarks>
/// 
/// </remarks>
class  RelationshipTypeApiEntitiesTypesEntity_type_uuidRelationshipsOutgoingResource: public restbed::Resource
{
public:
	RelationshipTypeApiEntitiesTypesEntity_type_uuidRelationshipsOutgoingResource();
    virtual ~RelationshipTypeApiEntitiesTypesEntity_type_uuidRelationshipsOutgoingResource();
    void GET_method_handler(const std::shared_ptr<restbed::Session> session);
};

/// <summary>
/// Returns all incoming and outgoing relationship instances of a certain relationship type
/// </summary>
/// <remarks>
/// 
/// </remarks>
class  RelationshipTypeApiEntitiesInstancesEntity_instance_uuidRelationshipsRelationship_type_uuidResource: public restbed::Resource
{
public:
	RelationshipTypeApiEntitiesInstancesEntity_instance_uuidRelationshipsRelationship_type_uuidResource();
    virtual ~RelationshipTypeApiEntitiesInstancesEntity_instance_uuidRelationshipsRelationship_type_uuidResource();
    void GET_method_handler(const std::shared_ptr<restbed::Session> session);
};

/// <summary>
/// Returns all incoming and outgoing relationship types of the entity type with the given UUID
/// </summary>
/// <remarks>
/// 
/// </remarks>
class  RelationshipTypeApiEntitiesTypesEntity_type_uuidRelationshipsResource: public restbed::Resource
{
public:
	RelationshipTypeApiEntitiesTypesEntity_type_uuidRelationshipsResource();
    virtual ~RelationshipTypeApiEntitiesTypesEntity_type_uuidRelationshipsResource();
    void GET_method_handler(const std::shared_ptr<restbed::Session> session);
};

/// <summary>
/// Returns all incoming and outgoing relationship instances of a certain relationship type
/// </summary>
/// <remarks>
/// 
/// </remarks>
class  RelationshipTypeApiEntitiesInstancesEntity_instance_uuidRelationshipsRelationship_type_uuidIncomingResource: public restbed::Resource
{
public:
	RelationshipTypeApiEntitiesInstancesEntity_instance_uuidRelationshipsRelationship_type_uuidIncomingResource();
    virtual ~RelationshipTypeApiEntitiesInstancesEntity_instance_uuidRelationshipsRelationship_type_uuidIncomingResource();
    void GET_method_handler(const std::shared_ptr<restbed::Session> session);
};

/// <summary>
/// Returns all incoming and outgoing relationship instances of a certain relationship type
/// </summary>
/// <remarks>
/// 
/// </remarks>
class  RelationshipTypeApiEntitiesInstancesEntity_instance_uuidRelationshipsRelationship_type_uuidOutgoingResource: public restbed::Resource
{
public:
	RelationshipTypeApiEntitiesInstancesEntity_instance_uuidRelationshipsRelationship_type_uuidOutgoingResource();
    virtual ~RelationshipTypeApiEntitiesInstancesEntity_instance_uuidRelationshipsRelationship_type_uuidOutgoingResource();
    void GET_method_handler(const std::shared_ptr<restbed::Session> session);
};


}
}
}
}
