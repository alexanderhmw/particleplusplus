#include "pfilter.h"

/*template<class state_type, class obsv_type>
pfilter<state_type, obsv_type>::pfilter()
{
    //ctor
}*/

template<class state_type, class obsv_type>
pfilter<state_type, obsv_type>::~pfilter()
{
    //dtor
}

template<class state_type, class obsv_type>
pfilter<state_type, obsv_type>::pfilter(const pfilter& other)
{
    //copy ctor
}

template<class state_type, class obsv_type>
pfilter<state_type, obsv_type>& pfilter<state_type, obsv_type>::
operator=(const pfilter& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}

template<class state_type, class obsv_type>
void pfilter<state_type, obsv_type>::iterate(int iternum){
    //do_sampler(q_sampler,x[i],y[i],xi);
    //wi=g()*f()/q(xi);
    //xi=resamp(wi,xi);
}
