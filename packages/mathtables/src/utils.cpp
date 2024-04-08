#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export( name = ".plus" )]]
IntegerVector dot_plus( IntegerVector x, IntegerVector y ){
  int xn = x.size();
  int yn = y.size();
  
  IntegerMatrix xpy ( xn, yn );
  
  for(int i = 0; i < xn; i++) {
    for (int j = 0; j < yn; j++) {
      xpy( i, j ) = x[ i ] + y[ j ];
    }
  }
  return xpy;
}
  
  // [[Rcpp::export( name = ".times" )]]
  IntegerVector dot_times( IntegerVector x, IntegerVector y ){
    int xn = x.size();
    int yn = y.size();
    
    IntegerMatrix xpy ( xn, yn );
    
    for(int i = 0; i < xn; i++) {
      for (int j = 0; j < yn; j++) {
        xpy( i, j ) = x[ i ] * y[ j ];
      }
    }
    return xpy;
  }