#include <Metas/Data/Data.hpp>
#include <SD.h>

namespace Metas
{
    void Data::setup(void)
    {
        //
    }

    void Data::setCurrentTemp(float temp)
    {
        currentTemp = temp;
    }

    void Data::setCurrentHumi(float humi)
    {
        currentHumi = humi;
    }

    void Data::setRequestTemp(float temp)
    {
        requestTemp = temp;
    }

    void Data::setRequestHumi(float humi)
    {
        requestHumi = humi;
    }

    float Data::getCurrentTemp(void)
    {
        return currentTemp;
    }

    float Data::getCurrentHumi(void)
    {
        return currentHumi;
    }

    float Data::getRequestTemp(void)
    {
        return requestTemp;
    }

    float Data::getRequestHumi(void)
    {
        return requestHumi;
    }
}
