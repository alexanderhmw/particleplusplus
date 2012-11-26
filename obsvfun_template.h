#ifndef OBSVFUN_TEMPLATE_H
#define OBSVFUN_TEMPLATE_H

#include <functional>

template<class state_type, class obsv_type>
class obsvfun_template :
    public std::binary_function<state_type, obsv_type, double>
{
    public:
        obsvfun_template();
        virtual ~obsvfun_template();
        obsvfun_template(const obsvfun_template& other);
        obsvfun_template& operator=(const obsvfun_template& other);
    protected:
    private:
};

#endif // OBSVFUN_TEMPLATE_H
