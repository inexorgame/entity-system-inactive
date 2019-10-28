#include "AddIntProcessor.hpp"

#include <utility>

namespace inexor::visual_scripting {

using namespace inexor::entity_system;
using namespace inexor::entity_system::type_system;
using EntityAttributeInstancePtrOptional = std::optional<std::shared_ptr<EntityAttributeInstance>>;

AddIntProcessor::AddIntProcessor(const AddIntEntityTypeProviderPtr &entity_type_provider, EntityInstanceManagerPtr entity_instance_manager, LogManagerPtr log_manager)
    : Processor(entity_type_provider->get_type()), entity_type_provider(entity_type_provider), entity_instance_manager(std::move(entity_instance_manager)), log_manager(std::move(log_manager))
{
}

AddIntProcessor::~AddIntProcessor() = default;

void AddIntProcessor::init()
{
    log_manager->register_logger(LOGGER_NAME);
    entity_instance_manager->register_on_created(entity_type_provider->get_type()->get_GUID(), shared_from_this());
    entity_instance_manager->register_on_deleted(entity_type_provider->get_type()->get_GUID(), shared_from_this());
}

void AddIntProcessor::on_entity_instance_created(EntityInstancePtr entity_instance)
{
    make_signals(entity_instance);
}

void AddIntProcessor::on_entity_instance_deleted(const xg::Guid &type_GUID, const xg::Guid &inst_GUID)
{
    // Disconnect observers with execution method
    // Delete observer for each input atttribute of the entity instance
    // TODO: remove / clear signal
    // signals[inst_GUID].clear
}

void AddIntProcessor::make_signals(const EntityInstancePtr &entity_instance)
{
    spdlog::get(LOGGER_NAME)->debug("Initializing processor ADD_INT for newly created entity instance {} of type {}", entity_instance->get_GUID().str(), entity_instance->get_entity_type()->get_type_name());

    auto o_augend = entity_instance->get_attribute_instance(AddIntEntityTypeProvider::ADD_INT_AUGEND);
    auto o_addend = entity_instance->get_attribute_instance(AddIntEntityTypeProvider::ADD_INT_ADDEND);
    auto o_sum = entity_instance->get_attribute_instance(AddIntEntityTypeProvider::ADD_INT_SUM);

    if (o_augend.has_value() && o_addend.has_value() && o_sum.has_value())
    {
        signals[entity_instance->get_GUID()] =
            MakeSignal(With(o_augend.value()->value, o_addend.value()->value), [](DataValue augend, DataValue addend) { return DataValue(std::get<DataType::INT>(augend) + std::get<DataType::INT>(addend)); });
        o_sum.value()->value = signals[entity_instance->get_GUID()];
    } else
    {
        spdlog::get(LOGGER_NAME)
            ->error("Failed to initialize processor signals for entity instance {} of type {}: Missing one of these attributes: {} {} {}", entity_instance->get_GUID().str(), entity_instance->get_entity_type()->get_type_name(),
                    AddIntEntityTypeProvider::ADD_INT_AUGEND, AddIntEntityTypeProvider::ADD_INT_ADDEND, AddIntEntityTypeProvider::ADD_INT_SUM);
    }
}

} // namespace inexor::visual_scripting
