
# include <iostream>
# include <fstream>
# include "pfilter.h"
# include "ran_generator.h"


std::normal_distribution<double> distribution(0,1);

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
    return distribution(ran_gen::getInstance().get_gen())+a+b;
}




int main(){
    pfilter<double,double> A(f,g,q,q_sam);


    std::ifstream in("data");
    in>>A;
    A.initialize(100);
    A.iterate();

    std::cout<<A;

    return 0;
}
