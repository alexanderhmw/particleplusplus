#include "resampler_template.h"

template<class state_type>
resampler_template<state_type>::resampler_template()
{
    //ctor
}

template<class state_type>
resampler_template<state_type>::~resampler_template()
{
    //dtor
}

template<class state_type>
resampler_template<state_type>::resampler_template(const resampler_template& other)
{
    //copy ctor
}

template<class state_type>
resampler_template<state_type>& resampler_template<state_type>::operator=(const resampler_template& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}
