% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/plot_prediction.R
\name{plot.meta_pred}
\alias{plot.meta_pred}
\title{Plot Predicted Bayes Factors}
\usage{
\method{plot}{meta_pred}(x, which = "BF.inclusion", scale = "BF", ...)
}
\arguments{
\item{x}{an object of the class \code{"prediction"} which contains observed
and predicted Bayes factors}

\item{which}{a character value defining which Bayes factor to plot.
Some options are:
\itemize{
\item \code{"BF.inclusion"} = model averaging across fixed- and random-effects models
\item \code{"BF.fixed_H1.fixed_H0"} = consider only fixed-effects model
\item \code{"BF.random_H1.random_H0"} = consider only fixed-effects model
}}

\item{scale}{either plot Bayes factors (\code{"BF"}), inverse Bayes factors
(\code{"1/BF"}), log Bayes factors (\code{"log"}), or the log-inverse
Bayes factor (\code{"1/log"})}

\item{...}{arguments passed to \code{\link[graphics]{plot}}}
}
\description{
Plot Predicted Bayes Factors
}
