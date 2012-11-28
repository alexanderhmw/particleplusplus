#ifndef PFILTER_H
#define PFILTER_H

#include<vector>
#include<functional>
#include<algorithm>


#include "statefun.h"
#include "obsvfun.h"
#include "proposal.h"
#include "sampler.h"
#include "resampler.h"
#include "binder3rd.h"
#include "compose3.h"



template<class state_type, class obsv_type>
class pfilter
{
    public:
        pfilter(double (*fptr)(state_type,state_type),
                double (*gptr)(state_type, obsv_type),
                double (*qptr)(state_type, state_type, obsv_type),
                double (*q_sam_ptr)(state_type, obsv_type));

        virtual ~pfilter();

        void load_data();
        void iterate();
        void initialize(int i);

    private:
        pfilter();
        pfilter( const pfilter& other);
        pfilter& operator=(const pfilter& other);
        std::vector<obsv_type>  y;
        std::vector<state_type> x;
        std::vector<state_type> xi1;
        std::vector<state_type> xi2;
        std::vector<double> wi;

        statefun<state_type> f;
        obsvfun<state_type, obsv_type> g;
        proposal<state_type,obsv_type> q;
        sampler<state_type,obsv_type> q_sampler;
        resampler<state_type> resamp;

        void do_sampler();

        int iternum;


};


template<class state_type, class obsv_type>
pfilter<state_type, obsv_type>::pfilter()
{
    //ctor
}


template<class state_type, class obsv_type>
pfilter<state_type, obsv_type>::pfilter (double (*fptr)(state_type, state_type),
                                         double (*gptr)(state_type, obsv_type),
                                         double (*qptr)(state_type, state_type, obsv_type),
                                         double (*q_sam_ptr)(state_type, obsv_type)):
    f(fptr),
    g(gptr),
    q(qptr),
    q_sampler(q_sam_ptr),
    iternum(0)
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
void pfilter<state_type, obsv_type>::iterate(){
    for(int n=0; n<iternum; n++){
        transform ( xi1.begin(), xi1.end(), xi2.begin(), std::bind2nd(q_sampler,y[n]) );
        transform ( xi1.begin(), xi1.end(),
                    xi2.begin(), wi.begin(),
                   bind3rd(compose3<state_type,obsv_type>(f,g,q),y[n]) );
        for(typename std::vector<state_type>::iterator itr=xi1.begin(); itr!=xi1.end(); itr++){
            *itr = xi2[resamp(wi)];
        }
    }

}

template<class state_type, class obsv_type>
void pfilter<state_type, obsv_type>::initialize(int i){

        iternum = i;

        y.resize(i,0);
        x.resize(i,0);
        xi1.resize(i,0);
        xi2.resize(i,0);
        wi.resize(i,0);

}

#endif // PFILTER_H
