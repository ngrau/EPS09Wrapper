#ifndef __AUEPS09_H__
#define __AUEPS09_H__

/**
 * @class  AUEPS09
 * @author Nathan Grau
 * @date   July 2011
 * 
 * @brief  This is a wrapper class around the EPS09 PDF modification code.
 *
 */

class AUEPS09 {

 public:

  /**
   * @brief Constructor
   * @brief A - the nuclear mass
   */
  AUEPS09(int A, int order=1) : _A(A), _order(order) {}

  /**
   * @brief Destructor
   */
  virtual ~AUEPS09() {}

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

 private:
  int _A;
  int _order;

};

#endif /* __EPS_H__ */
