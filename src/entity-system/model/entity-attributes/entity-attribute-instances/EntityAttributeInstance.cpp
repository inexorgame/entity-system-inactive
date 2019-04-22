#include "EntityAttributeInstance.hpp"

namespace inexor {
namespace entity_system {

	EntityAttributeInstance::EntityAttributeInstance(const EntityAttributeTypePtr& ent_attr_type)
		: InstanceBase<EntityAttributeType>(ent_attr_type),
		DataContainer(ent_attr_type->get_attribute_data_type())
	{
		this->type = ent_attr_type->get_attribute_data_type();
	}

	EntityAttributeInstance::~EntityAttributeInstance()
	{
	}

	EntityAttributeTypePtr EntityAttributeInstance::get_entity_attribute_type() const
	{
		return get_type();
	}

	void EntityAttributeInstance::set_own_value(DataValue value)
	{
		own_value.Set(value);
	}

	void EntityAttributeInstance::toggle()
	{
		own_value.Set(!std::get<DataType::BOOL>(value.Value()));
	}

}
}
