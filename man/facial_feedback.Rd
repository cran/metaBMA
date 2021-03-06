% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/data_facial_feedback.R
\docType{data}
\name{facial_feedback}
\alias{facial_feedback}
\title{Data Set: Facial Feedback}
\format{
A data frame with three variables:
\describe{
\item{\code{study}}{Authors of original study (see Wagenmakers et. al, 2016)}
\item{\code{d}}{Measure of effect size: Cohen's d (difference between smile vs. pout condition)}
\item{\code{SE}}{Measure of precision: standard error of Cohen's d}
}
}
\usage{
facial_feedback
}
\description{
Preregistered replication (Wagenmakers et al., 2016) that investigated the
facial feedback hypothesis (Strack, Martin, & Stepper, 1988).
}
\details{
The facial-feedback hypothesis states that  people's affective responses can
be influenced by their own facial expression (e.g., smiling, pouting), even
when their expression did not result from their emotional experiences
(Strack, Martin, & Stepper, 1988).
}
\examples{
data(facial_feedback)
head(facial_feedback)
mf <- meta_fixed(d, SE, study, facial_feedback)
mf
plot_posterior(mf)
}
\references{
Strack, F., Martin, L. L., & Stepper, S. (1988). Inhibiting and facilitating
conditions of the human smile: A nonobtrusive test of the facial feedback hypothesis.
Journal of Personality and Social Psychology, 54, 768–777.
\doi{10.1037/0022-3514.54.5.768}

Wagenmakers, E.-J., Beek, T., Dijkhoff, L., Gronau, Q. F., Acosta, A., Adams, R. B.,
... Zwaan, R. A. (2016). Registered replication report: Strack, Martin, & Stepper (1988).
Perspectives on Psychological Science, 11, 917-928. \doi{10.1177/1745691616674458}
}
\keyword{datasets}
