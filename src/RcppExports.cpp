// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <RcppGSL.h>
#include <Rcpp.h>

using namespace Rcpp;

// intersect
arma::umat intersect(arma::umat first, arma::umat second);
RcppExport SEXP bcs_intersect(SEXP firstSEXP, SEXP secondSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::umat >::type first(firstSEXP);
    Rcpp::traits::input_parameter< arma::umat >::type second(secondSEXP);
    __result = Rcpp::wrap(intersect(first, second));
    return __result;
END_RCPP
}
// setdiff
arma::umat setdiff(arma::umat first, arma::umat second);
RcppExport SEXP bcs_setdiff(SEXP firstSEXP, SEXP secondSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::umat >::type first(firstSEXP);
    Rcpp::traits::input_parameter< arma::umat >::type second(secondSEXP);
    __result = Rcpp::wrap(setdiff(first, second));
    return __result;
END_RCPP
}
// FastLaplace
List FastLaplace(arma::mat PHI, arma::vec y, double sigma2, double eta, bool roundit, bool verbose);
RcppExport SEXP bcs_FastLaplace(SEXP PHISEXP, SEXP ySEXP, SEXP sigma2SEXP, SEXP etaSEXP, SEXP rounditSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat >::type PHI(PHISEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< double >::type sigma2(sigma2SEXP);
    Rcpp::traits::input_parameter< double >::type eta(etaSEXP);
    Rcpp::traits::input_parameter< bool >::type roundit(rounditSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    __result = Rcpp::wrap(FastLaplace(PHI, y, sigma2, eta, roundit, verbose));
    return __result;
END_RCPP
}
// GetCol
arma::mat GetCol(double index, arma::mat A, arma::mat B);
RcppExport SEXP bcs_GetCol(SEXP indexSEXP, SEXP ASEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< double >::type index(indexSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type A(ASEXP);
    Rcpp::traits::input_parameter< arma::mat >::type B(BSEXP);
    __result = Rcpp::wrap(GetCol(index, A, B));
    return __result;
END_RCPP
}
// GetColSumSquared
arma::mat GetColSumSquared(arma::mat A, arma::mat B);
RcppExport SEXP bcs_GetColSumSquared(SEXP ASEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat >::type A(ASEXP);
    Rcpp::traits::input_parameter< arma::mat >::type B(BSEXP);
    __result = Rcpp::wrap(GetColSumSquared(A, B));
    return __result;
END_RCPP
}
// MultMatrix
arma::mat MultMatrix(arma::mat D01, arma::mat D02, arma::mat x, int mode);
RcppExport SEXP bcs_MultMatrix(SEXP D01SEXP, SEXP D02SEXP, SEXP xSEXP, SEXP modeSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat >::type D01(D01SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type D02(D02SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type mode(modeSEXP);
    __result = Rcpp::wrap(MultMatrix(D01, D02, x, mode));
    return __result;
END_RCPP
}
// FastLaplaceKron
List FastLaplaceKron(arma::mat D01, arma::mat D02, arma::vec y, double sigma2, double eta, bool roundit, bool verbose);
RcppExport SEXP bcs_FastLaplaceKron(SEXP D01SEXP, SEXP D02SEXP, SEXP ySEXP, SEXP sigma2SEXP, SEXP etaSEXP, SEXP rounditSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat >::type D01(D01SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type D02(D02SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< double >::type sigma2(sigma2SEXP);
    Rcpp::traits::input_parameter< double >::type eta(etaSEXP);
    Rcpp::traits::input_parameter< bool >::type roundit(rounditSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    __result = Rcpp::wrap(FastLaplaceKron(D01, D02, y, sigma2, eta, roundit, verbose));
    return __result;
END_RCPP
}
