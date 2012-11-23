#include "pstate.h"

pstate::pstate()
{
    //ctor
}

pstate::~pstate()
{
    //dtor
}

pstate::pstate(const pstate& other)
{
    //copy ctor
}

pstate& pstate::operator=(const pstate& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}
