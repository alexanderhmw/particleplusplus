#ifndef PROPOSAL_TEMPLATE_H
#define PROPOSAL_TEMPLATE_H

#include "ternary.h"


template<class state_type,class obsv_type>
class proposal: public ternary_function< state_type,state_type,obsv_type, long double >
{
    public:
        proposal();
        proposal(long double (*f)(state_type,state_type,obsv_type));
        virtual ~proposal();
        proposal(const proposal& other);
        proposal& operator=(const proposal& other);
        long double virtual operator()(const state_type a, const state_type b, const obsv_type c) const {
            return f(a,b,c);
        }
    protected:
        long double (*f)(state_type,state_type,obsv_type);
};


template<class state_type, class obsv_type>
proposal<state_type, obsv_type>::proposal()
{
    //ctor
}


template<class state_type, class obsv_type>
proposal<state_type, obsv_type>::proposal(long double (*f)(state_type,state_type,obsv_type))
:f(f)
{
    //ctor
}

template<class state_type, class obsv_type>
proposal<state_type, obsv_type>::~proposal()
{
    //dtor
}

template<class state_type, class obsv_type>
proposal<state_type, obsv_type>::proposal(const proposal& other)
{
    //copy ctor
    f = other.f;
}

template<class state_type, class obsv_type>
proposal<state_type, obsv_type>& proposal<state_type, obsv_type>::
    operator=(const proposal& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    f = rhs.f;
    return *this;
}



#endif // PROPOSAL_TEMPLATE_H
