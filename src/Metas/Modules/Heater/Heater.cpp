#include <Metas/Modules/Heater/Heater.hpp>

namespace Metas
{
    namespace Modules
    {
        Heater::Heater(uint8_t pin, bool activeLow) : relay(pin, activeLow)
        {
            //
        }

        void Heater::handle(float currentTemp, float requestTemp)
        {
            if (currentTemp < requestTemp && !relay.isActive())
            {
                relay.on();
            }

            else if(requestTemp <= currentTemp && relay.isActive())
            {
                relay.off();
            }
        }
        
        void Heater::handle(void handler(Relay relay))
        {
            return handler(relay);
        }
    }
}
