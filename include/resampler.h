#ifndef RESAMPLER_TEMPLATE_H
#define RESAMPLER_TEMPLATE_H

#include <vector>
#include <random>
#include "ran_generator.h"

template<class state_type>
class resampler
{
    public:
        resampler(const std::vector<double> &w, const std::vector<state_type> &xi2);
        virtual ~resampler();
        /*resampler(const resampler& other);
        resampler& operator=(const resampler& other);*/

        state_type virtual operator ()() const {
            std::discrete_distribution<int> gen (w.begin(),w.end());
            return xi2[gen(ran_gen::getInstance().get_gen())];
        }

    protected:
        const std::vector<double> &w;
        const std::vector<state_type> &xi2;
    private:
};



template<class state_type>
resampler<state_type>::resampler(const std::vector<double> &w, const std::vector<state_type> &xi2):
w(w), xi2(xi2)
{
    //ctor
}

/*template<class state_type>
resampler<state_type>::resampler(const resampler& other){

}

template<class state_type>
resampler<state_type>& resampler<state_type>::operator=(const resampler& other){

}*/


template<class state_type>
resampler<state_type>::~resampler()
{
    //dtor
}


#endif // RESAMPLER_TEMPLATE_H
