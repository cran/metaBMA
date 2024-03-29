% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/meta_sensitivity.R
\name{plot.meta_sensitivity}
\alias{plot.meta_sensitivity}
\title{Plot Sensitivity Analysis for Meta-Analysis}
\usage{
\method{plot}{meta_sensitivity}(
  x,
  parameter = "d",
  distribution = "posterior",
  from,
  to,
  n = 101,
  legend = TRUE,
  ...
)
}
\arguments{
\item{x}{prior probability density function defined via \code{\link{prior}}.}

\item{parameter}{which parameter should be plotted: \code{"d"} or \code{"tau"}.}

\item{distribution}{which distribution should be plotted: \code{"prior"} or \code{"posterior"}.}

\item{from}{lower boundary}

\item{to}{upper boundary}

\item{n}{integer; the number of x values at which to evaluate.}

\item{legend}{whether to print all prior specifications and plot a corresponding legend.}

\item{...}{further arguments passed to \code{\link[graphics]{plot}}}
}
\description{
Plot prior or posterior distributions of multiple analyses performed with
\code{\link[=meta_sensitivity]{meta_sensitivity()}}.
}
\details{
For meta-analysis with model averaging via \code{\link[=meta_bma]{meta_bma()}}, plotting the
model-averaged posterior of \code{tau} is not yet supported. Instead, the posterior
distributions for the random effects models will be plotted.
}
\seealso{
\code{\link[=meta_sensitivity]{meta_sensitivity()}}
}
