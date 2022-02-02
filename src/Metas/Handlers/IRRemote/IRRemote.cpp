#include <Metas/Data/Data.hpp>
#include <Metas/Handlers/IRRemote/IRRemote.hpp>
#include <SoftwareSerial.h>

namespace Metas::Handlers::IRRemote
{
    void Numbers(int value)
    {
        //
    }

    void Others(char value)
    {
        if (Data::getState(1.0))
        {
            if (value == 'U')
            {
                Data::setRequestTemp(Data::getRequestTemp() + 10);
            }
        }

        if (value == '#')
        {
            Serial.print(Data::getRequestTemp());
        }

        if (value == '*')
        {
            Data::setState(1.0);
        }
    }
}
