#include <Metas/Handlers/IRRemote/IRRemote.hpp>
#include <Metas/Interfaces/IRRemote/IRRemote.hpp>
#include <Metas/Metas.hpp>
#include <Metas/Modules/Fan/Fan.hpp>
#include <Metas/Modules/Heater/Heater.hpp>
#include <Metas/Sensors/DHT/DHT.hpp>

namespace Metas
{
    Interfaces::IRRemote::IRRemote Remote(14);

    void Metas::setup()
    {
        Serial.begin(9600);
        Remote.setup();
    }

    void Metas::handle()
    {
        Remote.handle();
        Remote.handle(Handlers::IRRemote::Others);
        Remote.handle(Handlers::IRRemote::Numbers);
        Remote.handle(Handlers::IRRemote::Arrows);
    }
}
