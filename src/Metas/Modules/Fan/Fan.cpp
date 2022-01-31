#include <Metas/Modules/Fan/Fan.hpp>

namespace Metas::Modules
{
    Fan::Fan(uint8_t pin, bool activeLow) : relay(pin, activeLow)
    {
        //
    }

    void Fan::handle(void handler(Relay relay))
    {
        return handler(relay);
    }
}
