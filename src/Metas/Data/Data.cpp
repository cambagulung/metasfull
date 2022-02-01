#include <Metas/Data/Data.hpp>
#include <LittleFS.h>

namespace Metas::Data
{
    float
        currentTemp = 0.0,
        currentHumi = 0.0,
        requestTemp = 0.0,
        requestHumi = 0.0;

    void setup()
    {
        File file;
        
        if(LittleFS.exists("/persistent/requestHumi"))
        {
            file = LittleFS.open("/persistent/requestHumi", "r");
            
            if(file.available())
            {
                Serial.write(file.read());
            }
        }
    }

    void setCurrentTemp(float temp)
    {
        currentTemp = temp;
    }

    void setCurrentHumi(float humi)
    {
        currentHumi = humi;
    }

    void setRequestTemp(float temp)
    {
        requestTemp = temp;
    }

    void setRequestHumi(float humi)
    {
        requestHumi = humi;
    }

    float getCurrentTemp(void)
    {
        return currentTemp;
    }

    float getCurrentHumi(void)
    {
        return currentHumi;
    }

    float getRequestTemp(void)
    {
        return requestTemp;
    }

    float getRequestHumi(void)
    {
        return requestHumi;
    }
}
