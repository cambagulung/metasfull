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
        requestHumi,
        persistTemp,
        persistHumi;

    long appState;

    void setState(long state)
    {
        appState = state;
    }

    long getState(void)
    {
        return appState;
    }

    bool getState(long state)
    {
        return appState == state;
    }

    void applyPersistentRequestTemp(void)
    {
        if (LittleFS.exists("/persistent/request/temp"))
        {
            file = LittleFS.open("/persistent/request/temp", "r");

            if (file.available())
            {
                setRequestTemp(atof(file.readString().c_str()));

                persistTemp = getRequestTemp();
            }

            file.close();
        }
    }

    void applyPersistentRequestHumi(void)
    {
        if (LittleFS.exists("/persistent/request/humi"))
        {
            file = LittleFS.open("/persistent/request/humi", "r");

            if (file.available())
            {
                setRequestHumi(atof(file.readString().c_str()));

                persistHumi = getRequestHumi();
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
        requestTemp = requestTemp;

        if (persistTemp != requestTemp)
        {
            file = LittleFS.open("/persistent/request/temp", "w");

            file.print(persistTemp = requestTemp);
            file.close();
        }
    }

    void setRequestHumi(float humi)
    {
        requestHumi = humi;

        if (persistHumi != requestHumi)
        {
            file = LittleFS.open("/persistent/request/humi", "w");

            file.print(persistHumi = requestHumi);
            file.close();
        }
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
