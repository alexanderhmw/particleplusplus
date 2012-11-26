#ifndef STATEFUN_TEMPLATE_H
#define STATEFUN_TEMPLATE_H

#include <functional>

template<class state_type>
class statefun_template :
    public std::binary_function<state_type, state_type, double>
{
    public:
        statefun_template();
        virtual ~statefun_template();
        statefun_template(const statefun_template& other);
        statefun_template& operator=(const statefun_template& other);
    protected:
    private:
};

#endif // STATEFUN_TEMPLATE_H
