#ifndef RESAMPLER_TEMPLATE_H
#define RESAMPLER_TEMPLATE_H

template<class state_type>
class resampler_template
{
    public:
        resampler_template();
        virtual ~resampler_template();
        resampler_template(const resampler_template& other);
        resampler_template& operator=(const resampler_template& other);
    protected:
    private:
};



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


#endif // RESAMPLER_TEMPLATE_H
