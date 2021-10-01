# EPS09Wrapper
C++ wrapper around fortran EPS09 code

This package contains assumes access to autotools. A shared object library libEPS09Wrapper.so is created. Make sure to link your code with this library. Any grids that you need are assumed to be in your run directory.

Currently only Au and Cu grids are available. Further grids are available at https://www.jyu.fi/science/en/physics/research/highenergy/urhic/npdfs/eps09

As an example of use see test_EPS09Wrapper.cc. After comiling the library, you can link and run the example. It should print out 0.767926.

Constructor:

AUEPS09(int A, int order=1)

A -- the nuclear mass

order -- 1=LO, 2=NLO

Single method of AUEPS09:

double pdfmod(int parton, int set, double x, double Q);

parton -- PDG identifier for parton flavor

set -- 1=central value, 2(+1sigma), 3(-1sigma), etc. values range from 1-31

x, Q -- x and sqrt(Q^2) of the event
