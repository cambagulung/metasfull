#include <Metas/Interfaces/IRRemote/IRRemote.hpp>

namespace Metas::Interfaces::IRRemote
{
    namespace Buttons
    {
        namespace Numbers
        {
            const int values[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
            const uint64_t keys[10] = {
                16753245, // 1
                16736925, // 2
                16769565, // 3
                16720605, // 4
                16712445, // 5
                16761405, // 6
                16769055, // 7
                16754775, // 8
                16748655, // 9
                16750695, // 0
            };
        }

        namespace Others
        {
            const char values[7] = {'*', '#', 'O', 'R', 'L', 'U', 'D'};
            const uint64_t keys[7] = {
                16738455, // *
                16756815, // #
                16726215, // O
                16734885, // R
                16716015, // L
                16718055, // U
                16730805, // D
            };
        }
    }

    IRRemote::IRRemote(uint16_t pin) : irrcv(pin)
    {
        //
    }

    void IRRemote::setup(void)
    {
        irrcv.enableIRIn();
    }

    void IRRemote::handle(void)
    {
        available = irrcv.decode(&results);
    }

    void IRRemote::handle(void handler(uint64_t value))
    {
        if (available)
        {
            handler(results.value);
            irrcv.resume();
        }
    }

    void IRRemote::handle(void handler(decode_results value))
    {
        if (available)
        {
            handler(results);
            irrcv.resume();
        }
    }

    void IRRemote::handle(void handler(int value))
    {
        if (available)
        {
            for (int i = 0; i < 10; i++)
            {
                if (Buttons::Numbers::keys[i] == results.value)
                {
                    handler(Buttons::Numbers::values[i]);
                }
            }

            irrcv.resume();
        }
    }

    void IRRemote::handle(void handler(char value))
    {
        if (available)
        {
            for (int i = 0; i < 3; i++)
            {
                if (Buttons::Others::keys[i] == results.value)
                {
                    handler(Buttons::Others::values[i]);
                }
            }

            irrcv.resume();
        }
    }
}
