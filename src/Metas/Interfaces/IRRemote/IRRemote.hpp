#include <IRremoteESP8266.h>
#include <IRrecv.h>
#include <IRutils.h>

#ifndef METAS_INTERFACES_IRREMOTE_HPP
#define METAS_INTERFACES_IRREMOTE_HPP

namespace Metas::Interfaces::IRRemote
{
    class IRRemote
    {
    private:
        bool available = false;
        decode_results results;
        IRrecv irrcv;

    public:
        IRRemote(u_int16_t pin);
        void
        setup(void),
            handle(void),
            handle(void handler(uint64_t value)),
            handle(void handler(decode_results value)),
            handle(void handler(int value)),
            handle(void handler(char value)),
            handle(void handler(char *value));
    };
}

#endif
