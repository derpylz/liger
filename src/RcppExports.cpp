// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/rliger.h"
#include <RcppArmadillo.h>
#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// RunModularityClusteringCpp
IntegerVector RunModularityClusteringCpp(Eigen::SparseMatrix<double> SNN, int modularityFunction, double resolution, int algorithm, int nRandomStarts, int nIterations, int randomSeed, bool printOutput, std::string edgefilename);
RcppExport SEXP _rliger_RunModularityClusteringCpp(SEXP SNNSEXP, SEXP modularityFunctionSEXP, SEXP resolutionSEXP, SEXP algorithmSEXP, SEXP nRandomStartsSEXP, SEXP nIterationsSEXP, SEXP randomSeedSEXP, SEXP printOutputSEXP, SEXP edgefilenameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double> >::type SNN(SNNSEXP);
    Rcpp::traits::input_parameter< int >::type modularityFunction(modularityFunctionSEXP);
    Rcpp::traits::input_parameter< double >::type resolution(resolutionSEXP);
    Rcpp::traits::input_parameter< int >::type algorithm(algorithmSEXP);
    Rcpp::traits::input_parameter< int >::type nRandomStarts(nRandomStartsSEXP);
    Rcpp::traits::input_parameter< int >::type nIterations(nIterationsSEXP);
    Rcpp::traits::input_parameter< int >::type randomSeed(randomSeedSEXP);
    Rcpp::traits::input_parameter< bool >::type printOutput(printOutputSEXP);
    Rcpp::traits::input_parameter< std::string >::type edgefilename(edgefilenameSEXP);
    rcpp_result_gen = Rcpp::wrap(RunModularityClusteringCpp(SNN, modularityFunction, resolution, algorithm, nRandomStarts, nIterations, randomSeed, printOutput, edgefilename));
    return rcpp_result_gen;
END_RCPP
}
// scaleNotCenterFast
arma::sp_mat scaleNotCenterFast(arma::sp_mat x);
RcppExport SEXP _rliger_scaleNotCenterFast(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::sp_mat >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(scaleNotCenterFast(x));
    return rcpp_result_gen;
END_RCPP
}
// rowMeansFast
NumericVector rowMeansFast(arma::sp_mat x);
RcppExport SEXP _rliger_rowMeansFast(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::sp_mat >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rowMeansFast(x));
    return rcpp_result_gen;
