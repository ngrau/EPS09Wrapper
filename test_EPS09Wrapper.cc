#include <eps09wrapper/AUEPS09.h>
#include <iostream>

int main(int argc, char** arrgv){

  //initialize
  int A = 197; //Au
  int order = 1; //LO
  int set = 1; //central value
  AUEPS09 *pdf = new AUEPS09(A,order);

  //use it to find the gluon modification
  //based on x=1e-3 and a Q^2 = 9 GeV^2
  double x = 1.e-3;
  double Q = 3;
  std::cout<<pdf->pdfmod(21,set,x,Q)<<std::endl;

  delete pdf;
  
  return 0;
}
