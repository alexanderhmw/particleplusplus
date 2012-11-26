#include "sampler_template.h"

template<class state_type, class obsv_type>
sampler_template<state_type, obsv_type>::sampler_template()
{
    //ctor
}

template<class state_type, class obsv_type>
sampler_template<state_type, obsv_type>::~sampler_template()
{
    //dtor
}

template<class state_type, class obsv_type>
sampler_template<state_type, obsv_type>::sampler_template(const sampler_template& other)
{
    //copy ctor
}

template<class state_type, class obsv_type>
sampler_template<state_type, obsv_type>&
sampler_template<state_type, obsv_type>::
    operator=(const sampler_template& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}
