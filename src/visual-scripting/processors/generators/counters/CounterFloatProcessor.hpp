#pragma once

#include "entity-system/model/data/container/DataContainer.hpp"
#include "entity-system/model/data/DataTypes.hpp"
#include "entity-system/model/entities/entity-instances/EntityInstance.hpp"
#include "entity-system/managers/entities/entity-instance-manager/EntityInstanceManager.hpp"
#include "type-system/providers/generators/counters/CounterFloatEntityTypeProvider.hpp"
#include "visual-scripting/managers/ProcessorRegistry.hpp"
#include "visual-scripting/model/Processor.hpp"
#include "logging/managers/LogManager.hpp"

#include "react/Event.h"

using namespace react;

namespace inexor {
namespace visual_scripting {

	using CounterFloatEntityTypeProviderPtr = std::shared_ptr<entity_system::type_system::CounterFloatEntityTypeProvider>;
	using EntityInstanceManagerPtr = std::shared_ptr<entity_system::EntityInstanceManager>;
	using LogManagerPtr = std::shared_ptr<inexor::logging::LogManager>;
	using EntityInstancePtr = std::shared_ptr<entity_system::EntityInstance>;

    /// @class CounterFloatProcessor
	/// @brief Processor which listens on the creation of entity instances of type COUNTER_FLOAT.
    /// @note Newly created entity instances of type COUNTER_FLOAT will be initialized by connecting
    /// the input attributes with a calculation function and the result with the output attribute.
    class CounterFloatProcessor
    	: public Processor,
		  public entity_system::EntityInstanceCreatedListener,
		  public entity_system::EntityInstanceDeletedListener,
		  public std::enable_shared_from_this<CounterFloatProcessor>
    {

		public:

            /// 
    		USING_REACTIVE_DOMAIN(entity_system::D)

    		/// @brief Constructs the COUNTER_FLOAT processor which listens on the creation of entity instances of type COUNTER_FLOAT.
            /// @note The dependencies of this class will be injected automatically.
            /// @note Newly created entity instances of type COUNTER_FLOAT will be initialized by connecting the input attributes with
            /// a calculation function and the result with the output attribute.
            /// @param entity_type_provider The entity type provider for this processor.
            /// @param entity_instance_manager The entity instance manager.
            /// @param log_manager The log manager.
			CounterFloatProcessor(
				CounterFloatEntityTypeProviderPtr entity_type_provider,
				EntityInstanceManagerPtr entity_instance_manager,
				LogManagerPtr log_manager
			);

            /// Destructor.
			~CounterFloatProcessor();

			/// Initializes the COUNTER_FLOAT processor by registering listeners on newly created entity instances of type COUNTER_FLOAT.
			void init();

			/// Shut down all threads of this processor.
			void shutdown();

			/// @brief Called when an entity instance of type COUNTER_FLOAT has been created.
            /// @param entity_instance ?
			void on_entity_instance_created(EntityInstancePtr entity_instance);

			/// @brief Called when an entity instance of type COUNTER_FLOAT has been deleted.
            /// @param type_GUID ?
            /// @param inst_GUID ?
			void on_entity_instance_deleted(const xg::Guid& type_GUID, const xg::Guid& inst_GUID);

			/// @brief Initialization of the processor signals.
            /// @param entity_instance ?
			void make_signals(const EntityInstancePtr& entity_instance);

		private:

			/// The entity type provider for this processor.
			CounterFloatEntityTypeProviderPtr entity_type_provider;

			/// The entity instance manager.
			EntityInstanceManagerPtr entity_instance_manager;

			/// The log manager.
			LogManagerPtr log_manager;

			/// The running state of the thread.
			std::unordered_map<xg::Guid, bool> running;

			/// The signals per entity instance.
			std::unordered_map<xg::Guid, SignalT<entity_system::DataValue>> signals;

			/// The event sources per entity instance.
			std::unordered_map<xg::Guid, EventSourceT<int>> event_sources;

			/// The ticks per entity instance.
			std::unordered_map<xg::Guid, SignalT<int>> ticks;

			/// The logger name of this processor.
			static constexpr char LOGGER_NAME[] = "inexor.vs.g.c.cfloat";

    };

}
}
