#include <Metas/Sensors/DHT/DHT.hpp>

namespace Metas
{
    namespace Sensors
    {
        DHT::DHT(uint8_t pin, uint8_t type, uint8_t count): dht(pin, type, count)
        {
            dht.begin();
        }

        void DHT::begin(uint8_t usec)
        {
            dht.begin(usec);
        }

        void DHT::handle(void handler(float temp, float humi))
        {
            return handler(dht.readTemperature(), dht.readHumidity());
        }
    }
}
