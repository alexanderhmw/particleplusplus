#ifndef PROPOSAL_TEMPLATE_H
#define PROPOSAL_TEMPLATE_H

template<class state_type,class obsv_type>
class proposal_template
{
    public:
        proposal_template();
        proposal_template(double (*f)(state_type,state_type,obsv_type));
        virtual ~proposal_template();
        proposal_template(const proposal_template& other);
        proposal_template& operator=(const proposal_template& other);
    protected:
    private:
};


template<class state_type, class obsv_type>
proposal_template<state_type, obsv_type>::proposal_template()
{
    //ctor
}


template<class state_type, class obsv_type>
proposal_template<state_type, obsv_type>::proposal_template(double (*f)(state_type,state_type,obsv_type))
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



#endif // PROPOSAL_TEMPLATE_H
