/// main.cpp
/// this example shows how to use the C++ particle filter template

# include <iostream>
# include <fstream>
# include <cmath>
# include "pfilter.h"
# include "ran_generator.h"

const double PI = 3.14159265359;

const double alpha = 0.91;
const double beta = 0.5;

double f(double x1, double x2){
    return 1/sqrt(2*PI)*exp(-0.5*pow((x1-alpha*x2),2));
}

double g(double x, double y){
    return 1/sqrt(2*PI)*exp(-0.5*pow((y/beta/exp(x/2)),2));
}

double q(double x1, double x2, double y){
    return 1/sqrt(2*PI)*exp(-0.5*pow((x1-alpha*x2),2));
}

double q_sam(double x, double y){
    std::normal_distribution<double> distribution(0,1);
    return distribution(ran_gen::getInstance().get_gen())+alpha*x;
}

int main(){
    pfilter<double,double> A(f,g,q,q_sam);
    std::ifstream in("data");
    in>>A;
    A.initialize(200);
    A.iterate();
    std::cout<<A;
    return 0;
}
