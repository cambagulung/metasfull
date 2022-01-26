#ifndef METAS_DATA_HPP
#define METAS_DATA_HPP

namespace Metas
{
    class Data
    {
    private:
        float
            currentTemp,
            currentHumi,
            requestTemp,
            requestHumi;

    public:
        void
        setup(void),
            setCurrentTemp(float temp),
            setCurrentHumi(float humi),
            setRequestTemp(float temp),
            setRequestHumi(float humi);

        float
        getCurrentTemp(void),
            getCurrentHumi(void),
            getRequestTemp(void),
            getRequestHumi(void);
    };
}

#endif