#include "statefun_template.h"

template<class state_type>
statefun_template<state_type>::statefun_template()
{
    //ctor
}

template<class state_type>
statefun_template<state_type>::~statefun_template()
{
    //dtor
}

template<class state_type>
statefun_template<state_type>::statefun_template(const statefun_template& other)
{
    //copy ctor
}

template<class state_type>
statefun_template<state_type>& statefun_template<state_type>::
    operator=(const statefun_template& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}
