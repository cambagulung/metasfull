#include <Arduino.h>

#ifndef METAS_INTERFACES_BLINK_HPP
#define METAS_INTERFACES_BLINK_HPP

namespace Metas::Interfaces::Blink
{
    class Blink
    {
    private:
        int state = LOW;
        long previousMillis = 0, currentMillis, interval;

        uint8_t pin;

    public:
        Blink(long interval = 1000);

        void setup(uint8_t pin = LED_BUILTIN), handler(void);
    };
}

#endif
