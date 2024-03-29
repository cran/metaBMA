% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/meta_sensitivity.R
\name{meta_sensitivity}
\alias{meta_sensitivity}
\title{Sensitivity Analysis for Bayesian Meta-Analysis}
\usage{
meta_sensitivity(
  y,
  SE,
  labels,
  data,
  d_list,
  tau_list,
  analysis = "bma",
  combine_priors = "crossed",
  ...
)
}
\arguments{
\item{y}{effect size per study. Can be provided as (1) a numeric vector, (2)
the quoted or unquoted name of the variable in \code{data}, or (3) a
\code{\link[stats]{formula}} to include discrete or continuous moderator
variables.}

\item{SE}{standard error of effect size for each study. Can be a numeric
vector or the quoted or unquoted name of the variable in \code{data}}

\item{labels}{optional: character values with study labels. Can be a
character vector or the quoted or unquoted name of the variable in
\code{data}}

\item{data}{data frame containing the variables for effect size \code{y},
standard error \code{SE}, \code{labels}, and moderators per study.}

\item{d_list}{a \code{list} of prior distributions specified via \code{\link[=prior]{prior()}}
for the overall effect size (mean) across studies}

\item{tau_list}{a \code{list} of prior distributions specified via \code{\link[=prior]{prior()}}
for the heterogeneity (SD) of effect sizes across studies}

\item{analysis}{which type of meta-analysis should be performed for analysis?
Can be one of the following:
\itemize{
\item \code{"fixed"} for fixed-effects model, see \code{\link[=meta_fixed]{meta_fixed()}}
\item \code{"random"} for random-effects model, see \code{\link[=meta_random]{meta_random()}}
\item \code{"bma"} for model averaging, see \code{\link[=meta_bma]{meta_bma()}}
}}

\item{combine_priors}{either \code{"matched"}, in which case the analysis
includes the \emph{matched} pairwise combinations of the prior distributions
specified in \code{d_list} and \code{tau_list}, or \code{crossed}, in
which case the analysis uses \emph{all possible} pairwise combinations of priors.}

\item{...}{further arguments passed to the function specified in \code{analysis}.}
}
\value{
an object of the S3 class \code{meta_sensitivity}, that is, a list of fitted
meta-analysis models. Results can be printed or plotted using
\code{\link[=plot.meta_sensitivity]{plot.meta_sensitivity()}}.
}
\description{
Sensitivity analysis assuming different prior distributions for the two main
parameters of a Bayesian meta-analysis (i.e., the overall effect and the
heterogeneity of effect sizes across studies).
}
\examples{
\donttest{
data(towels)
sensitivity <- meta_sensitivity(
  y = logOR, SE = SE, labels = study, data = towels,
  d_list = list(prior("cauchy", c(0, .707)),
                prior("norm", c(0, .5)),
                prior("norm", c(.5, .3))),
  tau_list = list(prior("invgamma", c(1, 0.15), label = "tau"),
                  prior("gamma", c(1.5, 3), label = "tau")),
  analysis = "random",
  combine_priors = "crossed")

print(sensitivity, digits = 2)

par(mfrow = c(1,2))
plot(sensitivity, "d", "prior")
plot(sensitivity, "d", "posterior")

plot(sensitivity, "tau", "prior")
plot(sensitivity, "tau", "posterior")
}

}
\seealso{
\code{\link[=plot.meta_sensitivity]{plot.meta_sensitivity()}}
}
