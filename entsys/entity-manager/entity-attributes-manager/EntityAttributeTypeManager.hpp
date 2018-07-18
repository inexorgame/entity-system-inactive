// Inexor entity system prototype
// (c)2018 Inexor

#ifndef INEXOR_ENTSYS_ENTITY_ATTRIBUTE_TYPE_MANAGER_CLASS_HEADER
#define INEXOR_ENTSYS_ENTITY_ATTRIBUTE_TYPE_MANAGER_CLASS_HEADER

#include <string>
#include <unordered_map>
#include "entity-attribute-type\base\EntityAttributeTypeBase.hpp"
#include "../../return-codes/ReturnCodes.hpp"

namespace inexor {
namespace entsys {
        
    /// 
    /// 
    class EntityAttributeTypeManager
    {
        protected:
            /// In this unordered map all available types of entity attributes will be stored.
            std::unordered_map<std::string, EntityAttributeTypeBase> entity_attribute_types;

        public:
            EntityAttributeTypeManager();
            ~EntityAttributeTypeManager();

            /// This method adds new types of attributes of entities.
            /// Entity attribute type instances can only be created from existing valid 
            /// entity attribute types by the entity attribute instance manager.
            const ENTSYS_RETURN_CODE create_entity_attribute_type(const EntityAttributeTypeBase&);

            /// This method returns the number of existing types of entity attributes available in the entity system.
            const size_t get_entity_attribute_type_cound() const;
    };

};
};

#endif // INEXOR_ENTSYS_ENTITY_ATTRIBUTE_TYPE_MANAGER_CLASS_HEADER
