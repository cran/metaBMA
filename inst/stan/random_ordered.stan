#include /include/license.stan

data {
#include /auxiliary/data.stan
#include /prior/d_data.stan
#include /prior/tau_data.stan
}

transformed data{
  real d_const;
  real tau_const;
#include /prior/d_trunc.stan
#include /prior/tau_trunc.stan
}

parameters {
#include /prior/d_param.stan
#include /prior/tau_param.stan
  vector<lower=d_bnd[1], upper=d_bnd[2]>[N] dstudy;
}

model {
#include /prior/d_target.stan
#include /prior/tau_target.stan
  target += normal_lpdf(dstudy | d, tau);
  // model does not fit with the appropriate normalizing constant:
  // target += - N * log_diff_exp(normal_lcdf(d_bnd[2] | d, tau),
  //                              normal_lcdf(d_bnd[1] | d, tau));
  target += normal_lpdf(y | dstudy, SE);
}
