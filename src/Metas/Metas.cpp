#include <Metas/Handlers/Handlers.hpp>
#include <Metas/Metas.hpp>
#include <Metas/Modules/Heater/Heater.hpp>
#include <Metas/Sensors/DHT/DHT.hpp>

namespace Metas
{
    Modules::Heater heater1(1, true);
    Sensors::DHT dht1(2, DHT22);

    void Metas::setup()
    {
        Handlers::setup();
    }

    void Metas::handle()
    {
        dht1.handle(Handlers::DHT1);
        heater1.handle(Handlers::getData().getCurrentTemp(), Handlers::getData().getRequestTemp());
    }
}