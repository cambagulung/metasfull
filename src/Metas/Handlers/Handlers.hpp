#ifndef METAS_HANDLER_HPP
#define METAS_HANDLER_HPP

#include <Metas/Data/Data.hpp>
#include <Metas/Modules/Relay/Relay.hpp>

namespace Metas
{
    namespace Handlers
    {
        Data data;

        void
        setup(void),
            DHT1(float temp, float humi),
            Fan1(Modules::Relay relay),
            Heater1(Modules::Relay relay);
    };
}

#endif