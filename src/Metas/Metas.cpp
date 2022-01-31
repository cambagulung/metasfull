#include <Metas/Handlers/IRRemote/IRRemote.hpp>
#include <Metas/Interfaces/Blink/Blink.hpp>
#include <Metas/Interfaces/IRRemote/IRRemote.hpp>
#include <Metas/Metas.hpp>
#include <Metas/Modules/Fan/Fan.hpp>
#include <Metas/Modules/Heater/Heater.hpp>
#include <Metas/Sensors/DHT/DHT.hpp>

namespace Metas
{
    // Interfaces::Blink::Blink Blink(500);
    Interfaces::IRRemote::IRRemote Remote(14);

    void Metas::setup()
    {
        Serial.begin(9600);

        // Blink.setup();
        Remote.setup();
    }

    void Metas::handle()
    {
        // Blink.handler();

        Remote.handle();
        Remote.handle(Handlers::IRRemote::Others);
        Remote.handle(Handlers::IRRemote::Numbers);
        Remote.handle(Handlers::IRRemote::Arrows);
    }
}
