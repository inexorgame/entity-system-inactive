#include "CounterFloatFactory.hpp"

#include <utility>

namespace inexor::entity_system::type_system {

CounterFloatFactory::CounterFloatFactory(CounterFloatEntityTypeProviderPtr entity_type_provider, EntityInstanceBuilderFactoryPtr entity_instance_builder_factory)
{
    this->entity_type_provider = std::move(entity_type_provider);
    this->entity_instance_builder_factory = std::move(entity_instance_builder_factory);
}

CounterFloatFactory::~CounterFloatFactory() = default;

void CounterFloatFactory::init()
{
}

EntityInstancePtrOpt CounterFloatFactory::create_instance()
{
    return entity_instance_builder_factory->get_builder()
        ->type(entity_type_provider->get_type())
        ->attribute(CounterFloatEntityTypeProvider::COUNTER_FLOAT_MILLIS, 1000)
        ->attribute(CounterFloatEntityTypeProvider::COUNTER_FLOAT_STEP, 1.0f)
        ->attribute(CounterFloatEntityTypeProvider::COUNTER_FLOAT_RESET, false)
        ->attribute(CounterFloatEntityTypeProvider::COUNTER_FLOAT_COUNT, 0.0f)
        ->build();
}

EntityInstancePtrOpt CounterFloatFactory::create_instance(int millis, float step)
{
    return entity_instance_builder_factory->get_builder()
        ->type(entity_type_provider->get_type())
        ->attribute(CounterFloatEntityTypeProvider::COUNTER_FLOAT_MILLIS, millis)
        ->attribute(CounterFloatEntityTypeProvider::COUNTER_FLOAT_STEP, step)
        ->attribute(CounterFloatEntityTypeProvider::COUNTER_FLOAT_RESET, false)
        ->attribute(CounterFloatEntityTypeProvider::COUNTER_FLOAT_COUNT, 0.0f)
        ->build();
}

EntityInstancePtrOpt CounterFloatFactory::create_instance(int millis, float step, float start_value)
{
    return entity_instance_builder_factory->get_builder()
        ->type(entity_type_provider->get_type())
        ->attribute(CounterFloatEntityTypeProvider::COUNTER_FLOAT_MILLIS, millis)
        ->attribute(CounterFloatEntityTypeProvider::COUNTER_FLOAT_STEP, step)
        ->attribute(CounterFloatEntityTypeProvider::COUNTER_FLOAT_RESET, false)
        ->attribute(CounterFloatEntityTypeProvider::COUNTER_FLOAT_COUNT, start_value)
        ->build();
}

} // namespace inexor::entity_system::type_system
