#include <Arduino.h>
#include <Metas/Metas.hpp>

Metas::Metas metas;

// the setup function runs once when you press reset or power the board
void setup()
{
    metas.setup();
}

// the loop function runs over and over again forever
void loop()
{
    metas.handle();
}
