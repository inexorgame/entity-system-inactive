#pragma once

#include "entity-system/model/relation-attributes/relation-attribute-types/RelationAttributeType.hpp"
#include "entity-system/model/base/instance/Instance.hpp"
#include "entity-system/model/data/container/DataContainer.hpp"
#include "entity-system/util/uuid/GUIDBase.hpp"

namespace inexor {
namespace entity_system {

	using RelationAttributeTypePtr = std::shared_ptr<RelationAttributeType>;

	/// A base class for relation attribute type instances
	class RelationAttributeInstance : public InstanceBase<RelationAttributeType>, public DataContainer, public GUIDBase
	{
		public:

			/// Constructor.
			/// @param rel_attr_type A const reference to a shared pointer of
			/// an relation attribute type of which an instance will be created.
			/// @note the GUID of the new relation attribute instance will
			/// be created automatically by the inheritance of GUIDBase!
			RelationAttributeInstance(const RelationAttributeTypePtr&);

			/// Destructor.
			~RelationAttributeInstance();

            /// @brief Get the relation attribute type.
            /// @return The type of the attribute.
			RelationAttributeTypePtr get_relation_attribute_type() const;

			// Note: Set and get methods are already implemented by inheriting from DataContainer.

	};

}
}
