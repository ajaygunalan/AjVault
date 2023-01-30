# International Symposium on Computational Sensing

**Deadaline**: 15th March 2023
## Intro

Compressive sensing enables the sub-nyquist data acquisition. Typically, it is implemented on hardware using a Digital Micromirror Device (DMD) or Coded Aperture [[@Marcia2011Compressed]], [[@Duarte2008Singlepixel]]. Further details on optical architecture for compressive sensing can be found at [[@NeifeldOptical]] where the author details about principal components and pseudo-random projections.  Also, they can be further classified as (No prior data) Optimization-based CS vs (prior data)Learning Based CS[[@Zhang2018ISTANet]].

##  Optimization-based 
The usage of DMD or Coded aperture is used to implement CS prohibits its application to use in std. Laser scanning systems such as confocal microscopy and OCT. Hence, in this work, we focus on a compressive sensing framework that can be applied to std. laser scanning setup with no optical modification.

## Relevant work (Interesting work)
Pavilion et al. in 2016 is the first work to implement on std. Laser scanning system without using DMD and coded aperture. [[@Pavillon2016Compressed]]. They showed that by including the point spread function of the microscope in the optimization, it is possible to extend cs to std. Laser scanning system. (Need to find it cons!)

In 2018, Francis et al. [[@Francis2018Multiresolutionbased]] used a multi-resolution approach where a low-resolution image is used to estimate a compensation term in the regularize term leading to better reconstruction.  However, this work was not implemented on the hardware.

In 2021, Hu et al. showed that we can vary the sampling density using bright field images to get better reconstruction [[@Hu2021Fast]]. (Need to find it cons!)

## Our contribution
Implement on the hardware by combining PSF ([[@Pavillon2016Compressed]]) + Multi-resolution [[@Francis2018Multiresolutionbased]] + Intelligent sampling [[@Hu2021Fast]]  with the goal of obtaining better and faster reconstruction, enabling faster data acquisition for confocal laser scanning microscope.