#ifndef METAS_SENSORS_DHT_HPP
#define METAS_SENSORS_DHT_HPP

#include <DHT.h>

namespace Metas
{
    namespace Sensors
    {
        class DHT
        {
        private:
            ::DHT dht;

        public:
            DHT(uint8_t pin, uint8_t type, uint8_t count = 6);

            void begin(uint8_t usec), handle(void handler(float temp, float humi));
        };
    }
}

#endif