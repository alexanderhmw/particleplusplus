/// main.cpp
/// this example shows how to use the C++ particle filter template

# include <iostream>
# include <fstream>
# include <cmath>
# include <chrono>
# include <random>
# include "setting.h"
# include "pfilter.h"  // include the template

// initialize the random seed
unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
std::default_random_engine generator (seed);

const precision_type PI = 3.14159265359;
const precision_type alpha = 0.91;
const precision_type beta = 1.0;

typedef precision_type statetype;
typedef precision_type obsvtype;

std::normal_distribution <statetype> distribution(0.0,1.0);

precision_type f(statetype x1, statetype x2){
    return exp(-0.5*pow((x1-alpha*x2),2));
}

precision_type g(statetype x, obsvtype y){
    return 1/exp(x/2)*exp(-0.5*pow(y/beta/exp(x/2),2));
}

precision_type q(statetype x1, statetype x2, obsvtype y){
    return exp(-0.5*pow((x1-alpha*x2),2));
}

statetype q_sam(statetype x, obsvtype y){
    return distribution(generator)+alpha*x;
}


int main(){
    pfilter <statetype,obsvtype> A(f,g,q,q_sam);
    std::ifstream in("data_y");     // data input
    std::ofstream on("data_xhat");  // data output
    in >> A;
    A.initialize(2000);  // initialize with
                        // the number of particles we want to use
    A.iterate();    // run
    on << A;        // output data
    return 0;       //  we are done
}
