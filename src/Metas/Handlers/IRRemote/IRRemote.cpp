#include <Metas/Handlers/IRRemote/IRRemote.hpp>
#include <SoftwareSerial.h>

namespace Metas::Handlers::IRRemote
{
    void Arrows(char *value)
    {
        Serial.print(value);
        Serial.println();
    }

    void Numbers(int value)
    {
        Serial.print(value);
        Serial.println();
    }

    void Others(char value)
    {
        Serial.print(value);
        Serial.println();
    }
}