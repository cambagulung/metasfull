#include <Metas/Modules/Relay/Relay.hpp>

#ifndef METAS_MODULES_FAN_HPP
#define METAS_MODULES_FAN_HPP

namespace Metas::Modules
{
    class Fan
    {
    private:
        Relay relay;

    public:
        Fan(uint8_t pin, bool activeLow);
        void handle(void handler(Relay relay));
    };
}

#endif
