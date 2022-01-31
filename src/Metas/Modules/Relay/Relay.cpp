#include <Arduino.h>
#include <Metas/Modules/Relay/Relay.hpp>

namespace Metas::Modules
{
    Relay::Relay(uint8_t pin, bool activeLow)
    {
        setup(pin, activeLow);
    }

    void Relay::setup(uint8_t pin, bool activeLow)
    {
        this->pin = pin;
        this->activeLow = activeLow;

        pinMode(pin, OUTPUT);
        off();
    }

    void Relay::on(void)
    {
        active = true;
        return digitalWrite(pin, activeLow ? LOW : HIGH);
    }

    void Relay::off(void)
    {
        active = false;
        return digitalWrite(pin, activeLow ? HIGH : LOW);
    }

    bool Relay::isActive(void)
    {
        return active;
    }
}
