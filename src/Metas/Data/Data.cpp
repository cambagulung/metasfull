#include <stdlib.h>

#include <Metas/Data/Data.hpp>
#include <LittleFS.h>

namespace Metas::Data
{
    File file;

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
        char *persistentTemp = (char *)"";

        if (LittleFS.exists("/persistent/requestTemp"))
        {
            file = LittleFS.open("/persistent/requestTemp", "r");

            while (file.available())
            {
                persistentTemp += file.read();
            }

            setRequestTemp(atof(persistentTemp));

            file.close();
        }
    }

    void applyPersistentRequestHumi(void)
    {
        char *persistentHumi = (char *)"";

        if (LittleFS.exists("/persistent/requestHumi"))
        {
            file = LittleFS.open("/persistent/requestHumi", "r");

            while (file.available())
            {
                persistentHumi += file.read();
            }

            setRequestHumi(atof(persistentHumi));

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
