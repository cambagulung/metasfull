#ifndef METAS_DATA_HPP
#define METAS_DATA_HPP

namespace Metas
{
    namespace Data
    {
        void
        setup(void),
            setCurrentTemp(float temp),
            setCurrentHumi(float humi),
            setRequestTemp(float temp),
            setRequestHumi(float humi);

        float getCurrentTemp(void),
            getCurrentHumi(void),
            getRequestTemp(void),
            getRequestHumi(void);
    }
}

#endif
