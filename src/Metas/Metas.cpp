#include <LittleFS.h>
#include <Metas/Data/Data.hpp>
#include <Metas/Handlers/IRRemote/IRRemote.hpp>
#include <Metas/Interfaces/Blink/Blink.hpp>
#include <Metas/Interfaces/IRRemote/IRRemote.hpp>
#include <Metas/Metas.hpp>
#include <Metas/Modules/Fan/Fan.hpp>
#include <Metas/Modules/Heater/Heater.hpp>
#include <Metas/Sensors/DHT/DHT.hpp>

namespace Metas
{
    Interfaces::Blink::Blink Blink;
    Interfaces::IRRemote::IRRemote Remote;

    void setup()
    {
        Serial.begin(9600);
        LittleFS.begin();

        Data::applyPersistentRequestHumi();
        Data::applyPersistentRequestTemp();

        Remote.setup();
        Blink.setup();
    }

    void handle()
    {
        Remote.handle();
        Remote.handle(Handlers::IRRemote::Others);
        Remote.handle(Handlers::IRRemote::Numbers);
        Remote.handle(Handlers::IRRemote::Arrows);

        Blink.handler();
    }
}
