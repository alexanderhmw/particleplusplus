#ifndef SAMPLER_TEMPLATE_H
#define SAMPLER_TEMPLATE_H

#include <functional>

template<class state_type, class obsv_type>
class sampler: public std::binary_function<state_type,obsv_type,state_type>
{
    public:
        sampler();
        sampler(double (*f)(state_type,obsv_type));
        virtual ~sampler();
        sampler(const sampler& other);
        sampler& operator=(const sampler& other);

        state_type virtual operator() (state_type a, obsv_type b) const {
            return f(a,b);
        }
    protected:
    private:
        double (*f)(state_type,obsv_type);
};


template<class state_type, class obsv_type>
sampler<state_type, obsv_type>::sampler()
{
    //ctor
}

template<class state_type, class obsv_type>
sampler<state_type, obsv_type>::sampler(double (*f)(state_type,obsv_type))
: f(f)
{
    //ctor
}

template<class state_type, class obsv_type>
sampler<state_type, obsv_type>::~sampler()
{
    //dtor
}

template<class state_type, class obsv_type>
sampler<state_type, obsv_type>::sampler(const sampler& other)
{
    //copy ctor
    f = other.f;
}

template<class state_type, class obsv_type>
sampler<state_type, obsv_type>&
sampler<state_type, obsv_type>::
    operator=(const sampler& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}

#endif // SAMPLER_TEMPLATE_H
