#include <Metas/Handlers/Handlers.hpp>

namespace Metas
{
    namespace Handlers
    {
        void setup(void)
        {
            return data.setup();
        }

        void DHT1(float temp, float humi)
        {
            data.setCurrentTemp(temp);
            data.setCurrentHumi(humi);
        }

        void Fan1(Modules::Relay relay)
        {
            relay.off();
        }

        void Heater1(Modules::Relay relay)
        {
            if (data.getCurrentTemp() < data.getRequestTemp() && !relay.isActive())
            {
                relay.on();
            }

            else if (data.getRequestTemp() <= data.getCurrentTemp() && relay.isActive())
            {
                relay.off();
            }
        }
    };
}
