// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// Det
double Det(arma::mat x);
RcppExport SEXP _dccmidas_Det(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(Det(x));
    return rcpp_result_gen;
END_RCPP
}
// Inv
arma::mat Inv(arma::mat x);
RcppExport SEXP _dccmidas_Inv(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(Inv(x));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_dccmidas_Det", (DL_FUNC) &_dccmidas_Det, 1},
    {"_dccmidas_Inv", (DL_FUNC) &_dccmidas_Inv, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_dccmidas(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}