// Inexor entity system prototype
// (c)2018 Inexor

#ifndef INEXOR_ENTSYS_ENTITY_TYPE_BASE_CLASS_HEADER
#define INEXOR_ENTSYS_ENTITY_TYPE_BASE_CLASS_HEADER

#include <string>
#include <unordered_map>
#include "../../../../return-codes/ReturnCodes.hpp"
#include "../../../entity-attributes-manager/entity-attribute-type/EntityAttributeType.hpp"

namespace inexor {
namespace entsys {

    /// Type definitions to shorten source code parts.
    typedef std::unordered_map<std::string, EntityAttributeType> ENTSYS_ENTITY_ATTRIBUTE_TYPE_MAP;

    /// \class EntityTypeBase
    /// \brief A base class for entity types.
    class EntityTypeBase
    {
        private:
            // TODO: DISCUSS: This this a good design pattern?
            // or should we let the entity attribute type instance manager
            // decide which instances of entity attribute types exist?
            ENTSYS_ENTITY_ATTRIBUTE_TYPE_MAP entity_attribute_types;

        protected:
            
            // Every entity has at least the following attributes.
            std::string entity_type_name;
            bool finished;

            // Additional data here which act as attributes as well but are hard coded.

            // TODO: Attributes here?

        public:
            EntityTypeBase();
            EntityTypeBase(const std::string&);
            ~EntityTypeBase();

            const ENTSYS_RETURN_CODE set_name(const std::string&);
            const std::string& get_name() const;

            // TODO: DISCUSS: This this a good design pattern?
            // or should we let the entity attribute type instance manager
            // decide which instances of entity attribute types exist?
            const ENTSYS_RETURN_CODE install_attribute_type(const EntityAttributeType&);

            const bool is_finished() const;
            const ENTSYS_RETURN_CODE finish_entity_type();


    };

};
};

#endif // INEXOR_ENTSYS_ENTITY_TYPE_BASE_CLASS_HEADER