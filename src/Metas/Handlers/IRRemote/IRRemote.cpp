#include <Metas/Data/Data.hpp>
#include <Metas/Handlers/IRRemote/IRRemote.hpp>
#include <SoftwareSerial.h>

namespace Metas::Handlers::IRRemote
{
    void Arrows(char *value)
    {
        //
    }

    void Numbers(int value)
    {
        //
    }

    void Others(char value)
    {
        if (value == '*')
        {
            Serial.print(Data::getRequestTemp());
        }
    }
}
