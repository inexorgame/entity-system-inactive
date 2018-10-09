// Inexor entity system prototype
// (c)2018 Inexor

#include "EntityType.hpp"


namespace inexor {
namespace entity_system {
    

    EntityType::EntityType(const std::string& ent_type_name)
    {
		set_type_name(ent_type_name);
	}


	EntityType::~EntityType()
	{
	}
	

	std::size_t EntityType::get_linked_attributes_count() const
	{
		return linked_attributes.size();
	}


	ENTSYS_DATA_VALIDATION_RESULT EntityType::validate()
	{
		if(get_type_name().empty()) return ENTSYS_DATA_INVALID_ENTITY_TYPE_NAME_UNDEFINED;
		// TODO: Add more neccesary data validation here.
		return ENTSYS_DATA_VALID;
	}


	bool EntityType::has_attribute_type(const std::string& ent_attr_type_name)
	{
		// TODO: Check how expensive this method is!
		bool entity_attribute_type_found = false;

		std::string name1 = ent_attr_type_name;
		std::string name2 = "";

		for(std::size_t i=0; i< linked_attributes.size(); i++)
		{
			name2 = linked_attributes[i]->get_type_name();

			// Check if we can find this entity attribute type by name.
			// This would mean it is already linked to the entity type!
			if(0 == std::strcmp(name1.c_str(), name2.c_str()))
			{
				entity_attribute_type_found = true;
				break;
			}
		}

		return entity_attribute_type_found;
	}
	

	bool EntityType::has_attribute_type(const std::shared_ptr<EntityAttributeType>& ent_attr_type)
	{
		return has_attribute_type(ent_attr_type->get_type_name());
	}


	void EntityType::reset_linked_attribute_types()
	{
		linked_attributes.clear();
	}


	ENTSYS_RESULT EntityType::link_attribute_type(const std::shared_ptr<EntityAttributeType>& ent_attr_type)
	{
		std::string entity_attribute_type_name = ent_attr_type->get_type_name();

		if(!has_attribute_type(entity_attribute_type_name))
		{
			// The entity attribute type is
			// not already linked to this entity type.
			// Link entity attribute type to entity type!
			linked_attributes.push_back(ent_attr_type);

			return ENTSYS_SUCCESS;
		}

		return ENTSYS_ERROR;
	}


	const std::vector<std::shared_ptr<EntityAttributeType>> EntityType::get_linked_attribute_types() const
	{
		return linked_attributes;
	}


};
};
