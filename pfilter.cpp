#include "pfilter.h"

pfilter::pfilter()
{
    //ctor
}

pfilter::~pfilter()
{
    //dtor
}

pfilter::pfilter(const pfilter& other)
{
    //copy ctor
}

pfilter& pfilter::operator=(const pfilter& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}
