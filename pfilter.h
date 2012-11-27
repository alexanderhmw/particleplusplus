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
        /*pfilter(statefun_template<state_type>& f,
                obsvfun_template<state_type,obsv_type>& g,
                proposal_template<state_type,obsv_type>& q,
                resampler_template<state_type>& resamp);*/

        pfilter(double (*fptr)(state_type,state_type),
                double (*gptr)(state_type, obsv_type),
                double (*qptr)(state_type, state_type, obsv_type),
                double (*q_sam_ptr)(state_type, obsv_type));

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
        statefun_template<state_type> f;
        obsvfun_template<state_type, obsv_type> g;
        proposal_template<state_type,obsv_type> q;
        sampler_template<state_type,obsv_type> q_sampler;
        resampler_template<state_type> resamp;

        void do_sampler();
};


/*template<class state_type, class obsv_type>
pfilter<state_type, obsv_type>::pfilter()
{
    //ctor
}*/


template<class state_type, class obsv_type>
pfilter<state_type, obsv_type>::pfilter (double (*fptr)(state_type, state_type),
                                         double (*gptr)(state_type, obsv_type),
                                         double (*qptr)(state_type, state_type, obsv_type),
                                         double (*q_sam_ptr)(state_type, obsv_type)):
    f(fptr),
    g(gptr),
    q(qptr),
    q_sampler(q_sam_ptr)
{


}


template<class state_type, class obsv_type>
pfilter<state_type, obsv_type>::~pfilter()
{
    //dtor
}

template<class state_type, class obsv_type>
pfilter<state_type, obsv_type>::pfilter(const pfilter& other)
{
    //copy ctor
}

template<class state_type, class obsv_type>
pfilter<state_type, obsv_type>& pfilter<state_type, obsv_type>::
operator=(const pfilter& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}

template<class state_type, class obsv_type>
void pfilter<state_type, obsv_type>::iterate(int iternum){
    //do_sampler(q_sampler,x[i],y[i],xi);
    //wi=g()*f()/q(xi);
    //xi=resamp(wi,xi);
}



#endif // PFILTER_H
