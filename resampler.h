#ifndef RESAMPLER_TEMPLATE_H
#define RESAMPLER_TEMPLATE_H

#include <vector>


template<class state_type>
class resampler
{
    public:
        resampler();
        virtual ~resampler();
        resampler(const resampler& other);
        resampler& operator=(const resampler& other);

        int virtual operator ()(const std::vector<double> &w){
            return 1;
        }
    protected:
    private:
};



template<class state_type>
resampler<state_type>::resampler()
{
    //ctor
}

template<class state_type>
resampler<state_type>::resampler(const resampler& other){

}

template<class state_type>
resampler<state_type>& resampler<state_type>::operator=(const resampler& other){

}


template<class state_type>
resampler<state_type>::~resampler()
{
    //dtor
}


#endif // RESAMPLER_TEMPLATE_H