END_RCPP
}
// rowVarsFast
NumericVector rowVarsFast(arma::sp_mat x, NumericVector means);
RcppExport SEXP _rliger_rowVarsFast(SEXP xSEXP, SEXP meansSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::sp_mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type means(meansSEXP);
    rcpp_result_gen = Rcpp::wrap(rowVarsFast(x, means));
    return rcpp_result_gen;
END_RCPP
}
// sumSquaredDeviations
NumericVector sumSquaredDeviations(arma::sp_mat x, NumericVector means);
RcppExport SEXP _rliger_sumSquaredDeviations(SEXP xSEXP, SEXP meansSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::sp_mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type means(meansSEXP);
    rcpp_result_gen = Rcpp::wrap(sumSquaredDeviations(x, means));
    return rcpp_result_gen;
END_RCPP
}
// cpp_sumGroups_dgc
arma::mat cpp_sumGroups_dgc(const arma::vec& x, const arma::uvec& p, const arma::vec& i, unsigned ncol, const arma::uvec& groups, unsigned ngroups);
RcppExport SEXP _rliger_cpp_sumGroups_dgc(SEXP xSEXP, SEXP pSEXP, SEXP iSEXP, SEXP ncolSEXP, SEXP groupsSEXP, SEXP ngroupsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type p(pSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type i(iSEXP);
    Rcpp::traits::input_parameter< unsigned >::type ncol(ncolSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type groups(groupsSEXP);
    Rcpp::traits::input_parameter< unsigned >::type ngroups(ngroupsSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_sumGroups_dgc(x, p, i, ncol, groups, ngroups));
    return rcpp_result_gen;
END_RCPP
}
// cpp_sumGroups_dgc_T
arma::mat cpp_sumGroups_dgc_T(const arma::vec& x, const arma::vec& p, const arma::vec& i, int ncol, int nrow, const arma::uvec& groups, int ngroups);
RcppExport SEXP _rliger_cpp_sumGroups_dgc_T(SEXP xSEXP, SEXP pSEXP, SEXP iSEXP, SEXP ncolSEXP, SEXP nrowSEXP, SEXP groupsSEXP, SEXP ngroupsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type p(pSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type i(iSEXP);
    Rcpp::traits::input_parameter< int >::type ncol(ncolSEXP);
    Rcpp::traits::input_parameter< int >::type nrow(nrowSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type groups(groupsSEXP);
    Rcpp::traits::input_parameter< int >::type ngroups(ngroupsSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_sumGroups_dgc_T(x, p, i, ncol, nrow, groups, ngroups));
    return rcpp_result_gen;
END_RCPP
}
// cpp_sumGroups_dense
arma::mat cpp_sumGroups_dense(const arma::mat& X, const arma::uvec& groups, unsigned ngroups);
RcppExport SEXP _rliger_cpp_sumGroups_dense(SEXP XSEXP, SEXP groupsSEXP, SEXP ngroupsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type groups(groupsSEXP);
    Rcpp::traits::input_parameter< unsigned >::type ngroups(ngroupsSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_sumGroups_dense(X, groups, ngroups));
    return rcpp_result_gen;
END_RCPP
}
// cpp_sumGroups_dense_T
arma::mat cpp_sumGroups_dense_T(const arma::mat& X, const arma::uvec& groups, unsigned ngroups);
RcppExport SEXP _rliger_cpp_sumGroups_dense_T(SEXP XSEXP, SEXP groupsSEXP, SEXP ngroupsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type groups(groupsSEXP);
    Rcpp::traits::input_parameter< unsigned >::type ngroups(ngroupsSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_sumGroups_dense_T(X, groups, ngroups));
    return rcpp_result_gen;
END_RCPP
}
// cpp_nnzeroGroups_dense
arma::mat cpp_nnzeroGroups_dense(const arma::mat& X, const arma::uvec& groups, unsigned ngroups);
RcppExport SEXP _rliger_cpp_nnzeroGroups_dense(SEXP XSEXP, SEXP groupsSEXP, SEXP ngroupsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type groups(groupsSEXP);
    Rcpp::traits::input_parameter< unsigned >::type ngroups(ngroupsSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_nnzeroGroups_dense(X, groups, ngroups));
    return rcpp_result_gen;
END_RCPP
}
// cpp_nnzeroGroups_dense_T
arma::mat cpp_nnzeroGroups_dense_T(const arma::mat& X, const arma::uvec& groups, unsigned ngroups);
RcppExport SEXP _rliger_cpp_nnzeroGroups_dense_T(SEXP XSEXP, SEXP groupsSEXP, SEXP ngroupsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type groups(groupsSEXP);
    Rcpp::traits::input_parameter< unsigned >::type ngroups(ngroupsSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_nnzeroGroups_dense_T(X, groups, ngroups));
    return rcpp_result_gen;
END_RCPP
}
// cpp_nnzeroGroups_dgc
arma::mat cpp_nnzeroGroups_dgc(const arma::uvec& p, const arma::vec& i, unsigned ncol, const arma::uvec& groups, unsigned ngroups);
RcppExport SEXP _rliger_cpp_nnzeroGroups_dgc(SEXP pSEXP, SEXP iSEXP, SEXP ncolSEXP, SEXP groupsSEXP, SEXP ngroupsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::uvec& >::type p(pSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type i(iSEXP);
    Rcpp::traits::input_parameter< unsigned >::type ncol(ncolSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type groups(groupsSEXP);
    Rcpp::traits::input_parameter< unsigned >::type ngroups(ngroupsSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_nnzeroGroups_dgc(p, i, ncol, groups, ngroups));
    return rcpp_result_gen;
END_RCPP
}
// cpp_in_place_rank_mean
std::list<float> cpp_in_place_rank_mean(arma::vec& v_temp, int idx_begin, int idx_end);
RcppExport SEXP _rliger_cpp_in_place_rank_mean(SEXP v_tempSEXP, SEXP idx_beginSEXP, SEXP idx_endSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec& >::type v_temp(v_tempSEXP);
    Rcpp::traits::input_parameter< int >::type idx_begin(idx_beginSEXP);
    Rcpp::traits::input_parameter< int >::type idx_end(idx_endSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_in_place_rank_mean(v_temp, idx_begin, idx_end));
    return rcpp_result_gen;
END_RCPP
}
// cpp_rank_matrix_dgc
std::vector<std::list<float> > cpp_rank_matrix_dgc(arma::vec& x, const arma::vec& p, int nrow, int ncol);
RcppExport SEXP _rliger_cpp_rank_matrix_dgc(SEXP xSEXP, SEXP pSEXP, SEXP nrowSEXP, SEXP ncolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type p(pSEXP);
    Rcpp::traits::input_parameter< int >::type nrow(nrowSEXP);
    Rcpp::traits::input_parameter< int >::type ncol(ncolSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_rank_matrix_dgc(x, p, nrow, ncol));
    return rcpp_result_gen;
END_RCPP
}
// cpp_rank_matrix_dense
Rcpp::List cpp_rank_matrix_dense(arma::mat& X);
RcppExport SEXP _rliger_cpp_rank_matrix_dense(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_rank_matrix_dense(X));
    return rcpp_result_gen;
END_RCPP
}
// cpp_nnzeroGroups_dgc_T
arma::mat cpp_nnzeroGroups_dgc_T(const arma::vec& p, const arma::vec& i, int ncol, int nrow, const arma::uvec& groups, int ngroups);
RcppExport SEXP _rliger_cpp_nnzeroGroups_dgc_T(SEXP pSEXP, SEXP iSEXP, SEXP ncolSEXP, SEXP nrowSEXP, SEXP groupsSEXP, SEXP ngroupsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type p(pSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type i(iSEXP);
    Rcpp::traits::input_parameter< int >::type ncol(ncolSEXP);
    Rcpp::traits::input_parameter< int >::type nrow(nrowSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type groups(groupsSEXP);
    Rcpp::traits::input_parameter< int >::type ngroups(ngroupsSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_nnzeroGroups_dgc_T(p, i, ncol, nrow, groups, ngroups));
    return rcpp_result_gen;
END_RCPP
}
// makeFeatureMatrix
NumericMatrix makeFeatureMatrix(DataFrame& bedmat, StringVector& barcodes);
RcppExport SEXP _rliger_makeFeatureMatrix(SEXP bedmatSEXP, SEXP barcodesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame& >::type bedmat(bedmatSEXP);
    Rcpp::traits::input_parameter< StringVector& >::type barcodes(barcodesSEXP);
    rcpp_result_gen = Rcpp::wrap(makeFeatureMatrix(bedmat, barcodes));
    return rcpp_result_gen;
END_RCPP
}
// cluster_vote
IntegerVector cluster_vote(const Eigen::MatrixXd& nn_ranked, IntegerVector clusts);
RcppExport SEXP _rliger_cluster_vote(SEXP nn_rankedSEXP, SEXP clustsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type nn_ranked(nn_rankedSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type clusts(clustsSEXP);
    rcpp_result_gen = Rcpp::wrap(cluster_vote(nn_ranked, clusts));
    return rcpp_result_gen;
END_RCPP
}
// scale_columns_fast
Eigen::MatrixXd scale_columns_fast(Eigen::MatrixXd mat, bool scale, bool center);
RcppExport SEXP _rliger_scale_columns_fast(SEXP matSEXP, SEXP scaleSEXP, SEXP centerSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type mat(matSEXP);
    Rcpp::traits::input_parameter< bool >::type scale(scaleSEXP);
    Rcpp::traits::input_parameter< bool >::type center(centerSEXP);
    rcpp_result_gen = Rcpp::wrap(scale_columns_fast(mat, scale, center));
    return rcpp_result_gen;
END_RCPP
}
// max_factor
IntegerVector max_factor(Eigen::MatrixXd H, IntegerVector dims_use, bool center_cols);
RcppExport SEXP _rliger_max_factor(SEXP HSEXP, SEXP dims_useSEXP, SEXP center_colsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type H(HSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type dims_use(dims_useSEXP);
    Rcpp::traits::input_parameter< bool >::type center_cols(center_colsSEXP);
    rcpp_result_gen = Rcpp::wrap(max_factor(H, dims_use, center_cols));
    return rcpp_result_gen;
END_RCPP
}
// solveNNLS
arma::mat solveNNLS(const arma::mat& C, const arma::mat& B);
RcppExport SEXP _rliger_solveNNLS(SEXP CSEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type C(CSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type B(BSEXP);
    rcpp_result_gen = Rcpp::wrap(solveNNLS(C, B));
    return rcpp_result_gen;
END_RCPP
}
// ComputeSNN
Eigen::SparseMatrix<double> ComputeSNN(Eigen::MatrixXd nn_ranked, double prune);
RcppExport SEXP _rliger_ComputeSNN(SEXP nn_rankedSEXP, SEXP pruneSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type nn_ranked(nn_rankedSEXP);
    Rcpp::traits::input_parameter< double >::type prune(pruneSEXP);
    rcpp_result_gen = Rcpp::wrap(ComputeSNN(nn_ranked, prune));
    return rcpp_result_gen;
END_RCPP
}
// WriteEdgeFile
void WriteEdgeFile(Eigen::SparseMatrix<double> snn, String filename, bool display_progress);
RcppExport SEXP _rliger_WriteEdgeFile(SEXP snnSEXP, SEXP filenameSEXP, SEXP display_progressSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double> >::type snn(snnSEXP);
    Rcpp::traits::input_parameter< String >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< bool >::type display_progress(display_progressSEXP);
    WriteEdgeFile(snn, filename, display_progress);
    return R_NilValue;
END_RCPP
}
// DirectSNNToFile
Eigen::SparseMatrix<double> DirectSNNToFile(Eigen::MatrixXd nn_ranked, double prune, bool display_progress, String filename);
RcppExport SEXP _rliger_DirectSNNToFile(SEXP nn_rankedSEXP, SEXP pruneSEXP, SEXP display_progressSEXP, SEXP filenameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type nn_ranked(nn_rankedSEXP);
    Rcpp::traits::input_parameter< double >::type prune(pruneSEXP);
    Rcpp::traits::input_parameter< bool >::type display_progress(display_progressSEXP);
    Rcpp::traits::input_parameter< String >::type filename(filenameSEXP);
    rcpp_result_gen = Rcpp::wrap(DirectSNNToFile(nn_ranked, prune, display_progress, filename));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_rliger_RunModularityClusteringCpp", (DL_FUNC) &_rliger_RunModularityClusteringCpp, 9},
    {"_rliger_scaleNotCenterFast", (DL_FUNC) &_rliger_scaleNotCenterFast, 1},
    {"_rliger_rowMeansFast", (DL_FUNC) &_rliger_rowMeansFast, 1},
    {"_rliger_rowVarsFast", (DL_FUNC) &_rliger_rowVarsFast, 2},
    {"_rliger_sumSquaredDeviations", (DL_FUNC) &_rliger_sumSquaredDeviations, 2},
    {"_rliger_cpp_sumGroups_dgc", (DL_FUNC) &_rliger_cpp_sumGroups_dgc, 6},
    {"_rliger_cpp_sumGroups_dgc_T", (DL_FUNC) &_rliger_cpp_sumGroups_dgc_T, 7},
    {"_rliger_cpp_sumGroups_dense", (DL_FUNC) &_rliger_cpp_sumGroups_dense, 3},
    {"_rliger_cpp_sumGroups_dense_T", (DL_FUNC) &_rliger_cpp_sumGroups_dense_T, 3},
    {"_rliger_cpp_nnzeroGroups_dense", (DL_FUNC) &_rliger_cpp_nnzeroGroups_dense, 3},
    {"_rliger_cpp_nnzeroGroups_dense_T", (DL_FUNC) &_rliger_cpp_nnzeroGroups_dense_T, 3},
    {"_rliger_cpp_nnzeroGroups_dgc", (DL_FUNC) &_rliger_cpp_nnzeroGroups_dgc, 5},
    {"_rliger_cpp_in_place_rank_mean", (DL_FUNC) &_rliger_cpp_in_place_rank_mean, 3},
    {"_rliger_cpp_rank_matrix_dgc", (DL_FUNC) &_rliger_cpp_rank_matrix_dgc, 4},
    {"_rliger_cpp_rank_matrix_dense", (DL_FUNC) &_rliger_cpp_rank_matrix_dense, 1},
    {"_rliger_cpp_nnzeroGroups_dgc_T", (DL_FUNC) &_rliger_cpp_nnzeroGroups_dgc_T, 6},
    {"_rliger_makeFeatureMatrix", (DL_FUNC) &_rliger_makeFeatureMatrix, 2},
    {"_rliger_cluster_vote", (DL_FUNC) &_rliger_cluster_vote, 2},
    {"_rliger_scale_columns_fast", (DL_FUNC) &_rliger_scale_columns_fast, 3},
    {"_rliger_max_factor", (DL_FUNC) &_rliger_max_factor, 3},
    {"_rliger_solveNNLS", (DL_FUNC) &_rliger_solveNNLS, 2},
    {"_rliger_ComputeSNN", (DL_FUNC) &_rliger_ComputeSNN, 2},
    {"_rliger_WriteEdgeFile", (DL_FUNC) &_rliger_WriteEdgeFile, 3},
    {"_rliger_DirectSNNToFile", (DL_FUNC) &_rliger_DirectSNNToFile, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_rliger(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
