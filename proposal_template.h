#ifndef PROPOSAL_TEMPLATE_H
#define PROPOSAL_TEMPLATE_H

template<class state_type,class obsv_type>
class proposal_template
{
    public:
        proposal_template();
        virtual ~proposal_template();
        proposal_template(const proposal_template& other);
        proposal_template& operator=(const proposal_template& other);
    protected:
    private:
};

#endif // PROPOSAL_TEMPLATE_H
