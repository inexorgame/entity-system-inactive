// Inexor entity system
// (c)2018 Inexor

#pragma once

#include "entity-system/managers/entities/entity-type-builder-manager/EntityTypeBuilderManager.hpp"
#include "entity-system/providers/entities/entity-type-provider/EntityTypeProvider.hpp"

using namespace inexor::entity_system;
using namespace std;

namespace inexor {
namespace entity_system {
namespace type_system {

	/// @class FloatConstantEntityTypeProvider
    /// @brief Provides the entity type FLOAT_CONSTANT.
	class FloatConstantEntityTypeProvider : public EntityTypeProvider
	{
		public:

			/// Constructor.
			FloatConstantEntityTypeProvider(
				shared_ptr<EntityTypeBuilderManager> entity_type_builder_manager
			) : EntityTypeProvider(
				entity_type_builder_manager,
				"FLOAT_CONSTANT",
				{
					{ "float_constant_name", DataType::STRING },
					{ "float_constant_value", DataType::FLOAT }
				},
				{
					{ "float_constant_name", 1 << Feature::OUTPUT },
					{ "float_constant_value", 1 << Feature::OUTPUT | 1 << Feature::INPUT }
				}
			) {};

			/// Destructor.
			~FloatConstantEntityTypeProvider() {};

	};

}
}
}
