Particle++
=======================================
a C++ class template for particle filter

Particle filters or sequential Monte Carlo methods require sampling a large amount of particles at each iteration. This makes it particularly slow in MATLAB simulation. Therefore C++ implementation is desirable for the sake of speed. This template provides some useful C++ classes for users to simulate particle filters. We try to use the STL as much as possible to provide user with an intuitive and consistant interface. Unlike other particle filter softwares, we leave all the definition work of numerical functions to the user, therefore make the template highly extensible. Due to this design, the template does not depend on any other package or library. Only C++11 compiler is required. The following simple example shows how to use the template.

written by [Zhiyuan Weng](http://www.ece.sunysb.edu/~zyweng) (zhiyuan.weng@gmail.com)

Distributed under [GPL](http://www.gnu.org/licenses/gpl-3.0.html).

