#ifndef PFILTER_H
#define PFILTER_H


#include "statefun_template.h"
#include "obsvfun_template.h"
#include "proposal_template.h"
#include "sampler_template.h"
#include "resampler_template.h"

#include<vector>

template<class state_type, class obsv_type>
class pfilter
{
    public:
        /// pfilter();
        pfilter(statefun_template<state_type>& f,
                obsvfun_template<state_type,obsv_type>& g,
                proposal_template<state_type,obsv_type>& q,
                resampler_template<state_type>& resamp);
        virtual ~pfilter();

        void load_data();
        void iterate(int iternum);

    private:
        pfilter( const pfilter& other);
        pfilter& operator=(const pfilter& other);
        std::vector<obsv_type>  y;
        std::vector<state_type> x;
        std::vector<state_type> xi1;
        std::vector<state_type> xi2;
        std::vector<state_type> wi;
        int iternum;
        statefun_template<state_type>& f;
        obsvfun_template<state_type, obsv_type>& g;
        proposal_template<state_type,obsv_type>& q;
        sampler_template<state_type,obsv_type>& q_sampler;
        resampler_template<state_type>& resamp;

        void do_sampler();
};





#endif // PFILTER_H
