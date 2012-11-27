#ifndef STATEFUN_TEMPLATE_H
#define STATEFUN_TEMPLATE_H

#include <functional>

template<class state_type>
class statefun_template :
    public std::binary_function<state_type, state_type, double>
{
    public:
        statefun_template();
        statefun_template(double (*f)(state_type,state_type));
        virtual ~statefun_template();
        statefun_template(const statefun_template& other);
        statefun_template& operator=(const statefun_template& other);
    protected:
    private:
};


template<class state_type>
statefun_template<state_type>::statefun_template()
{
    //ctor
}


template<class state_type>
statefun_template<state_type>::statefun_template(double (*f)(state_type,state_type))
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

#endif // STATEFUN_TEMPLATE_H
