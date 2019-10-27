#pragma once

#include "type-system/factories/inout/mouse/GlobalMouseButtonFactory.hpp"

#include <memory>

namespace inexor::entity_system::type_system {

using GlobalMouseButtonFactoryPtr = std::shared_ptr<GlobalMouseButtonFactory>;

/// @class MouseFactories
/// @brief The factories for mouse input.
class MouseFactories
{
    public:
    /// @brief Constructs the factories for mouse input.
    /// @note The dependencies of this class will be injected automatically.
    /// @param global_mouse_button_factory Factory for creating entity instances of type 'GLOBAL_MOUSE_BUTTON'.
    MouseFactories(GlobalMouseButtonFactoryPtr global_mouse_button_factory);

    /// Destructor.
    ~MouseFactories();

    /// Initializes the factories for mouse input.
    void init();

    /// Returns the factory for entities of type 'GLOBAL_MOUSE_BUTTON'.
    GlobalMouseButtonFactoryPtr get_global_mouse_button_factory();

    private:
    /// Factory for creating entity instances of type 'GLOBAL_MOUSE_BUTTON'.
    GlobalMouseButtonFactoryPtr global_mouse_button_factory;
};

} // namespace inexor::entity_system::type_system
