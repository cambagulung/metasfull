#include <Metas/Handlers/Handlers.hpp>

namespace Metas
{
    namespace Handlers
    {
        Data data;

        Data getData(void)
        {
            return data;
        }

        void setup(void)
        {
            data.setup();
        }

        void DHT1(float temp, float humi)
        {
            data.setCurrentTemp(temp);
            data.setCurrentHumi(humi);
        }
    }
}
