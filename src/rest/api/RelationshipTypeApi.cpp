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


#include <corvusoft/restbed/byte.hpp>
#include <corvusoft/restbed/string.hpp>
#include <corvusoft/restbed/settings.hpp>
#include <corvusoft/restbed/request.hpp>

#include "RelationshipTypeApi.h"

namespace inexor {
namespace entity_system {
namespace rest {
namespace api {

using namespace inexor::entity_system::rest::model;
using namespace xg;
using namespace restbed;
using namespace std;

RelationshipTypeApi::RelationshipTypeApi() {}
RelationshipTypeApi::~RelationshipTypeApi() {}

void RelationshipTypeApi::createResources(std::shared_ptr<inexor::entity_system::EntitySystem> entity_system, std::shared_ptr<Service> service) {

	std::shared_ptr<RelationshipTypeApiRelationshipsTypesRelationship_type_uuidResource> spRelationshipTypeApiRelationshipsTypesRelationship_type_uuidResource = std::make_shared<RelationshipTypeApiRelationshipsTypesRelationship_type_uuidResource>();
	service->publish(spRelationshipTypeApiRelationshipsTypesRelationship_type_uuidResource);
	
	std::shared_ptr<RelationshipTypeApiRelationshipsTypesResource> spRelationshipTypeApiRelationshipsTypesResource = std::make_shared<RelationshipTypeApiRelationshipsTypesResource>();
	service->publish(spRelationshipTypeApiRelationshipsTypesResource);
	
	std::shared_ptr<RelationshipTypeApiEntitiesTypesEntity_type_uuidRelationshipsIncomingResource> spRelationshipTypeApiEntitiesTypesEntity_type_uuidRelationshipsIncomingResource = std::make_shared<RelationshipTypeApiEntitiesTypesEntity_type_uuidRelationshipsIncomingResource>();
	service->publish(spRelationshipTypeApiEntitiesTypesEntity_type_uuidRelationshipsIncomingResource);
	
	std::shared_ptr<RelationshipTypeApiEntitiesTypesEntity_type_uuidRelationshipsOutgoingResource> spRelationshipTypeApiEntitiesTypesEntity_type_uuidRelationshipsOutgoingResource = std::make_shared<RelationshipTypeApiEntitiesTypesEntity_type_uuidRelationshipsOutgoingResource>();
	service->publish(spRelationshipTypeApiEntitiesTypesEntity_type_uuidRelationshipsOutgoingResource);
	
	std::shared_ptr<RelationshipTypeApiEntitiesInstancesEntity_instance_uuidRelationshipsRelationship_type_uuidResource> spRelationshipTypeApiEntitiesInstancesEntity_instance_uuidRelationshipsRelationship_type_uuidResource = std::make_shared<RelationshipTypeApiEntitiesInstancesEntity_instance_uuidRelationshipsRelationship_type_uuidResource>();
	service->publish(spRelationshipTypeApiEntitiesInstancesEntity_instance_uuidRelationshipsRelationship_type_uuidResource);
	
	std::shared_ptr<RelationshipTypeApiEntitiesTypesEntity_type_uuidRelationshipsResource> spRelationshipTypeApiEntitiesTypesEntity_type_uuidRelationshipsResource = std::make_shared<RelationshipTypeApiEntitiesTypesEntity_type_uuidRelationshipsResource>();
	service->publish(spRelationshipTypeApiEntitiesTypesEntity_type_uuidRelationshipsResource);
	
	std::shared_ptr<RelationshipTypeApiEntitiesInstancesEntity_instance_uuidRelationshipsRelationship_type_uuidIncomingResource> spRelationshipTypeApiEntitiesInstancesEntity_instance_uuidRelationshipsRelationship_type_uuidIncomingResource = std::make_shared<RelationshipTypeApiEntitiesInstancesEntity_instance_uuidRelationshipsRelationship_type_uuidIncomingResource>();
	service->publish(spRelationshipTypeApiEntitiesInstancesEntity_instance_uuidRelationshipsRelationship_type_uuidIncomingResource);
	
	std::shared_ptr<RelationshipTypeApiEntitiesInstancesEntity_instance_uuidRelationshipsRelationship_type_uuidOutgoingResource> spRelationshipTypeApiEntitiesInstancesEntity_instance_uuidRelationshipsRelationship_type_uuidOutgoingResource = std::make_shared<RelationshipTypeApiEntitiesInstancesEntity_instance_uuidRelationshipsRelationship_type_uuidOutgoingResource>();
	service->publish(spRelationshipTypeApiEntitiesInstancesEntity_instance_uuidRelationshipsRelationship_type_uuidOutgoingResource);
	
}

RelationshipTypeApiRelationshipsTypesRelationship_type_uuidResource::RelationshipTypeApiRelationshipsTypesRelationship_type_uuidResource()
{
	this->set_path("/relationships/types/{relationship_type_uuid: .*}/");
	this->set_method_handler("POST",
		std::bind(&RelationshipTypeApiRelationshipsTypesRelationship_type_uuidResource::POST_method_handler, this,
			std::placeholders::_1));
	this->set_method_handler("DELETE",
		std::bind(&RelationshipTypeApiRelationshipsTypesRelationship_type_uuidResource::DELETE_method_handler, this,
			std::placeholders::_1));
	this->set_method_handler("GET",
		std::bind(&RelationshipTypeApiRelationshipsTypesRelationship_type_uuidResource::GET_method_handler, this,
			std::placeholders::_1));
}

RelationshipTypeApiRelationshipsTypesRelationship_type_uuidResource::~RelationshipTypeApiRelationshipsTypesRelationship_type_uuidResource()
{
}

void RelationshipTypeApiRelationshipsTypesRelationship_type_uuidResource::POST_method_handler(const std::shared_ptr<restbed::Session> session) {

	const auto request = session->get_request();
	// Body params are present, therefore we have to fetch them
	int content_length = request->get_header("Content-Length", 0);
	session->fetch(content_length,
		[ this ]( const std::shared_ptr<restbed::Session> session, const restbed::Bytes & body )
		{

			const auto request = session->get_request();
			std::string requestBody = restbed::String::format("%.*s\n", ( int ) body.size( ), body.data( ));
			/**
			 * Get body params or form params here from the requestBody string
			 */
			
			// Getting the path params
			const std::string relationshipTypeUuid = request->get_path_parameter("relationshipTypeUuid", "");
			

			
			// Change the value of this variable to the appropriate response before sending the response
			int status_code = 200;
			
			/**
			 * Process the received information here
			 */
			
			if (status_code == 200) {
				session->close(200, "The created or updated relationship type", { {"Connection", "close"} });
				return;
			}
			if (status_code == 0) {
				session->close(0, "unexpected error", { {"Connection", "close"} });
				return;
			}

		});
}

void RelationshipTypeApiRelationshipsTypesRelationship_type_uuidResource::DELETE_method_handler(const std::shared_ptr<restbed::Session> session) {

	const auto request = session->get_request();

			// Getting the path params
			const std::string relationshipTypeUuid = request->get_path_parameter("relationshipTypeUuid", "");
			

			
			// Change the value of this variable to the appropriate response before sending the response
			int status_code = 200;
			
			/**
			 * Process the received information here
			 */
			
			if (status_code == 200) {
				std::shared_ptr<EntitySystemMessage> response = NULL;
				session->close(200, "Success message", { {"Connection", "close"} });
				return;
			}
			if (status_code == 0) {
				std::shared_ptr<EntitySystemMessage> response = NULL;
				session->close(0, "unexpected error", { {"Connection", "close"} });
				return;
			}

}
void RelationshipTypeApiRelationshipsTypesRelationship_type_uuidResource::GET_method_handler(const std::shared_ptr<restbed::Session> session) {

	const auto request = session->get_request();

			// Getting the path params
			const std::string relationshipTypeUuid = request->get_path_parameter("relationshipTypeUuid", "");
			

			
			// Change the value of this variable to the appropriate response before sending the response
			int status_code = 200;
			
			/**
			 * Process the received information here
			 */
			
			if (status_code == 200) {
				std::shared_ptr<RelationshipType> response = NULL;
				session->close(200, "An relationship type", { {"Connection", "close"} });
				return;
			}
			if (status_code == 0) {
				std::shared_ptr<EntitySystemMessage> response = NULL;
				session->close(0, "unexpected error", { {"Connection", "close"} });
				return;
			}

}


RelationshipTypeApiRelationshipsTypesResource::RelationshipTypeApiRelationshipsTypesResource()
{
	this->set_path("/relationships/types/");
	this->set_method_handler("POST",
		std::bind(&RelationshipTypeApiRelationshipsTypesResource::POST_method_handler, this,
			std::placeholders::_1));
	this->set_method_handler("DELETE",
		std::bind(&RelationshipTypeApiRelationshipsTypesResource::DELETE_method_handler, this,
			std::placeholders::_1));
	this->set_method_handler("GET",
		std::bind(&RelationshipTypeApiRelationshipsTypesResource::GET_method_handler, this,
			std::placeholders::_1));
}

RelationshipTypeApiRelationshipsTypesResource::~RelationshipTypeApiRelationshipsTypesResource()
{
}

void RelationshipTypeApiRelationshipsTypesResource::POST_method_handler(const std::shared_ptr<restbed::Session> session) {

	const auto request = session->get_request();
	// Body params are present, therefore we have to fetch them
	int content_length = request->get_header("Content-Length", 0);
	session->fetch(content_length,
		[ this ]( const std::shared_ptr<restbed::Session> session, const restbed::Bytes & body )
		{

			const auto request = session->get_request();
			std::string requestBody = restbed::String::format("%.*s\n", ( int ) body.size( ), body.data( ));
			/**
			 * Get body params or form params here from the requestBody string
			 */
			
			

			
			// Change the value of this variable to the appropriate response before sending the response
			int status_code = 200;
			
			/**
			 * Process the received information here
			 */
			
			if (status_code == 200) {
				session->close(200, "The created relationship type", { {"Connection", "close"} });
				return;
			}
			if (status_code == 0) {
				session->close(0, "unexpected error", { {"Connection", "close"} });
				return;
			}

		});
}

void RelationshipTypeApiRelationshipsTypesResource::DELETE_method_handler(const std::shared_ptr<restbed::Session> session) {

	const auto request = session->get_request();

			

			
			// Change the value of this variable to the appropriate response before sending the response
			int status_code = 200;
			
			/**
			 * Process the received information here
			 */
			
			if (status_code == 200) {
				std::shared_ptr<EntitySystemMessage> response = NULL;
				session->close(200, "Success message", { {"Connection", "close"} });
				return;
			}
			if (status_code == 0) {
				std::shared_ptr<EntitySystemMessage> response = NULL;
				session->close(0, "unexpected error", { {"Connection", "close"} });
				return;
			}

}
void RelationshipTypeApiRelationshipsTypesResource::GET_method_handler(const std::shared_ptr<restbed::Session> session) {

	const auto request = session->get_request();

			

			
			// Change the value of this variable to the appropriate response before sending the response
			int status_code = 200;
			
			/**
			 * Process the received information here
			 */
			
			if (status_code == 200) {
				std::shared_ptr<RelationshipType> response = NULL;
				session->close(200, "Array of relationship types", { {"Connection", "close"} });
				return;
			}
			if (status_code == 0) {
				std::shared_ptr<EntitySystemMessage> response = NULL;
				session->close(0, "unexpected error", { {"Connection", "close"} });
				return;
			}

}


RelationshipTypeApiEntitiesTypesEntity_type_uuidRelationshipsIncomingResource::RelationshipTypeApiEntitiesTypesEntity_type_uuidRelationshipsIncomingResource()
{
	this->set_path("/entities/types/{entity_type_uuid: .*}/relationships/incoming/");
	this->set_method_handler("GET",
		std::bind(&RelationshipTypeApiEntitiesTypesEntity_type_uuidRelationshipsIncomingResource::GET_method_handler, this,
			std::placeholders::_1));
}

RelationshipTypeApiEntitiesTypesEntity_type_uuidRelationshipsIncomingResource::~RelationshipTypeApiEntitiesTypesEntity_type_uuidRelationshipsIncomingResource()
{
}

void RelationshipTypeApiEntitiesTypesEntity_type_uuidRelationshipsIncomingResource::GET_method_handler(const std::shared_ptr<restbed::Session> session) {

	const auto request = session->get_request();
			
			// Getting the path params
			const std::string entityTypeUuid = request->get_path_parameter("entityTypeUuid", "");
			

			
			// Change the value of this variable to the appropriate response before sending the response
			int status_code = 200;
			
			/**
			 * Process the received information here
			 */
			
			if (status_code == 200) {
				session->close(200, "The incoming relationship types", { {"Connection", "close"} });
				return;
			}
			if (status_code == 0) {
				session->close(0, "unexpected error", { {"Connection", "close"} });
				return;
			}

}



RelationshipTypeApiEntitiesTypesEntity_type_uuidRelationshipsOutgoingResource::RelationshipTypeApiEntitiesTypesEntity_type_uuidRelationshipsOutgoingResource()
{
	this->set_path("/entities/types/{entity_type_uuid: .*}/relationships/outgoing/");
	this->set_method_handler("GET",
		std::bind(&RelationshipTypeApiEntitiesTypesEntity_type_uuidRelationshipsOutgoingResource::GET_method_handler, this,
			std::placeholders::_1));
}

RelationshipTypeApiEntitiesTypesEntity_type_uuidRelationshipsOutgoingResource::~RelationshipTypeApiEntitiesTypesEntity_type_uuidRelationshipsOutgoingResource()
{
}

void RelationshipTypeApiEntitiesTypesEntity_type_uuidRelationshipsOutgoingResource::GET_method_handler(const std::shared_ptr<restbed::Session> session) {

	const auto request = session->get_request();
			
			// Getting the path params
			const std::string entityTypeUuid = request->get_path_parameter("entityTypeUuid", "");
			

			
			// Change the value of this variable to the appropriate response before sending the response
			int status_code = 200;
			
			/**
			 * Process the received information here
			 */
			
			if (status_code == 200) {
				session->close(200, "The outgoing relationship types", { {"Connection", "close"} });
				return;
			}
			if (status_code == 0) {
				session->close(0, "unexpected error", { {"Connection", "close"} });
				return;
			}

}



RelationshipTypeApiEntitiesInstancesEntity_instance_uuidRelationshipsRelationship_type_uuidResource::RelationshipTypeApiEntitiesInstancesEntity_instance_uuidRelationshipsRelationship_type_uuidResource()
{
	this->set_path("/entities/instances/{entity_instance_uuid: .*}/relationships/{relationship_type_uuid: .*}/");
	this->set_method_handler("GET",
		std::bind(&RelationshipTypeApiEntitiesInstancesEntity_instance_uuidRelationshipsRelationship_type_uuidResource::GET_method_handler, this,
			std::placeholders::_1));
}

RelationshipTypeApiEntitiesInstancesEntity_instance_uuidRelationshipsRelationship_type_uuidResource::~RelationshipTypeApiEntitiesInstancesEntity_instance_uuidRelationshipsRelationship_type_uuidResource()
{
}

void RelationshipTypeApiEntitiesInstancesEntity_instance_uuidRelationshipsRelationship_type_uuidResource::GET_method_handler(const std::shared_ptr<restbed::Session> session) {

	const auto request = session->get_request();
			
			// Getting the path params
			const std::string entityInstanceUuid = request->get_path_parameter("entityInstanceUuid", "");
			const std::string relationshipTypeUuid = request->get_path_parameter("relationshipTypeUuid", "");
			

			
			// Change the value of this variable to the appropriate response before sending the response
			int status_code = 200;
			
			/**
			 * Process the received information here
			 */
			
			if (status_code == 200) {
				session->close(200, "Array of relationship instances", { {"Connection", "close"} });
				return;
			}
			if (status_code == 0) {
				session->close(0, "unexpected error", { {"Connection", "close"} });
				return;
			}

}



RelationshipTypeApiEntitiesTypesEntity_type_uuidRelationshipsResource::RelationshipTypeApiEntitiesTypesEntity_type_uuidRelationshipsResource()
{
	this->set_path("/entities/types/{entity_type_uuid: .*}/relationships/");
	this->set_method_handler("GET",
		std::bind(&RelationshipTypeApiEntitiesTypesEntity_type_uuidRelationshipsResource::GET_method_handler, this,
			std::placeholders::_1));
}

RelationshipTypeApiEntitiesTypesEntity_type_uuidRelationshipsResource::~RelationshipTypeApiEntitiesTypesEntity_type_uuidRelationshipsResource()
{
}

void RelationshipTypeApiEntitiesTypesEntity_type_uuidRelationshipsResource::GET_method_handler(const std::shared_ptr<restbed::Session> session) {

	const auto request = session->get_request();
			
			// Getting the path params
			const std::string entityTypeUuid = request->get_path_parameter("entityTypeUuid", "");
			

			
			// Change the value of this variable to the appropriate response before sending the response
			int status_code = 200;
			
			/**
			 * Process the received information here
			 */
			
			if (status_code == 200) {
				session->close(200, "The incoming and outgoing relationship types", { {"Connection", "close"} });
				return;
			}
			if (status_code == 0) {
				session->close(0, "unexpected error", { {"Connection", "close"} });
				return;
			}

}



RelationshipTypeApiEntitiesInstancesEntity_instance_uuidRelationshipsRelationship_type_uuidIncomingResource::RelationshipTypeApiEntitiesInstancesEntity_instance_uuidRelationshipsRelationship_type_uuidIncomingResource()
{
	this->set_path("/entities/instances/{entity_instance_uuid: .*}/relationships/{relationship_type_uuid: .*}/incoming/");
	this->set_method_handler("GET",
		std::bind(&RelationshipTypeApiEntitiesInstancesEntity_instance_uuidRelationshipsRelationship_type_uuidIncomingResource::GET_method_handler, this,
			std::placeholders::_1));
}

RelationshipTypeApiEntitiesInstancesEntity_instance_uuidRelationshipsRelationship_type_uuidIncomingResource::~RelationshipTypeApiEntitiesInstancesEntity_instance_uuidRelationshipsRelationship_type_uuidIncomingResource()
{
}

void RelationshipTypeApiEntitiesInstancesEntity_instance_uuidRelationshipsRelationship_type_uuidIncomingResource::GET_method_handler(const std::shared_ptr<restbed::Session> session) {

	const auto request = session->get_request();
			
			// Getting the path params
			const std::string entityInstanceUuid = request->get_path_parameter("entityInstanceUuid", "");
			const std::string relationshipTypeUuid = request->get_path_parameter("relationshipTypeUuid", "");
			

			
			// Change the value of this variable to the appropriate response before sending the response
			int status_code = 200;
			
			/**
			 * Process the received information here
			 */
			
			if (status_code == 200) {
				session->close(200, "Array of relationship instances", { {"Connection", "close"} });
				return;
			}
			if (status_code == 0) {
				session->close(0, "unexpected error", { {"Connection", "close"} });
				return;
			}

}



RelationshipTypeApiEntitiesInstancesEntity_instance_uuidRelationshipsRelationship_type_uuidOutgoingResource::RelationshipTypeApiEntitiesInstancesEntity_instance_uuidRelationshipsRelationship_type_uuidOutgoingResource()
{
	this->set_path("/entities/instances/{entity_instance_uuid: .*}/relationships/{relationship_type_uuid: .*}/outgoing/");
	this->set_method_handler("GET",
		std::bind(&RelationshipTypeApiEntitiesInstancesEntity_instance_uuidRelationshipsRelationship_type_uuidOutgoingResource::GET_method_handler, this,
			std::placeholders::_1));
}

RelationshipTypeApiEntitiesInstancesEntity_instance_uuidRelationshipsRelationship_type_uuidOutgoingResource::~RelationshipTypeApiEntitiesInstancesEntity_instance_uuidRelationshipsRelationship_type_uuidOutgoingResource()
{
}

void RelationshipTypeApiEntitiesInstancesEntity_instance_uuidRelationshipsRelationship_type_uuidOutgoingResource::GET_method_handler(const std::shared_ptr<restbed::Session> session) {

	const auto request = session->get_request();
			
			// Getting the path params
			const std::string entityInstanceUuid = request->get_path_parameter("entityInstanceUuid", "");
			const std::string relationshipTypeUuid = request->get_path_parameter("relationshipTypeUuid", "");
			

			
			// Change the value of this variable to the appropriate response before sending the response
			int status_code = 200;
			
			/**
			 * Process the received information here
			 */
			
			if (status_code == 200) {
				session->close(200, "Array of relationship instances", { {"Connection", "close"} });
				return;
			}
			if (status_code == 0) {
				session->close(0, "unexpected error", { {"Connection", "close"} });
				return;
			}

}




}
}
}
}

