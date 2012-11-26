#ifndef SAMPLER_TEMPLATE_H
#define SAMPLER_TEMPLATE_H

template<class state_type, class obsv_type>
class sampler_template
{
    public:
        sampler_template();
        virtual ~sampler_template();
        sampler_template(const sampler_template& other);
        sampler_template& operator=(const sampler_template& other);
    protected:
    private:
};

#endif // SAMPLER_TEMPLATE_H
