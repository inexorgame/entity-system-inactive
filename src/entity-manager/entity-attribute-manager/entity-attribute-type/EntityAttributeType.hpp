// Inexor entity system prototype
// (c)2018 Inexor

#pragma once

#include <string>
#include <vector>
#include <unordered_map>

#include "../../../return-codes/ReturnCodes.hpp"
#include "../../../base-classes/TypeBase.hpp"
#include "../../../base-classes/AttributeBase.hpp"


namespace inexor {
namespace entity_system {
    

	/// A base class for types of entity attributes.
    class EntityAttributeType : public TypeBase, public AttributeBase
    {
        public:
				
			/// Constructor.
			/// @param ent_attr_type_name The name of the new entity attribute type.
			/// @param ent_attr_data_type The data type of the new entity attribute type.
			EntityAttributeType(const std::string&, const ENTSYS_DATA_TYPE&);

			/// Destructor.
			~EntityAttributeType();

			/// 
			virtual ENTSYS_DATA_VALIDATION_RESULT validate() override;

	};


};
};
