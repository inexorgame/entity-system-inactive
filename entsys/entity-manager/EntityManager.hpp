// Inexor entity system prototype
// (c)2018 Inexor

#ifndef INEXOR_ENTSYS_ENTITY_MANAGER_CLASS_HEADER
#define INEXOR_ENTSYS_ENTITY_MANAGER_CLASS_HEADER

#include <vector>

#include "entity-types-manager\EntityTypeInstanceManager.hpp"

namespace inexor {
namespace entsys {

    /// \class CEntityManager
    /// \brief The entity manager class is responsible for adding, modifying and removing entites.
    class CEntityManager : public CEntityTypeInstanceManager
    {
        public:

            CEntityManager();
            ~CEntityManager();

    };

};
};


#endif // INEXOR_ENTSYS_ENTITY_MANAGER_CLASS_HEADER
