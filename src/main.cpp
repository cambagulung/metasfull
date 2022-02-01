#include <Arduino.h>
#include <Metas/Metas.hpp>

// the setup function runs once when you press reset or power the board
void setup()
{
    Metas::setup();
}

// the loop function runs over and over again forever
void loop()
{
    Metas::handle();
}
