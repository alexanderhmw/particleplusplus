#ifndef SAMPLER_TEMPLATE_H
#define SAMPLER_TEMPLATE_H

template<class state_type, class obsv_type>
class sampler_template
{
    public:
        sampler_template();
        sampler_template(double (*f)(state_type,obsv_type));
        virtual ~sampler_template();
        sampler_template(const sampler_template& other);
        sampler_template& operator=(const sampler_template& other);
    protected:
    private:
};


template<class state_type, class obsv_type>
sampler_template<state_type, obsv_type>::sampler_template()
{
    //ctor
}

template<class state_type, class obsv_type>
sampler_template<state_type, obsv_type>::sampler_template(double (*f)(state_type,obsv_type))
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

#endif // SAMPLER_TEMPLATE_H
