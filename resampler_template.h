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

#endif // RESAMPLER_TEMPLATE_H
