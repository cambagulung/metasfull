#include <Metas/Modules/Relay/Relay.hpp>

#ifndef METAS_MODULES_HEATER_HPP
#define METAS_MODULES_HEATER_HPP

namespace Metas::Modules
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

#endif