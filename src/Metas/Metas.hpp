#ifndef METAS_HPP
#define METAS_HPP

#include <Metas/Data/Data.hpp>
#include <Metas/Modules/Heater/Heater.hpp>
#include <Metas/Modules/Relay/Relay.hpp>

namespace Metas
{
    class Metas
    {
    private:
        float
            requestTemp,
            requestHumi,
            currentTemp,
            currentHumi;

    public:
        void setup(void), handle(void);
    };
}

#endif