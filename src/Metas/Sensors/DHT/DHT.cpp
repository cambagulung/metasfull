#include <Metas/Sensors/DHT/DHT.hpp>

namespace Metas::Sensors
{
    DHT::DHT(uint8_t pin, uint8_t type, uint8_t count) : dht(pin, type, count)
    {
        //
    }

    void DHT::setup()
    {
        dht.begin();
    }

    void DHT::setup(uint8_t usec)
    {
        dht.begin(usec);
    }

    void DHT::handle(void handler(float temp, float humi))
    {
        return handler(dht.readTemperature(), dht.readHumidity());
    }

    void DHT::handle(void handler(float temp))
    {
        return handler(dht.readTemperature());
    }

    void DHT::handle(void handler(float humi))
    {
        return handler(dht.readHumidity());
    }
}
