# EPS09Wrapper
C++ wrapper around fortran EPS09 code

This package contains assumes access to autotools. A shared object library libEPS09Wrapper.so is created. Make sure to link your code with this library. Any grids that you need are assumed to be in your run directory.

As an example of use see test_EPS09Wrapper.cc. After comiling the library, you can link and run the example. It should print out 0.767926.

The relevant doxygen comments are included here for ease of reference.

/**
 * @brief Constructor
 * @brief A - the nuclear mass
 */
AUEPS09(int A, int order=1)

/**
 * @brief Return the LO modification factor for a given parton,
 *        error set, x, and Q values
 * @param parton - the pdg id of the parton to evaluate
 *           21) gluon
 *           1) d valence
 *           2) u valence
 *          -1) bar(d)
 *          -2) bar(u)
 *        (-)3) (bar)s
 *        (-)4) (bar)c
 *        (-)5) (bar)b
 * @param set - the error set
 *           1) central values
 *           2,3) +/- 1 sigma uncertainties
 *           4,5) +/- 2 sigma uncertainties
 *           ...
 *           30,31) +/- 15 sigma uncertainties
 * @param x - the energy fraction the parton carries of the 
 *            projectile or target
 * @param Q - the sqrt(Q^2) of the interaction
 */
double pdfmod(int parton, int set, double x, double Q);

