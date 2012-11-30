#ifndef STATEFUN_TEMPLATE_H
#define STATEFUN_TEMPLATE_H

#include <functional>

template<class state_type>
class statefun :
    public std::binary_function<state_type, state_type, long double>
{
    public:
        statefun();
        statefun(long double (*f)(state_type,state_type)); //!< automatic type conversion
        virtual ~statefun();
        statefun(const statefun& other);
        statefun& operator=(const statefun& other);
        long double virtual operator()(const state_type a,const state_type b) const {
            return f(a,b);
        }
    protected:
        long double (*f)(state_type,state_type);
};


template<class state_type>
statefun<state_type>::statefun()
{
    //ctor
}


template<class state_type>
statefun<state_type>::statefun(long double (*f)(state_type,state_type))
:f(f)
{
    //ctor
}

template<class state_type>
statefun<state_type>::~statefun()
{
    //dtor
}

template<class state_type>
statefun<state_type>::statefun(const statefun& other){
    f = other.f;
}


template<class state_type>
statefun<state_type>& statefun<state_type>::operator=(const statefun& rhs){
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    f = rhs.f;
    return *this;
}


#endif // STATEFUN_TEMPLATE_H
