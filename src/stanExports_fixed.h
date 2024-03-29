// Generated by rstantools.  Do not edit by hand.

/*
    metaBMA-dev-rstantools is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    metaBMA-dev-rstantools is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with metaBMA-dev-rstantools.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef MODELS_HPP
#define MODELS_HPP
#define STAN__SERVICES__COMMAND_HPP
#ifndef USE_STANC3
#define USE_STANC3
#endif
#include <rstan/rstaninc.hpp>
// Code generated by stanc v2.26.1-4-gd72b68b7-dirty
#include <stan/model/model_header.hpp>
namespace model_fixed_namespace {
inline void validate_positive_index(const char* var_name, const char* expr,
                                    int val) {
  if (val < 1) {
    std::stringstream msg;
    msg << "Found dimension size less than one in simplex declaration"
        << "; variable=" << var_name << "; dimension size expression=" << expr
        << "; expression value=" << val;
    std::string msg_str(msg.str());
    throw std::invalid_argument(msg_str.c_str());
  }
}
inline void validate_unit_vector_index(const char* var_name, const char* expr,
                                       int val) {
  if (val <= 1) {
    std::stringstream msg;
    if (val == 1) {
      msg << "Found dimension size one in unit vector declaration."
          << " One-dimensional unit vector is discrete"
          << " but the target distribution must be continuous."
          << " variable=" << var_name << "; dimension size expression=" << expr;
    } else {
      msg << "Found dimension size less than one in unit vector declaration"
          << "; variable=" << var_name << "; dimension size expression=" << expr
          << "; expression value=" << val;
    }
    std::string msg_str(msg.str());
    throw std::invalid_argument(msg_str.c_str());
  }
}
using std::istream;
using std::string;
using std::stringstream;
using std::vector;
using std::pow;
using stan::io::dump;
using stan::math::lgamma;
using stan::model::model_base_crtp;
using stan::model::rvalue;
using stan::model::cons_list;
using stan::model::index_uni;
using stan::model::index_max;
using stan::model::index_min;
using stan::model::index_min_max;
using stan::model::index_multi;
using stan::model::index_omni;
using stan::model::nil_index_list;
using namespace stan::math;
using stan::math::pow; 
stan::math::profile_map profiles__;
static int current_statement__= 0;
static const std::vector<string> locations_array__ = {" (found before start of program)",
                                                      " (in 'string', line 72, column 0 to column 39)",
                                                      " (in 'string', line 76, column 0 to column 18)",
                                                      " (in 'string', line 86, column 2 to column 52)",
                                                      " (in 'string', line 85, column 26 to line 87, column 1)",
                                                      " (in 'string', line 85, column 7 to line 87, column 1)",
                                                      " (in 'string', line 84, column 2 to column 56)",
                                                      " (in 'string', line 83, column 26 to line 85, column 1)",
                                                      " (in 'string', line 83, column 7 to line 87, column 1)",
                                                      " (in 'string', line 82, column 2 to column 87)",
                                                      " (in 'string', line 81, column 26 to line 83, column 1)",
                                                      " (in 'string', line 81, column 7 to line 87, column 1)",
                                                      " (in 'string', line 80, column 2 to column 68)",
                                                      " (in 'string', line 79, column 26 to line 81, column 1)",
                                                      " (in 'string', line 79, column 7 to line 87, column 1)",
                                                      " (in 'string', line 78, column 2 to column 53)",
                                                      " (in 'string', line 77, column 18 to line 79, column 1)",
                                                      " (in 'string', line 77, column 0 to line 87, column 1)",
                                                      " (in 'string', line 88, column 2 to column 35)",
                                                      " (in 'string', line 18, column 0 to column 15)",
                                                      " (in 'string', line 19, column 7 to column 8)",
                                                      " (in 'string', line 19, column 0 to column 12)",
                                                      " (in 'string', line 20, column 16 to column 17)",
                                                      " (in 'string', line 20, column 0 to column 22)",
                                                      " (in 'string', line 22, column 0 to column 22)",
                                                      " (in 'string', line 23, column 0 to column 18)",
                                                      " (in 'string', line 24, column 0 to column 17)",
                                                      " (in 'string', line 27, column 2 to column 19)",
                                                      " (in 'string', line 65, column 4 to line 66, column 76)",
                                                      " (in 'string', line 64, column 9 to line 67, column 3)",
                                                      " (in 'string', line 63, column 4 to column 16)",
                                                      " (in 'string', line 62, column 40 to line 64, column 3)",
                                                      " (in 'string', line 62, column 2 to line 67, column 3)",
                                                      " (in 'string', line 61, column 26 to line 68, column 1)",
                                                      " (in 'string', line 61, column 7 to line 68, column 1)",
                                                      " (in 'string', line 57, column 4 to line 58, column 80)",
                                                      " (in 'string', line 56, column 9 to line 59, column 3)",
                                                      " (in 'string', line 55, column 4 to column 16)",
                                                      " (in 'string', line 54, column 40 to line 56, column 3)",
                                                      " (in 'string', line 54, column 2 to line 59, column 3)",
                                                      " (in 'string', line 53, column 26 to line 61, column 1)",
                                                      " (in 'string', line 53, column 7 to line 68, column 1)",
                                                      " (in 'string', line 50, column 4 to column 41)",
                                                      " (in 'string', line 49, column 9 to line 51, column 3)",
                                                      " (in 'string', line 48, column 4 to column 16)",
                                                      " (in 'string', line 47, column 37 to line 49, column 3)",
                                                      " (in 'string', line 47, column 2 to line 51, column 3)",
                                                      " (in 'string', line 46, column 26 to line 53, column 1)",
                                                      " (in 'string', line 46, column 7 to line 68, column 1)",
                                                      " (in 'string', line 42, column 4 to line 43, column 92)",
                                                      " (in 'string', line 41, column 9 to line 44, column 3)",
                                                      " (in 'string', line 40, column 4 to column 16)",
                                                      " (in 'string', line 39, column 43 to line 41, column 3)",
                                                      " (in 'string', line 39, column 2 to line 44, column 3)",
                                                      " (in 'string', line 38, column 26 to line 46, column 1)",
                                                      " (in 'string', line 38, column 7 to line 68, column 1)",
                                                      " (in 'string', line 34, column 4 to line 35, column 77)",
                                                      " (in 'string', line 33, column 9 to line 36, column 3)",
                                                      " (in 'string', line 32, column 4 to column 16)",
                                                      " (in 'string', line 31, column 43 to line 33, column 3)",
                                                      " (in 'string', line 31, column 2 to line 36, column 3)",
                                                      " (in 'string', line 30, column 18 to line 38, column 1)",
                                                      " (in 'string', line 30, column 0 to line 68, column 1)"};
#include <stan_meta_header.hpp>
class model_fixed final : public model_base_crtp<model_fixed> {
private:
  int N;
  Eigen::Matrix<double, -1, 1> y;
  Eigen::Matrix<double, -1, 1> SE;
  int d_family;
  Eigen::Matrix<double, -1, 1> d_param;
  Eigen::Matrix<double, -1, 1> d_bnd;
  double d_const;
 
public:
  ~model_fixed() { }
  
  inline std::string model_name() const final { return "model_fixed"; }
  inline std::vector<std::string> model_compile_info() const noexcept {
    return std::vector<std::string>{"stanc_version = stanc3 v2.26.1-4-gd72b68b7-dirty", "stancflags = "};
  }
  
  
  model_fixed(stan::io::var_context& context__,
              unsigned int random_seed__ = 0,
              std::ostream* pstream__ = nullptr) : model_base_crtp(0) {
    using local_scalar_t__ = double ;
    boost::ecuyer1988 base_rng__ = 
        stan::services::util::create_rng(random_seed__, 0);
    (void) base_rng__;  // suppress unused var warning
    static const char* function__ = "model_fixed_namespace::model_fixed";
    (void) function__;  // suppress unused var warning
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    (void) DUMMY_VAR__;  // suppress unused var warning
    
    try {
      int pos__;
      pos__ = std::numeric_limits<int>::min();
      
      pos__ = 1;
      current_statement__ = 19;
      context__.validate_dims("data initialization","N","int",
          context__.to_vec());
      N = std::numeric_limits<int>::min();
      
      current_statement__ = 19;
      N = context__.vals_i("N")[(1 - 1)];
      current_statement__ = 19;
      current_statement__ = 19;
      check_greater_or_equal(function__, "N", N, 0);
      current_statement__ = 20;
      validate_non_negative_index("y", "N", N);
      current_statement__ = 21;
      context__.validate_dims("data initialization","y","double",
          context__.to_vec(N));
      y = Eigen::Matrix<double, -1, 1>(N);
      stan::math::fill(y, std::numeric_limits<double>::quiet_NaN());
      
      {
        std::vector<local_scalar_t__> y_flat__;
        current_statement__ = 21;
        assign(y_flat__, nil_index_list(), context__.vals_r("y"),
          "assigning variable y_flat__");
        current_statement__ = 21;
        pos__ = 1;
        current_statement__ = 21;
        for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
          current_statement__ = 21;
          assign(y, cons_list(index_uni(sym1__), nil_index_list()),
            y_flat__[(pos__ - 1)], "assigning variable y");
          current_statement__ = 21;
          pos__ = (pos__ + 1);}
      }
      current_statement__ = 22;
      validate_non_negative_index("SE", "N", N);
      current_statement__ = 23;
      context__.validate_dims("data initialization","SE","double",
          context__.to_vec(N));
      SE = Eigen::Matrix<double, -1, 1>(N);
      stan::math::fill(SE, std::numeric_limits<double>::quiet_NaN());
      
      {
        std::vector<local_scalar_t__> SE_flat__;
        current_statement__ = 23;
        assign(SE_flat__, nil_index_list(), context__.vals_r("SE"),
          "assigning variable SE_flat__");
        current_statement__ = 23;
        pos__ = 1;
        current_statement__ = 23;
        for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
          current_statement__ = 23;
          assign(SE, cons_list(index_uni(sym1__), nil_index_list()),
            SE_flat__[(pos__ - 1)], "assigning variable SE");
          current_statement__ = 23;
          pos__ = (pos__ + 1);}
      }
      current_statement__ = 23;
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        current_statement__ = 23;
        current_statement__ = 23;
        check_greater_or_equal(function__, "SE[sym1__]", SE[(sym1__ - 1)], 0);
      }
      current_statement__ = 24;
      context__.validate_dims("data initialization","d_family","int",
          context__.to_vec());
      d_family = std::numeric_limits<int>::min();
      
      current_statement__ = 24;
      d_family = context__.vals_i("d_family")[(1 - 1)];
      current_statement__ = 24;
      current_statement__ = 24;
      check_greater_or_equal(function__, "d_family", d_family, 1);
      current_statement__ = 25;
      context__.validate_dims("data initialization","d_param","double",
          context__.to_vec(3));
      d_param = Eigen::Matrix<double, -1, 1>(3);
      stan::math::fill(d_param, std::numeric_limits<double>::quiet_NaN());
      
      {
        std::vector<local_scalar_t__> d_param_flat__;
        current_statement__ = 25;
        assign(d_param_flat__, nil_index_list(), context__.vals_r("d_param"),
          "assigning variable d_param_flat__");
        current_statement__ = 25;
        pos__ = 1;
        current_statement__ = 25;
        for (int sym1__ = 1; sym1__ <= 3; ++sym1__) {
          current_statement__ = 25;
          assign(d_param, cons_list(index_uni(sym1__), nil_index_list()),
            d_param_flat__[(pos__ - 1)], "assigning variable d_param");
          current_statement__ = 25;
          pos__ = (pos__ + 1);}
      }
      current_statement__ = 26;
      context__.validate_dims("data initialization","d_bnd","double",
          context__.to_vec(2));
      d_bnd = Eigen::Matrix<double, -1, 1>(2);
      stan::math::fill(d_bnd, std::numeric_limits<double>::quiet_NaN());
      
      {
        std::vector<local_scalar_t__> d_bnd_flat__;
        current_statement__ = 26;
        assign(d_bnd_flat__, nil_index_list(), context__.vals_r("d_bnd"),
          "assigning variable d_bnd_flat__");
        current_statement__ = 26;
        pos__ = 1;
        current_statement__ = 26;
        for (int sym1__ = 1; sym1__ <= 2; ++sym1__) {
          current_statement__ = 26;
          assign(d_bnd, cons_list(index_uni(sym1__), nil_index_list()),
            d_bnd_flat__[(pos__ - 1)], "assigning variable d_bnd");
          current_statement__ = 26;
          pos__ = (pos__ + 1);}
      }
      current_statement__ = 26;
      current_statement__ = 26;
      check_ordered(function__, "d_bnd", d_bnd);
      current_statement__ = 27;
      d_const = std::numeric_limits<double>::quiet_NaN();
      
      current_statement__ = 27;
      d_const = 0;
      current_statement__ = 62;
      if (logical_eq(d_family, 1)) {
        current_statement__ = 60;
        if ((primitive_value(is_inf(d_bnd[(1 - 1)])) && primitive_value(
            is_inf(d_bnd[(2 - 1)])))) {
          current_statement__ = 58;
          d_const = 0;
        } else {
          current_statement__ = 56;
          d_const = -log_diff_exp(
                       normal_lcdf(d_bnd[(2 - 1)], d_param[(1 - 1)],
                         d_param[(2 - 1)]),
                       normal_lcdf(d_bnd[(1 - 1)], d_param[(1 - 1)],
                         d_param[(2 - 1)]));
        }
      } else {
        current_statement__ = 55;
        if (logical_eq(d_family, 2)) {
          current_statement__ = 53;
          if ((primitive_value(is_inf(d_bnd[(1 - 1)])) && primitive_value(
              is_inf(d_bnd[(2 - 1)])))) {
            current_statement__ = 51;
            d_const = 0;
          } else {
            current_statement__ = 49;
            d_const = -log_diff_exp(
                         student_t_lcdf(d_bnd[(2 - 1)], d_param[(3 - 1)],
                           d_param[(1 - 1)], d_param[(2 - 1)]),
                         student_t_lcdf(d_bnd[(1 - 1)], d_param[(3 - 1)],
                           d_param[(1 - 1)], d_param[(2 - 1)]));
          }
        } else {
          current_statement__ = 48;
          if (logical_eq(d_family, 3)) {
            current_statement__ = 46;
            if ((primitive_value(logical_eq(d_bnd[(1 - 1)], 0)) &&
                primitive_value(logical_eq(d_bnd[(2 - 1)], 1)))) {
              current_statement__ = 44;
              d_const = 0;
            } else {
              current_statement__ = 42;
              d_const = -stan::math::log((d_bnd[(2 - 1)] - d_bnd[(1 - 1)]));
            }
          } else {
            current_statement__ = 41;
            if (logical_eq(d_family, 4)) {
              current_statement__ = 39;
              if ((primitive_value(logical_eq(d_bnd[(1 - 1)], 0)) &&
                  primitive_value(is_inf(d_bnd[(2 - 1)])))) {
                current_statement__ = 37;
                d_const = 0;
              } else {
                current_statement__ = 35;
                d_const = -log_diff_exp(
                             inv_gamma_lcdf(d_bnd[(2 - 1)], d_param[(1 - 1)],
                               d_param[(2 - 1)]),
                             inv_gamma_lcdf(d_bnd[(1 - 1)], d_param[(1 - 1)],
                               d_param[(2 - 1)]));
              }
            } else {
              current_statement__ = 34;
              if (logical_eq(d_family, 5)) {
                current_statement__ = 32;
                if ((primitive_value(logical_eq(d_bnd[(1 - 1)], 0)) &&
                    primitive_value(is_inf(d_bnd[(2 - 1)])))) {
                  current_statement__ = 30;
                  d_const = 0;
                } else {
                  current_statement__ = 28;
                  d_const = -log_diff_exp(
                               gamma_lcdf(d_bnd[(2 - 1)], d_param[(1 - 1)],
                                 d_param[(2 - 1)]),
                               gamma_lcdf(d_bnd[(1 - 1)], d_param[(1 - 1)],
                                 d_param[(2 - 1)]));
                }
              } 
            }
          }
        }
      }
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
      // Next line prevents compiler griping about no return
      throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***"); 
    }
    num_params_r__ = 0U;
    
    try {
      num_params_r__ += 1;
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
      // Next line prevents compiler griping about no return
      throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***"); 
    }
  }
  template <bool propto__, bool jacobian__, typename VecR, typename VecI, stan::require_vector_like_t<VecR>* = nullptr, stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr>
  inline stan::scalar_type_t<VecR> log_prob_impl(VecR& params_r__,
                                                 VecI& params_i__,
                                                 std::ostream* pstream__ = nullptr) const {
    using T__ = stan::scalar_type_t<VecR>;
    using local_scalar_t__ = T__;
    T__ lp__(0.0);
    stan::math::accumulator<T__> lp_accum__;
    static const char* function__ = "model_fixed_namespace::log_prob";
(void) function__;  // suppress unused var warning
    stan::io::reader<local_scalar_t__> in__(params_r__, params_i__);
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    (void) DUMMY_VAR__;  // suppress unused var warning
    
    try {
      local_scalar_t__ d;
      d = DUMMY_VAR__;
      
      current_statement__ = 1;
      d = in__.scalar();
      current_statement__ = 1;
      if (jacobian__) {
        current_statement__ = 1;
        d = stan::math::lub_constrain(d, d_bnd[(1 - 1)], d_bnd[(2 - 1)], lp__);
      } else {
        current_statement__ = 1;
        d = stan::math::lub_constrain(d, d_bnd[(1 - 1)], d_bnd[(2 - 1)]);
      }
      {
        current_statement__ = 2;
        lp_accum__.add(d_const);
        current_statement__ = 17;
        if (logical_eq(d_family, 1)) {
          current_statement__ = 15;
          lp_accum__.add(
            normal_lpdf<false>(d, d_param[(1 - 1)], d_param[(2 - 1)]));
        } else {
          current_statement__ = 14;
          if (logical_eq(d_family, 2)) {
            current_statement__ = 12;
            lp_accum__.add(
              student_t_lpdf<false>(d, d_param[(3 - 1)], d_param[(1 - 1)],
                d_param[(2 - 1)]));
          } else {
            current_statement__ = 11;
            if (logical_eq(d_family, 3)) {
              current_statement__ = 9;
              lp_accum__.add(
                beta_lpdf<false>(
                  ((d - d_bnd[(1 - 1)]) / (d_bnd[(2 - 1)] - d_bnd[(1 - 1)])),
                  d_param[(1 - 1)], d_param[(2 - 1)]));
            } else {
              current_statement__ = 8;
              if (logical_eq(d_family, 4)) {
                current_statement__ = 6;
                lp_accum__.add(
                  inv_gamma_lpdf<false>(d, d_param[(1 - 1)],
                    d_param[(2 - 1)]));
              } else {
                current_statement__ = 5;
                if (logical_eq(d_family, 5)) {
                  current_statement__ = 3;
                  lp_accum__.add(
                    gamma_lpdf<false>(d, d_param[(1 - 1)], d_param[(2 - 1)]));
                } 
              }
            }
          }
        }
        current_statement__ = 18;
        lp_accum__.add(normal_lpdf<false>(y, d, SE));
      }
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
      // Next line prevents compiler griping about no return
      throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***"); 
    }
    lp_accum__.add(lp__);
    return lp_accum__.sum();
    } // log_prob_impl() 
    
  template <typename RNG, typename VecR, typename VecI, typename VecVar, stan::require_vector_like_vt<std::is_floating_point, VecR>* = nullptr, stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr, stan::require_std_vector_vt<std::is_floating_point, VecVar>* = nullptr>
  inline void write_array_impl(RNG& base_rng__, VecR& params_r__,
                               VecI& params_i__, VecVar& vars__,
                               const bool emit_transformed_parameters__ = true,
                               const bool emit_generated_quantities__ = true,
                               std::ostream* pstream__ = nullptr) const {
    using local_scalar_t__ = double;
    vars__.resize(0);
    stan::io::reader<local_scalar_t__> in__(params_r__, params_i__);
    static const char* function__ = "model_fixed_namespace::write_array";
(void) function__;  // suppress unused var warning
    (void) function__;  // suppress unused var warning
    double lp__ = 0.0;
    (void) lp__;  // dummy to suppress unused var warning
    stan::math::accumulator<double> lp_accum__;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    (void) DUMMY_VAR__;  // suppress unused var warning
    
    try {
      double d;
      d = std::numeric_limits<double>::quiet_NaN();
      
      current_statement__ = 1;
      d = in__.scalar();
      current_statement__ = 1;
      d = stan::math::lub_constrain(d, d_bnd[(1 - 1)], d_bnd[(2 - 1)]);
      vars__.emplace_back(d);
      if (logical_negation((primitive_value(emit_transformed_parameters__) ||
            primitive_value(emit_generated_quantities__)))) {
        return ;
      } 
      if (logical_negation(emit_generated_quantities__)) {
        return ;
      } 
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
      // Next line prevents compiler griping about no return
      throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***"); 
    }
    } // write_array_impl() 
    
  template <typename VecVar, typename VecI, stan::require_std_vector_t<VecVar>* = nullptr, stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr>
  inline void transform_inits_impl(const stan::io::var_context& context__,
                                   VecI& params_i__, VecVar& vars__,
                                   std::ostream* pstream__ = nullptr) const {
    using local_scalar_t__ = double;
    vars__.clear();
    vars__.reserve(num_params_r__);
    
    try {
      int pos__;
      pos__ = std::numeric_limits<int>::min();
      
      pos__ = 1;
      double d;
      d = std::numeric_limits<double>::quiet_NaN();
      
      current_statement__ = 1;
      d = context__.vals_r("d")[(1 - 1)];
      double d_free__;
      d_free__ = std::numeric_limits<double>::quiet_NaN();
      
      current_statement__ = 1;
      d_free__ = stan::math::lub_free(d, d_bnd[(1 - 1)], d_bnd[(2 - 1)]);
      vars__.emplace_back(d_free__);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
      // Next line prevents compiler griping about no return
      throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***"); 
    }
    } // transform_inits_impl() 
    
  inline void get_param_names(std::vector<std::string>& names__) const {
    
    names__.clear();
    names__.emplace_back("d");
    } // get_param_names() 
    
  inline void get_dims(std::vector<std::vector<size_t>>& dimss__) const {
    dimss__.clear();
    dimss__.emplace_back(std::vector<size_t>{});
    
    } // get_dims() 
    
  inline void constrained_param_names(
                                      std::vector<std::string>& param_names__,
                                      bool emit_transformed_parameters__ = true,
                                      bool emit_generated_quantities__ = true) const
    final {
    
    param_names__.emplace_back(std::string() + "d");
    if (emit_transformed_parameters__) {
      
    }
    
    if (emit_generated_quantities__) {
      
    }
    
    } // constrained_param_names() 
    
  inline void unconstrained_param_names(
                                        std::vector<std::string>& param_names__,
                                        bool emit_transformed_parameters__ = true,
                                        bool emit_generated_quantities__ = true) const
    final {
    
    param_names__.emplace_back(std::string() + "d");
    if (emit_transformed_parameters__) {
      
    }
    
    if (emit_generated_quantities__) {
      
    }
    
    } // unconstrained_param_names() 
    
  inline std::string get_constrained_sizedtypes() const {
    stringstream s__;
    s__ << "[{\"name\":\"d\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"}]";
    return s__.str();
    } // get_constrained_sizedtypes() 
    
  inline std::string get_unconstrained_sizedtypes() const {
    stringstream s__;
    s__ << "[{\"name\":\"d\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"}]";
    return s__.str();
    } // get_unconstrained_sizedtypes() 
    
  
    // Begin method overload boilerplate
    template <typename RNG>
    inline void write_array(RNG& base_rng,
                            Eigen::Matrix<double,Eigen::Dynamic,1>& params_r,
                            Eigen::Matrix<double,Eigen::Dynamic,1>& vars,
                            const bool emit_transformed_parameters = true,
                            const bool emit_generated_quantities = true,
                            std::ostream* pstream = nullptr) const {
      std::vector<double> vars_vec(vars.size());
      std::vector<int> params_i;
      write_array_impl(base_rng, params_r, params_i, vars_vec,
          emit_transformed_parameters, emit_generated_quantities, pstream);
      vars.resize(vars_vec.size());
      for (int i = 0; i < vars.size(); ++i) {
        vars.coeffRef(i) = vars_vec[i];
      }
    }
    template <typename RNG>
    inline void write_array(RNG& base_rng, std::vector<double>& params_r,
                            std::vector<int>& params_i,
                            std::vector<double>& vars,
                            bool emit_transformed_parameters = true,
                            bool emit_generated_quantities = true,
                            std::ostream* pstream = nullptr) const {
      write_array_impl(base_rng, params_r, params_i, vars, emit_transformed_parameters, emit_generated_quantities, pstream);
    }
    template <bool propto__, bool jacobian__, typename T_>
    inline T_ log_prob(Eigen::Matrix<T_,Eigen::Dynamic,1>& params_r,
                       std::ostream* pstream = nullptr) const {
      Eigen::Matrix<int, -1, 1> params_i;
      return log_prob_impl<propto__, jacobian__>(params_r, params_i, pstream);
    }
    template <bool propto__, bool jacobian__, typename T__>
    inline T__ log_prob(std::vector<T__>& params_r,
                        std::vector<int>& params_i,
                        std::ostream* pstream = nullptr) const {
      return log_prob_impl<propto__, jacobian__>(params_r, params_i, pstream);
    }
  
    inline void transform_inits(const stan::io::var_context& context,
                         Eigen::Matrix<double, Eigen::Dynamic, 1>& params_r,
                         std::ostream* pstream = nullptr) const final {
      std::vector<double> params_r_vec(params_r.size());
      std::vector<int> params_i;
      transform_inits_impl(context, params_i, params_r_vec, pstream);
      params_r.resize(params_r_vec.size());
      for (int i = 0; i < params_r.size(); ++i) {
        params_r.coeffRef(i) = params_r_vec[i];
      }
    }
    inline void transform_inits(const stan::io::var_context& context,
                                std::vector<int>& params_i,
                                std::vector<double>& vars,
                                std::ostream* pstream = nullptr) const final {
      transform_inits_impl(context, params_i, vars, pstream);
    }        
};
}
using stan_model = model_fixed_namespace::model_fixed;
#ifndef USING_R
// Boilerplate
stan::model::model_base& new_model(
        stan::io::var_context& data_context,
        unsigned int seed,
        std::ostream* msg_stream) {
  stan_model* m = new stan_model(data_context, seed, msg_stream);
  return *m;
}
stan::math::profile_map& get_stan_profile_data() {
  return model_fixed_namespace::profiles__;
}
#endif
#endif
