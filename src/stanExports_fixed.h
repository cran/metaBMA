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
#include <rstan/rstaninc.hpp>
// Code generated by Stan version 2.21.0
#include <stan/model/model_header.hpp>
namespace model_fixed_namespace {
using std::istream;
using std::string;
using std::stringstream;
using std::vector;
using stan::io::dump;
using stan::math::lgamma;
using stan::model::prob_grad;
using namespace stan::math;
static int current_statement_begin__;
stan::io::program_reader prog_reader__() {
    stan::io::program_reader reader;
    reader.add_event(0, 0, "start", "model_fixed");
    reader.add_event(0, 0, "include", "/include/license.stan");
    reader.add_event(0, 0, "start", "/include/license.stan");
    reader.add_event(14, 14, "end", "/include/license.stan");
    reader.add_event(14, 1, "restart", "model_fixed");
    reader.add_event(16, 3, "include", "/auxiliary/data.stan");
    reader.add_event(16, 0, "start", "/auxiliary/data.stan");
    reader.add_event(19, 3, "end", "/auxiliary/data.stan");
    reader.add_event(19, 4, "restart", "model_fixed");
    reader.add_event(19, 4, "include", "/prior/d_data.stan");
    reader.add_event(19, 0, "start", "/prior/d_data.stan");
    reader.add_event(22, 3, "end", "/prior/d_data.stan");
    reader.add_event(22, 5, "restart", "model_fixed");
    reader.add_event(26, 9, "include", "/prior/d_trunc.stan");
    reader.add_event(26, 0, "start", "/prior/d_trunc.stan");
    reader.add_event(66, 40, "end", "/prior/d_trunc.stan");
    reader.add_event(66, 10, "restart", "model_fixed");
    reader.add_event(69, 13, "include", "/prior/d_param.stan");
    reader.add_event(69, 0, "start", "/prior/d_param.stan");
    reader.add_event(70, 1, "end", "/prior/d_param.stan");
    reader.add_event(70, 14, "restart", "model_fixed");
    reader.add_event(73, 17, "include", "/prior/d_target.stan");
    reader.add_event(73, 0, "start", "/prior/d_target.stan");
    reader.add_event(85, 12, "end", "/prior/d_target.stan");
    reader.add_event(85, 18, "restart", "model_fixed");
    reader.add_event(89, 20, "end", "model_fixed");
    return reader;
}
#include <stan_meta_header.hpp>
class model_fixed
  : public stan::model::model_base_crtp<model_fixed> {
private:
        int N;
        vector_d y;
        vector_d SE;
        int d_family;
        vector_d d_param;
        vector_d d_bnd;
        double d_const;
public:
    model_fixed(stan::io::var_context& context__,
        std::ostream* pstream__ = 0)
        : model_base_crtp(0) {
        ctor_body(context__, 0, pstream__);
    }
    model_fixed(stan::io::var_context& context__,
        unsigned int random_seed__,
        std::ostream* pstream__ = 0)
        : model_base_crtp(0) {
        ctor_body(context__, random_seed__, pstream__);
    }
    void ctor_body(stan::io::var_context& context__,
                   unsigned int random_seed__,
                   std::ostream* pstream__) {
        typedef double local_scalar_t__;
        boost::ecuyer1988 base_rng__ =
          stan::services::util::create_rng(random_seed__, 0);
        (void) base_rng__;  // suppress unused var warning
        current_statement_begin__ = -1;
        static const char* function__ = "model_fixed_namespace::model_fixed";
        (void) function__;  // dummy to suppress unused var warning
        size_t pos__;
        (void) pos__;  // dummy to suppress unused var warning
        std::vector<int> vals_i__;
        std::vector<double> vals_r__;
        local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
        (void) DUMMY_VAR__;  // suppress unused var warning
        try {
            // initialize data block variables from context__
            current_statement_begin__ = 17;
            context__.validate_dims("data initialization", "N", "int", context__.to_vec());
            N = int(0);
            vals_i__ = context__.vals_i("N");
            pos__ = 0;
            N = vals_i__[pos__++];
            check_greater_or_equal(function__, "N", N, 0);
            current_statement_begin__ = 18;
            validate_non_negative_index("y", "N", N);
            context__.validate_dims("data initialization", "y", "vector_d", context__.to_vec(N));
            y = Eigen::Matrix<double, Eigen::Dynamic, 1>(N);
            vals_r__ = context__.vals_r("y");
            pos__ = 0;
            size_t y_j_1_max__ = N;
            for (size_t j_1__ = 0; j_1__ < y_j_1_max__; ++j_1__) {
                y(j_1__) = vals_r__[pos__++];
            }
            current_statement_begin__ = 19;
            validate_non_negative_index("SE", "N", N);
            context__.validate_dims("data initialization", "SE", "vector_d", context__.to_vec(N));
            SE = Eigen::Matrix<double, Eigen::Dynamic, 1>(N);
            vals_r__ = context__.vals_r("SE");
            pos__ = 0;
            size_t SE_j_1_max__ = N;
            for (size_t j_1__ = 0; j_1__ < SE_j_1_max__; ++j_1__) {
                SE(j_1__) = vals_r__[pos__++];
            }
            check_greater_or_equal(function__, "SE", SE, 0);
            current_statement_begin__ = 20;
            context__.validate_dims("data initialization", "d_family", "int", context__.to_vec());
            d_family = int(0);
            vals_i__ = context__.vals_i("d_family");
            pos__ = 0;
            d_family = vals_i__[pos__++];
            check_greater_or_equal(function__, "d_family", d_family, 1);
            current_statement_begin__ = 21;
            validate_non_negative_index("d_param", "3", 3);
            context__.validate_dims("data initialization", "d_param", "vector_d", context__.to_vec(3));
            d_param = Eigen::Matrix<double, Eigen::Dynamic, 1>(3);
            vals_r__ = context__.vals_r("d_param");
            pos__ = 0;
            size_t d_param_j_1_max__ = 3;
            for (size_t j_1__ = 0; j_1__ < d_param_j_1_max__; ++j_1__) {
                d_param(j_1__) = vals_r__[pos__++];
            }
            current_statement_begin__ = 22;
            validate_non_negative_index("d_bnd", "2", 2);
            context__.validate_dims("data initialization", "d_bnd", "vector_d", context__.to_vec(2));
            d_bnd = Eigen::Matrix<double, Eigen::Dynamic, 1>(2);
            vals_r__ = context__.vals_r("d_bnd");
            pos__ = 0;
            size_t d_bnd_j_1_max__ = 2;
            for (size_t j_1__ = 0; j_1__ < d_bnd_j_1_max__; ++j_1__) {
                d_bnd(j_1__) = vals_r__[pos__++];
            }
            stan::math::check_ordered(function__, "d_bnd", d_bnd);
            // initialize transformed data variables
            current_statement_begin__ = 26;
            d_const = double(0);
            stan::math::fill(d_const, DUMMY_VAR__);
            stan::math::assign(d_const,0);
            // execute transformed data statements
            current_statement_begin__ = 28;
            if (as_bool(logical_eq(d_family, 1))) {
                current_statement_begin__ = 29;
                if (as_bool((primitive_value(is_inf(get_base1(d_bnd, 1, "d_bnd", 1))) && primitive_value(is_inf(get_base1(d_bnd, 2, "d_bnd", 1)))))) {
                    current_statement_begin__ = 30;
                    stan::math::assign(d_const, 0);
                } else {
                    current_statement_begin__ = 32;
                    stan::math::assign(d_const, -(log_diff_exp(normal_cdf_log(get_base1(d_bnd, 2, "d_bnd", 1), get_base1(d_param, 1, "d_param", 1), get_base1(d_param, 2, "d_param", 1)), normal_cdf_log(get_base1(d_bnd, 1, "d_bnd", 1), get_base1(d_param, 1, "d_param", 1), get_base1(d_param, 2, "d_param", 1)))));
                }
            } else if (as_bool(logical_eq(d_family, 2))) {
                current_statement_begin__ = 37;
                if (as_bool((primitive_value(is_inf(get_base1(d_bnd, 1, "d_bnd", 1))) && primitive_value(is_inf(get_base1(d_bnd, 2, "d_bnd", 1)))))) {
                    current_statement_begin__ = 38;
                    stan::math::assign(d_const, 0);
                } else {
                    current_statement_begin__ = 40;
                    stan::math::assign(d_const, -(log_diff_exp(student_t_cdf_log(get_base1(d_bnd, 2, "d_bnd", 1), get_base1(d_param, 3, "d_param", 1), get_base1(d_param, 1, "d_param", 1), get_base1(d_param, 2, "d_param", 1)), student_t_cdf_log(get_base1(d_bnd, 1, "d_bnd", 1), get_base1(d_param, 3, "d_param", 1), get_base1(d_param, 1, "d_param", 1), get_base1(d_param, 2, "d_param", 1)))));
                }
            } else if (as_bool(logical_eq(d_family, 3))) {
                current_statement_begin__ = 45;
                if (as_bool((primitive_value(logical_eq(get_base1(d_bnd, 1, "d_bnd", 1), 0)) && primitive_value(logical_eq(get_base1(d_bnd, 2, "d_bnd", 1), 1))))) {
                    current_statement_begin__ = 46;
                    stan::math::assign(d_const, 0);
                } else {
                    current_statement_begin__ = 48;
                    stan::math::assign(d_const, -(stan::math::log((get_base1(d_bnd, 2, "d_bnd", 1) - get_base1(d_bnd, 1, "d_bnd", 1)))));
                }
            } else if (as_bool(logical_eq(d_family, 4))) {
                current_statement_begin__ = 52;
                if (as_bool((primitive_value(logical_eq(get_base1(d_bnd, 1, "d_bnd", 1), 0)) && primitive_value(is_inf(get_base1(d_bnd, 2, "d_bnd", 1)))))) {
                    current_statement_begin__ = 53;
                    stan::math::assign(d_const, 0);
                } else {
                    current_statement_begin__ = 55;
                    stan::math::assign(d_const, -(log_diff_exp(inv_gamma_cdf_log(get_base1(d_bnd, 2, "d_bnd", 1), get_base1(d_param, 1, "d_param", 1), get_base1(d_param, 2, "d_param", 1)), inv_gamma_cdf_log(get_base1(d_bnd, 1, "d_bnd", 1), get_base1(d_param, 1, "d_param", 1), get_base1(d_param, 2, "d_param", 1)))));
                }
            } else if (as_bool(logical_eq(d_family, 5))) {
                current_statement_begin__ = 60;
                if (as_bool((primitive_value(logical_eq(get_base1(d_bnd, 1, "d_bnd", 1), 0)) && primitive_value(is_inf(get_base1(d_bnd, 2, "d_bnd", 1)))))) {
                    current_statement_begin__ = 61;
                    stan::math::assign(d_const, 0);
                } else {
                    current_statement_begin__ = 63;
                    stan::math::assign(d_const, -(log_diff_exp(gamma_cdf_log(get_base1(d_bnd, 2, "d_bnd", 1), get_base1(d_param, 1, "d_param", 1), get_base1(d_param, 2, "d_param", 1)), gamma_cdf_log(get_base1(d_bnd, 1, "d_bnd", 1), get_base1(d_param, 1, "d_param", 1), get_base1(d_param, 2, "d_param", 1)))));
                }
            }
            // validate transformed data
            // validate, set parameter ranges
            num_params_r__ = 0U;
            param_ranges_i__.clear();
            current_statement_begin__ = 70;
            num_params_r__ += 1;
        } catch (const std::exception& e) {
            stan::lang::rethrow_located(e, current_statement_begin__, prog_reader__());
            // Next line prevents compiler griping about no return
            throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***");
        }
    }
    ~model_fixed() { }
    void transform_inits(const stan::io::var_context& context__,
                         std::vector<int>& params_i__,
                         std::vector<double>& params_r__,
                         std::ostream* pstream__) const {
        typedef double local_scalar_t__;
        stan::io::writer<double> writer__(params_r__, params_i__);
        size_t pos__;
        (void) pos__; // dummy call to supress warning
        std::vector<double> vals_r__;
        std::vector<int> vals_i__;
        current_statement_begin__ = 70;
        if (!(context__.contains_r("d")))
            stan::lang::rethrow_located(std::runtime_error(std::string("Variable d missing")), current_statement_begin__, prog_reader__());
        vals_r__ = context__.vals_r("d");
        pos__ = 0U;
        context__.validate_dims("parameter initialization", "d", "double", context__.to_vec());
        double d(0);
        d = vals_r__[pos__++];
        try {
            writer__.scalar_lub_unconstrain(get_base1(d_bnd, 1, "d_bnd", 1), get_base1(d_bnd, 2, "d_bnd", 1), d);
        } catch (const std::exception& e) {
            stan::lang::rethrow_located(std::runtime_error(std::string("Error transforming variable d: ") + e.what()), current_statement_begin__, prog_reader__());
        }
        params_r__ = writer__.data_r();
        params_i__ = writer__.data_i();
    }
    void transform_inits(const stan::io::var_context& context,
                         Eigen::Matrix<double, Eigen::Dynamic, 1>& params_r,
                         std::ostream* pstream__) const {
      std::vector<double> params_r_vec;
      std::vector<int> params_i_vec;
      transform_inits(context, params_i_vec, params_r_vec, pstream__);
      params_r.resize(params_r_vec.size());
      for (int i = 0; i < params_r.size(); ++i)
        params_r(i) = params_r_vec[i];
    }
    template <bool propto__, bool jacobian__, typename T__>
    T__ log_prob(std::vector<T__>& params_r__,
                 std::vector<int>& params_i__,
                 std::ostream* pstream__ = 0) const {
        typedef T__ local_scalar_t__;
        local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
        (void) DUMMY_VAR__;  // dummy to suppress unused var warning
        T__ lp__(0.0);
        stan::math::accumulator<T__> lp_accum__;
        try {
            stan::io::reader<local_scalar_t__> in__(params_r__, params_i__);
            // model parameters
            current_statement_begin__ = 70;
            local_scalar_t__ d;
            (void) d;  // dummy to suppress unused var warning
            if (jacobian__)
                d = in__.scalar_lub_constrain(get_base1(d_bnd, 1, "d_bnd", 1), get_base1(d_bnd, 2, "d_bnd", 1), lp__);
            else
                d = in__.scalar_lub_constrain(get_base1(d_bnd, 1, "d_bnd", 1), get_base1(d_bnd, 2, "d_bnd", 1));
            // model body
            current_statement_begin__ = 74;
            lp_accum__.add(d_const);
            current_statement_begin__ = 75;
            if (as_bool(logical_eq(d_family, 1))) {
                current_statement_begin__ = 76;
                lp_accum__.add(normal_log(d, get_base1(d_param, 1, "d_param", 1), get_base1(d_param, 2, "d_param", 1)));
            } else if (as_bool(logical_eq(d_family, 2))) {
                current_statement_begin__ = 78;
                lp_accum__.add(student_t_log(d, get_base1(d_param, 3, "d_param", 1), get_base1(d_param, 1, "d_param", 1), get_base1(d_param, 2, "d_param", 1)));
            } else if (as_bool(logical_eq(d_family, 3))) {
                current_statement_begin__ = 80;
                lp_accum__.add(beta_log(((d - get_base1(d_bnd, 1, "d_bnd", 1)) / (get_base1(d_bnd, 2, "d_bnd", 1) - get_base1(d_bnd, 1, "d_bnd", 1))), get_base1(d_param, 1, "d_param", 1), get_base1(d_param, 2, "d_param", 1)));
            } else if (as_bool(logical_eq(d_family, 4))) {
                current_statement_begin__ = 82;
                lp_accum__.add(inv_gamma_log(d, get_base1(d_param, 1, "d_param", 1), get_base1(d_param, 2, "d_param", 1)));
            } else if (as_bool(logical_eq(d_family, 5))) {
                current_statement_begin__ = 84;
                lp_accum__.add(gamma_log(d, get_base1(d_param, 1, "d_param", 1), get_base1(d_param, 2, "d_param", 1)));
            }
            current_statement_begin__ = 86;
            lp_accum__.add(normal_log(y, d, SE));
        } catch (const std::exception& e) {
            stan::lang::rethrow_located(e, current_statement_begin__, prog_reader__());
            // Next line prevents compiler griping about no return
            throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***");
        }
        lp_accum__.add(lp__);
        return lp_accum__.sum();
    } // log_prob()
    template <bool propto, bool jacobian, typename T_>
    T_ log_prob(Eigen::Matrix<T_,Eigen::Dynamic,1>& params_r,
               std::ostream* pstream = 0) const {
      std::vector<T_> vec_params_r;
      vec_params_r.reserve(params_r.size());
      for (int i = 0; i < params_r.size(); ++i)
        vec_params_r.push_back(params_r(i));
      std::vector<int> vec_params_i;
      return log_prob<propto,jacobian,T_>(vec_params_r, vec_params_i, pstream);
    }
    void get_param_names(std::vector<std::string>& names__) const {
        names__.resize(0);
        names__.push_back("d");
    }
    void get_dims(std::vector<std::vector<size_t> >& dimss__) const {
        dimss__.resize(0);
        std::vector<size_t> dims__;
        dims__.resize(0);
        dimss__.push_back(dims__);
    }
    template <typename RNG>
    void write_array(RNG& base_rng__,
                     std::vector<double>& params_r__,
                     std::vector<int>& params_i__,
                     std::vector<double>& vars__,
                     bool include_tparams__ = true,
                     bool include_gqs__ = true,
                     std::ostream* pstream__ = 0) const {
        typedef double local_scalar_t__;
        vars__.resize(0);
        stan::io::reader<local_scalar_t__> in__(params_r__, params_i__);
        static const char* function__ = "model_fixed_namespace::write_array";
        (void) function__;  // dummy to suppress unused var warning
        // read-transform, write parameters
        double d = in__.scalar_lub_constrain(get_base1(d_bnd, 1, "d_bnd", 1), get_base1(d_bnd, 2, "d_bnd", 1));
        vars__.push_back(d);
        double lp__ = 0.0;
        (void) lp__;  // dummy to suppress unused var warning
        stan::math::accumulator<double> lp_accum__;
        local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
        (void) DUMMY_VAR__;  // suppress unused var warning
        if (!include_tparams__ && !include_gqs__) return;
        try {
            if (!include_gqs__ && !include_tparams__) return;
            if (!include_gqs__) return;
        } catch (const std::exception& e) {
            stan::lang::rethrow_located(e, current_statement_begin__, prog_reader__());
            // Next line prevents compiler griping about no return
            throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***");
        }
    }
    template <typename RNG>
    void write_array(RNG& base_rng,
                     Eigen::Matrix<double,Eigen::Dynamic,1>& params_r,
                     Eigen::Matrix<double,Eigen::Dynamic,1>& vars,
                     bool include_tparams = true,
                     bool include_gqs = true,
                     std::ostream* pstream = 0) const {
      std::vector<double> params_r_vec(params_r.size());
      for (int i = 0; i < params_r.size(); ++i)
        params_r_vec[i] = params_r(i);
      std::vector<double> vars_vec;
      std::vector<int> params_i_vec;
      write_array(base_rng, params_r_vec, params_i_vec, vars_vec, include_tparams, include_gqs, pstream);
      vars.resize(vars_vec.size());
      for (int i = 0; i < vars.size(); ++i)
        vars(i) = vars_vec[i];
    }
    std::string model_name() const {
        return "model_fixed";
    }
    void constrained_param_names(std::vector<std::string>& param_names__,
                                 bool include_tparams__ = true,
                                 bool include_gqs__ = true) const {
        std::stringstream param_name_stream__;
        param_name_stream__.str(std::string());
        param_name_stream__ << "d";
        param_names__.push_back(param_name_stream__.str());
        if (!include_gqs__ && !include_tparams__) return;
        if (include_tparams__) {
        }
        if (!include_gqs__) return;
    }
    void unconstrained_param_names(std::vector<std::string>& param_names__,
                                   bool include_tparams__ = true,
                                   bool include_gqs__ = true) const {
        std::stringstream param_name_stream__;
        param_name_stream__.str(std::string());
        param_name_stream__ << "d";
        param_names__.push_back(param_name_stream__.str());
        if (!include_gqs__ && !include_tparams__) return;
        if (include_tparams__) {
        }
        if (!include_gqs__) return;
    }
}; // model
}  // namespace
typedef model_fixed_namespace::model_fixed stan_model;
#ifndef USING_R
stan::model::model_base& new_model(
        stan::io::var_context& data_context,
        unsigned int seed,
        std::ostream* msg_stream) {
  stan_model* m = new stan_model(data_context, seed, msg_stream);
  return *m;
}
#endif
#endif
