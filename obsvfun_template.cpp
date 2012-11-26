#include "obsvfun_template.h"

template<class state_type, class obsv_type>
obsvfun_template<state_type,obsv_type>::obsvfun_template()
{
    //ctor
}

template<class state_type, class obsv_type>
obsvfun_template<state_type,obsv_type>::~obsvfun_template()
{
    //dtor
}

template<class state_type, class obsv_type>
obsvfun_template<state_type,obsv_type>::obsvfun_template(const obsvfun_template& other)
{
    //copy ctor
}

template<class state_type, class obsv_type>
obsvfun_template<state_type,obsv_type>& obsvfun_template<state_type,obsv_type>::operator=(const obsvfun_template& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}
