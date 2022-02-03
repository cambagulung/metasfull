#ifndef METAS_DATA_HPP
#define METAS_DATA_HPP

namespace Metas::Data
{
    void
    setup(void),
        applyPersistentRequestTemp(void),
        applyPersistentRequestHumi(void),
        setCurrentTemp(float temp),
        setCurrentHumi(float humi),
        setRequestTemp(float temp),
        setRequestHumi(float humi),
        setState(long state);

    float getCurrentTemp(void),
        getCurrentHumi(void),
        getRequestTemp(void),
        getRequestHumi(void);

    long getState(void);

    bool getState(long state);

}

#endif
