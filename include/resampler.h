#ifndef RESAMPLER_TEMPLATE_H
#define RESAMPLER_TEMPLATE_H

# include <iostream>
# include <vector>
# include <random>
# include "ran_generator.h"
# include "setting.h"
template<class state_type>
class resampler
{
    public:
        resampler(const std::vector<precision_type> &w, const std::vector<state_type> &xi2);
        virtual ~resampler();
        /*resampler(const resampler& other);
        resampler& operator=(const resampler& other);*/

        state_type virtual operator ()() const {
            std::discrete_distribution<int> gen (w.begin(),w.end());
            int index = gen(ran_gen::getInstance().get_gen());
            // std::cout<<index<<std::endl;
            return xi2[index];
        }

    protected:
        const std::vector<precision_type> &w; ///< weight
        const std::vector<state_type> &xi2; ///< choose one from these

};



template<class state_type>
resampler<state_type>::resampler(const std::vector<precision_type> &w, const std::vector<state_type> &xi2):
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
