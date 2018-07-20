// Inexor entity system prototype
// (c)2018 Inexor

#include "EntityAttributeTypeManager.hpp"

namespace inexor {
namespace entsys {

    EntityAttributeTypeManager::EntityAttributeTypeManager()
    {
    }

    EntityAttributeTypeManager::~EntityAttributeTypeManager()
    {
    }

    const size_t EntityAttributeTypeManager::get_entity_attribute_type_cound() const
    {
        return map_of_entity_attribute_types.size();
    }

    const ENTSYS_RETURN_CODE EntityAttributeTypeManager::add_entity_attribute_type(const EntityAttributeType&)
    {
        // TODO
        return ENTSYS_RETURN_ERROR;
    }

};
};