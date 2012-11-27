
# include <iostream>
# include "pfilter.h"
# include <random>

std::default_random_engine generator;
std::normal_distribution<double> distribution(5.0,2.0);

double f(double a, double b){
    return (a-b)*(a-b);
}


double g(double a, double b){
    return (a-b)*(a-b);
}


double q(double a, double b, double c){
    return (a-b)*(a-b)+(a-c)*(a-c);
}

double q_sam(double a, double b){
    return distribution(generator)+a;
}




int main(){

    pfilter<double,double> A(f,g,q,q_sam);
    return 0;
}
