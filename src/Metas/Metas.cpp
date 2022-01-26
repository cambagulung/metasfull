#include <Metas/Data/Data.hpp>
#include <Metas/Metas.hpp>
#include <Metas/Modules/Heater/Heater.hpp>
#include <Metas/Sensors/DHT/DHT.hpp>

namespace Metas
{
    Data data;
    Modules::Heater heater(1, true);
    Sensors::DHT dht(2, DHT22);

    void DHTHandler(float temp, float humi)
    {
        data.setCurrentTemp(temp);
        data.setCurrentHumi(humi);
    }

    void Metas::setup()
    {
        data.setup();
    }

    void Metas::handle()
    {
        dht.handle(DHTHandler);
        heater.handle(data.getCurrentTemp(), data.getRequestTemp());
    }
}