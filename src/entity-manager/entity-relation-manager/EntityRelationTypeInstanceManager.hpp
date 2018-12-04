// Inexor entity system prototype
// (c)2018 Inexor

#pragma once

#include "../entity-relation-manager/entity-relation-type-instance/EntityRelationTypeInstance.hpp"
#include "../../templates/TypeInstanceManager.hpp"


namespace inexor {
namespace entity_system {


	/// A manager class for instances of entity relation types.
    class EntityRelationTypeInstanceManager : public TypeInstanceManager<EntityRelationTypeInstance>
    {
        protected:
            
			/// Constructor.
            EntityRelationTypeInstanceManager();

			/// Destructor.
			~EntityRelationTypeInstanceManager();

		public:
		
			/// Creates a new entity relation type instance.
			/// @param ent_rel_type A const reference to a shared pointer of
			/// an entity relation type of which an instance will be created.
			/// @param ent_type_inst_source A const reference to a shared pointer of
			/// the entity type instance which will be used as <b>source</b> entity type instance.
			/// @param ent_type_inst_target A const reference to a shared pointer of
			/// the entity type instance which will be used as <b>target</b> entity type instance.
			/// @return A shared pointer to the new entity relation type instance which was created.
			/// <br>If This method fails, entity relation type instance 'error' will be returned.
			ENT_REL_TYPE_INST create_entity_relation_type_instance(const ENT_REL_TYPE&,
				                                                   const ENT_TYPE_INST&,
				                                                   const ENT_TYPE_INST&);

			/// Returns the number of relation type instances.
			/// @return The number of existing entity relation type instances.
			const std::size_t get_relation_type_instances_count() const;

			// TODO: Get instances count.
			// TODO: Delete instance.
			// TODO: Get instance(s).
			// TODO: Delete all instances.

    };


};
};
