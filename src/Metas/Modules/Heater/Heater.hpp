#ifndef METAS_MODULES_HEATER_HPP
#define METAS_MODULES_HEATER_HPP

#include <Metas/Modules/Heater/Heater.hpp>
#include <Metas/Modules/Relay/Relay.hpp>

namespace Metas
{
    namespace Modules
    {
        class Heater
        {
        private:
            Relay relay;

        public:
            Heater(uint8_t pin, bool activeLow);
            void handle(float currentTemp, float requestTemp), handle(void handler(Relay relay));
        };
    }
}

#endif