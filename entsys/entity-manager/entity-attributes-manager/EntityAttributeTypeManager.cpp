// Inexor entity system prototype
// (c)2018 Inexor

#include "EntityAttributeTypeManager.hpp"
#include "../../EntitySystem.hpp"


namespace inexor {
namespace entity_system {


	extern std::shared_ptr<EntitySystem> entsys;


    EntityAttributeTypeManager::EntityAttributeTypeManager()
    {
		entity_attribute_type_error = std::make_shared<EntityAttributeType>("ERROR", ENTSYS_DATA_TYPE_UNDEFINED);
    }


    EntityAttributeTypeManager::~EntityAttributeTypeManager()
    {
    }


	bool EntityAttributeTypeManager::does_entity_attribute_type_exist(const std::string& ent_attr_type_name)
	{
		return does_type_exist(ent_attr_type_name);
	}


	bool EntityAttributeTypeManager::does_entity_attribute_type_exist(const std::shared_ptr<EntityAttributeType>& ent_attr_type)
	{
		return does_entity_attribute_type_exist(ent_attr_type->get_type_name());
	}


	std::shared_ptr<EntityAttributeType> EntityAttributeTypeManager::create_entity_attribute_type(const std::string& ent_attr_type_name,
		                                                                                          const ENTSYS_DATA_TYPE& ent_attr_data_type)
	{
		// Check if entity attribute type's name is not empty.
		if(! is_new_type_name_valid(ent_attr_type_name)) return entity_attribute_type_error;

		// Create entity attribute type.
		std::shared_ptr<EntityAttributeType> new_ent_attr_type
			= entsys->create_entity_attribute_type(ent_attr_type_name, ent_attr_data_type);
		
		// Add new entity attribute type to the global map.
		add_type_to_map(ent_attr_type_name, new_ent_attr_type);

		return new_ent_attr_type;
	}


	const std::size_t EntityAttributeTypeManager::get_entity_attribute_type_count() const
	{
		return get_type_count();
	}


	void EntityAttributeTypeManager::delete_entity_attribute_type(const std::string& ent_attr_type)
	{
		delete_type(ent_attr_type);
	}


	void EntityAttributeTypeManager::delete_entity_attribute_type(const std::shared_ptr<EntityAttributeType>& ent_attr_type)
	{
		delete_type(ent_attr_type->get_type_name());
	}


	void EntityAttributeTypeManager::delete_all_entity_attribute_types()
	{
		delete_all_types();
	}


};
};
