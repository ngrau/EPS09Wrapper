#include "AUEPS09.h"
#include <iostream>

/* order, pset, AAA, xxx, QQQ, ruv, rdv, ru, rd, rs, rc, rb, rg */
extern "C" {
  void eps09_(int&, int&, int&, double&, double&, double&, double&, double&, double& , double& , double& , double& , double&);
}

double AUEPS09::pdfmod(int parton, int set, double x, double Q){
  if(parton<-5 || parton==0 || (parton>5 && parton!=21)){
    std::cout<<"Unknown parton: "<<parton<<std::endl;
    std::cout<<"Returning garbage"<<std::endl;
    return -9999.;
  }
  if(set<1 || set>31) {
    std::cout<<"Unknown set: "<<set<<std::endl;
    std::cout<<"Returning garbage"<<std::endl;
    return -9999.;
  }
  double ruv, rdv, ru, rd, rs, rc, rb, rg;
  eps09_(_order,set,_A,x,Q,ruv,rdv,ru,rd,rs,rc,rb,rg);

  switch (parton) {
    case 21:
      return rg;
    case -1:
      return rd;
    case 1:
      return rdv;
    case -2:
      return ru;
    case 2:
      return ruv;
    case -3:
    case 3:
      return rs;
    case -4:
    case 4:
      return rc;
    case -5:
    case 5:
      return rb;
  }

  std::cout<<"Not sure how I got here..."<<std::endl;
  std::cout<<"Returning garbage"<<std::endl;
  return -999.;
}
