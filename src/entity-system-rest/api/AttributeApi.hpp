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
 * AttributeApi.h
 *
 * 
 */

#ifndef AttributeApi_H_
#define AttributeApi_H_

#include <memory>
#include <crossguid/guid.hpp>
#include <string>
#include <restbed>

#include "../model/Attribute.hpp"
#include "../model/EntitySystemMessage.hpp"
#include "../model/EntityType.hpp"
#include "entity-system/EntitySystem.hpp"

using namespace inexor::entity_system::rest::model;
using namespace restbed;

namespace inexor {
namespace entity_system {
namespace rest {
namespace api {

class  AttributeApi
{
public:
	AttributeApi();
	~AttributeApi();
	void createResources(std::shared_ptr<inexor::entity_system::EntitySystem> entity_system, std::shared_ptr<Service> service);
};


/// <summary>
/// Creates (or updates if already exists) the attribute of the entity instance
/// </summary>
/// <remarks>
/// 
/// </remarks>
class  AttributeApiEntitiesInstancesEntity_instance_uuidAttributesNameResource: public restbed::Resource
{
public:
	AttributeApiEntitiesInstancesEntity_instance_uuidAttributesNameResource();
    virtual ~AttributeApiEntitiesInstancesEntity_instance_uuidAttributesNameResource();
    void POST_method_handler(const std::shared_ptr<restbed::Session> session);
    void DELETE_method_handler(const std::shared_ptr<restbed::Session> session);
    void GET_method_handler(const std::shared_ptr<restbed::Session> session);
};

/// <summary>
/// Creates (or updates if already exists) the value of the named attribute of the entity type with the given UUID
/// </summary>
/// <remarks>
/// 
/// </remarks>
class  AttributeApiEntitiesTypesEntity_type_uuidAttributesNameResource: public restbed::Resource
{
public:
	AttributeApiEntitiesTypesEntity_type_uuidAttributesNameResource();
    virtual ~AttributeApiEntitiesTypesEntity_type_uuidAttributesNameResource();
    void POST_method_handler(const std::shared_ptr<restbed::Session> session);
    void DELETE_method_handler(const std::shared_ptr<restbed::Session> session);
    void GET_method_handler(const std::shared_ptr<restbed::Session> session);
};

/// <summary>
/// Returns all attributes of the entity instance with the given UUID
/// </summary>
/// <remarks>
/// 
/// </remarks>
class  AttributeApiEntitiesInstancesEntity_instance_uuidAttributesResource: public restbed::Resource
{
public:
	AttributeApiEntitiesInstancesEntity_instance_uuidAttributesResource();
    virtual ~AttributeApiEntitiesInstancesEntity_instance_uuidAttributesResource();
    void GET_method_handler(const std::shared_ptr<restbed::Session> session);
};

/// <summary>
/// Returns all attributes of the given entity type with the given UUID
/// </summary>
/// <remarks>
/// 
/// </remarks>
class  AttributeApiEntitiesTypesEntity_type_uuidAttributesResource: public restbed::Resource
{
public:
	AttributeApiEntitiesTypesEntity_type_uuidAttributesResource();
    virtual ~AttributeApiEntitiesTypesEntity_type_uuidAttributesResource();
    void GET_method_handler(const std::shared_ptr<restbed::Session> session);
};


}
}
}
}

#endif /* AttributeApi_H_ */
