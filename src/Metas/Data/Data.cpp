#include <stdlib.h>

#include <Metas/Data/Data.hpp>
#include <LittleFS.h>

namespace Metas::Data
{
    File file;

    int state;

    float
        currentTemp,
        currentHumi,
        requestTemp,
        requestHumi;

    void persistRequestTemp(void)
    {
        file = LittleFS.open("/persistent/requestTemp", "w");

        file.print(getRequestTemp());

        file.close();
    }

    void persistRequestHumi(void)
    {
        file = LittleFS.open("/persistent/requestHumi", "w");

        file.print(getRequestHumi());

        file.close();
    }

    void applyPersistentRequestTemp(void)
    {
        if (LittleFS.exists("/persistent/requestTemp"))
        {
            file = LittleFS.open("/persistent/requestTemp", "r");

            if (file.available())
            {
                setRequestTemp(atof(file.readString().c_str()));
            }

            file.close();
        }
    }

    void applyPersistentRequestHumi(void)
    {
        if (LittleFS.exists("/persistent/requestHumi"))
        {
            file = LittleFS.open("/persistent/requestHumi", "r");

            if (file.available())
            {
                setRequestHumi(atof(file.readString().c_str()));
            }

            file.close();
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
