#ifndef OBSVFUN_TEMPLATE_H
#define OBSVFUN_TEMPLATE_H

#include <functional>

template<class state_type, class obsv_type>
class obsvfun_template :
    public std::binary_function<state_type, obsv_type, double>
{
    public:
        obsvfun_template();
        obsvfun_template(double (*f)(state_type,obsv_type));
        virtual ~obsvfun_template();
        obsvfun_template(const obsvfun_template& other);
        obsvfun_template& operator=(const obsvfun_template& other);

        double virtual operator() (state_type a, obsv_type b) {  return f(a,b) ;}
    protected:
    private:
        double (*f)(state_type, obsv_type );


};




template<class state_type, class obsv_type>
obsvfun_template<state_type,obsv_type>::obsvfun_template()
{
    //ctor
}

template<class state_type, class obsv_type>
obsvfun_template<state_type,obsv_type>::obsvfun_template(double (*f)(state_type,obsv_type))
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






#endif // OBSVFUN_TEMPLATE_H
