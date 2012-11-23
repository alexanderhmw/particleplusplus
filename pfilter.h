#ifndef PFILTER_H
#define PFILTER_H
#include "psampler"
#include "pobserve"
#include "pstate"

class pfilter
{
    public:
        pfilter();
        virtual ~pfilter();
        pfilter(const pfilter& other);
        pfilter& operator=(const pfilter& other);
    protected:
    private:
        psampler sampler;
        pobserve observe;
        pstate state;

};

#endif // PFILTER_H
