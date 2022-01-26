#include <stdint.h>

#ifndef METAS_MODULES_RELAY_HPP
#define METAS_MODULES_RELAY_HPP

namespace Metas
{
    namespace Modules
    {
        class Relay
        {
        private:
            uint8_t pin;
            bool active = false, activeLow;

        public:
            Relay(uint8_t pin, bool activeLow = false);

            void setup(uint8_t pin, bool activeLow = false),
                on(void), off(void);

            bool isActive(void);
        };
    }
}

#endif