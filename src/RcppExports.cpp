// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// crossprod_rcpp
Eigen::MatrixXd crossprod_rcpp(Eigen::MatrixXd A, Eigen::MatrixXd B);
RcppExport SEXP _htlgmm_crossprod_rcpp(SEXP ASEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type A(ASEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type B(BSEXP);
    rcpp_result_gen = Rcpp::wrap(crossprod_rcpp(A, B));
    return rcpp_result_gen;
END_RCPP
}
// prod_rcpp
Eigen::MatrixXd prod_rcpp(Eigen::MatrixXd A, Eigen::MatrixXd B);
RcppExport SEXP _htlgmm_prod_rcpp(SEXP ASEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type A(ASEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type B(BSEXP);
    rcpp_result_gen = Rcpp::wrap(prod_rcpp(A, B));
    return rcpp_result_gen;
END_RCPP
}
// crossprodv_rcpp
Eigen::VectorXd crossprodv_rcpp(Eigen::MatrixXd A, Eigen::VectorXd v);
RcppExport SEXP _htlgmm_crossprodv_rcpp(SEXP ASEXP, SEXP vSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type A(ASEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type v(vSEXP);
    rcpp_result_gen = Rcpp::wrap(crossprodv_rcpp(A, v));
    return rcpp_result_gen;
END_RCPP
}
// prodv_rcpp
Eigen::VectorXd prodv_rcpp(Eigen::MatrixXd A, Eigen::VectorXd v);
RcppExport SEXP _htlgmm_prodv_rcpp(SEXP ASEXP, SEXP vSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type A(ASEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type v(vSEXP);
    rcpp_result_gen = Rcpp::wrap(prodv_rcpp(A, v));
    return rcpp_result_gen;
END_RCPP
}
// self_crossprod_rcpp
Eigen::MatrixXd self_crossprod_rcpp(Eigen::MatrixXd A);
RcppExport SEXP _htlgmm_self_crossprod_rcpp(SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type A(ASEXP);
    rcpp_result_gen = Rcpp::wrap(self_crossprod_rcpp(A));
    return rcpp_result_gen;
END_RCPP
}
// expit_rcpp
Eigen::VectorXd expit_rcpp(Eigen::VectorXd v);
RcppExport SEXP _htlgmm_expit_rcpp(SEXP vSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type v(vSEXP);
    rcpp_result_gen = Rcpp::wrap(expit_rcpp(v));
    return rcpp_result_gen;
END_RCPP
}
// dexpit_rcpp
Eigen::VectorXd dexpit_rcpp(Eigen::VectorXd v);
RcppExport SEXP _htlgmm_dexpit_rcpp(SEXP vSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type v(vSEXP);
    rcpp_result_gen = Rcpp::wrap(dexpit_rcpp(v));
    return rcpp_result_gen;
END_RCPP
}
// add_rcpp
Eigen::VectorXd add_rcpp(Eigen::VectorXd u, Eigen::VectorXd v);
RcppExport SEXP _htlgmm_add_rcpp(SEXP uSEXP, SEXP vSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type u(uSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type v(vSEXP);
    rcpp_result_gen = Rcpp::wrap(add_rcpp(u, v));
    return rcpp_result_gen;
END_RCPP
}
// timesv_rcpp
Eigen::VectorXd timesv_rcpp(Eigen::VectorXd u, Eigen::VectorXd v);
RcppExport SEXP _htlgmm_timesv_rcpp(SEXP uSEXP, SEXP vSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type u(uSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type v(vSEXP);
    rcpp_result_gen = Rcpp::wrap(timesv_rcpp(u, v));
    return rcpp_result_gen;
END_RCPP
}
// timesm_rcpp
Eigen::MatrixXd timesm_rcpp(Eigen::MatrixXd A, Eigen::MatrixXd B);
RcppExport SEXP _htlgmm_timesm_rcpp(SEXP ASEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type A(ASEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type B(BSEXP);
    rcpp_result_gen = Rcpp::wrap(timesm_rcpp(A, B));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_htlgmm_crossprod_rcpp", (DL_FUNC) &_htlgmm_crossprod_rcpp, 2},
    {"_htlgmm_prod_rcpp", (DL_FUNC) &_htlgmm_prod_rcpp, 2},
    {"_htlgmm_crossprodv_rcpp", (DL_FUNC) &_htlgmm_crossprodv_rcpp, 2},
    {"_htlgmm_prodv_rcpp", (DL_FUNC) &_htlgmm_prodv_rcpp, 2},
    {"_htlgmm_self_crossprod_rcpp", (DL_FUNC) &_htlgmm_self_crossprod_rcpp, 1},
    {"_htlgmm_expit_rcpp", (DL_FUNC) &_htlgmm_expit_rcpp, 1},
    {"_htlgmm_dexpit_rcpp", (DL_FUNC) &_htlgmm_dexpit_rcpp, 1},
    {"_htlgmm_add_rcpp", (DL_FUNC) &_htlgmm_add_rcpp, 2},
    {"_htlgmm_timesv_rcpp", (DL_FUNC) &_htlgmm_timesv_rcpp, 2},
    {"_htlgmm_timesm_rcpp", (DL_FUNC) &_htlgmm_timesm_rcpp, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_htlgmm(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
