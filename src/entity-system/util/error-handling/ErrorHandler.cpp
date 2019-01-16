// Inexor entity system
// (c)2018-2019 Inexor

#include "ErrorHandler.hpp"


namespace inexor {
namespace entity_system {


	void EntitySystemErrorHandler::entsys_message(const ENTSYS_ERROR_LEVEL& level, const std::string& param_error_message)
	{
		// TODO: Link your logger here.
        // TODO: Add mutex here (?)
		std::cout << param_error_message << std::endl;
	}


	EntitySystemErrorHandler::EntitySystemErrorHandler()
	{
		// TODO: Implement!
	}

	
	EntitySystemErrorHandler::~EntitySystemErrorHandler()
	{
		// TODO: Implement!
	}


};
};