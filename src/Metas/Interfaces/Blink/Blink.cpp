#include <Metas/Interfaces/Blink/Blink.hpp>

namespace Metas::Interfaces::Blink
{
    Blink::Blink(long interval)
    {
        this->interval = interval;
    }

    void Blink::setup(uint8_t pin)
    {
        this->pin = pin;

        pinMode(pin, OUTPUT);
    }

    void Blink::handler(void)
    {
        currentMillis = millis();

        if (currentMillis - previousMillis >= interval)
        {
            previousMillis = currentMillis;
            if (state == LOW)
            {
                state = HIGH;
            }
            else
            {
                state = LOW;
            }

            digitalWrite(pin, state);
        }
    }
}
