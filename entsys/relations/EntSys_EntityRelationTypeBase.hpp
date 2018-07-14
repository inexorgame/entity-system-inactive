// Inexor entity system prototype
// (c)2018 Inexor

#ifndef INEXOR_ENTSYS_RELATION_TYPE_BASE_HEADER
#define INEXOR_ENTSYS_RELATION_TYPE_BASE_HEADER

#include <vector>
#include <string>

#include "EntSys_EntityRelationTypeContext.hpp"

namespace inexor {
namespace entsys {

    class CEntityRelationTypeBase
    {
        private:

            std::vector<CEntityRelationContext> entity_relation;

            // TODO: data container here

        public:

            CEntityRelationTypeBase();        
            ~CEntityRelationTypeBase();        
    };

};
};

#endif // INEXOR_ENTSYS_RELATION_TYPE_BASE_HEADER