#include <Rcpp.h>
#include "gdallibrary/gdallibrary.h"

using namespace Rcpp;

// [[Rcpp::export]]
LogicalVector register_gdal_cpp() {
  gdallibrary::gdal_register_all();

  LogicalVector out(1);
  out[0] = true;
  return out;
}
