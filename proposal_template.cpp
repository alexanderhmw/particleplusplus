#include "proposal_template.h"

template<class state_type, class obsv_type>
proposal_template<state_type, obsv_type>::proposal_template()
{
    //ctor
}

template<class state_type, class obsv_type>
proposal_template<state_type, obsv_type>::~proposal_template()
{
    //dtor
}

template<class state_type, class obsv_type>
proposal_template<state_type, obsv_type>::proposal_template(const proposal_template& other)
{
    //copy ctor
}

template<class state_type, class obsv_type>
proposal_template<state_type, obsv_type>& proposal_template<state_type, obsv_type>::
    operator=(const proposal_template& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}
