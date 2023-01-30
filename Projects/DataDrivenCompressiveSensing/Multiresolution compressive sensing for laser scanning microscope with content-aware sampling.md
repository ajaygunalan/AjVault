
## Compressive Sensing
Compressive sensing enables reconstructing of high-dimensional signal $x$ from low-dimensional measurement $y$.

$$y =A\tilde{x}$$

In general, solving for $\tilde{x}$ is an ill-posed problem i.e, no unique solution, and/or the solution is not robust to small data perturbations [[@EstrelaTotal]]. Thus, to make it  a well-posed problem ,we introduce the regularize term $\phi(x)$.

$$\arg \min_{x} \;\; \phi(x) \;\;\; s.t. Ax=y$$ 

Two of the most popular choices for $\phi(x)$ are  $L_1$ norm and Total Variation ($TV$) norm [[@Farnell2019Total]]. 

1. $L_1$:  $\phi(x) = ||x||_{l_1}$

$$\arg \min_{x} \;\; ||u||_{l_1} \;\;\; s.t. Ax=y $$

Where $u = Hx$ and $H$ is the basis (Wavelets, DCT).

2. $TV$:   $\phi(x) = ||x||_{TV}$

 $$||x||_{TV} =  ||\nabla_xx||+ ||\nabla_yx||=\sum_{i=1}^{n_1}\sum_{j=1}^{n_2} |x_{i+1,j}-x_{i,j}|+ |x_{i,j+1}-x_{i,j}|$$


A detailed review of various algorithm in $L_1$ norm and $TV$ norm is provided in ref  [[@Sher2019Review]]. TVAL3  by Chengbo Li et al. based on $TV$ [[@LiEfficient]], [[@ZhangEfficienta]] clears stands out the fastest  because it does not require a sparsifying transformation at every step [[@HowlandCompressive]]. 




Typically, it is implemented in hardware using a Digital Micro mirror Device (DMD) as shown in figure below:


![[1.png]]

From: [[@HowlandCompressive]]
or Coded Aperture [[@Marcia2011Compressed]], [[@Duarte2008Singlepixel]]. Further details on optical architecture for compressive sensing can be found at [[@NeifeldOptical]] where the author details about principal components and pseudo-random projections.  Also, they can be further classified as (No prior data) Optimization-based CS vs (prior data)Learning Based CS[[@Zhang2018ISTANet]].

##  Optimization-based 
The usage of DMD or Coded aperture is used to implement CS prohibits its application to use in std. laser scanning systems such as confocal microscopy and OCT. Hence, in this work, we focus on a compressive sensing framework that can be applied to std. laser scanning setup with no optical modification.


The comparisons between algorithms for total variation and $L_1$ minimization is detailed in reference [[@Sher2019Review]]. TVAL is nearly three times as fast as NESTA and ten times faster than L1 Magic, so it is the obvious choice for well-conditioned problems. TVAL’s shortcoming lies in situations where the number of measurements is close to the information limit or when there is significant measurement noise, where the quality of reconstruction decreases rapidly.

In this work , we try to address this by combining PSF+intelligent sampling + structure guide.


In ref [[@Sher2019Review]], TVAL and 






## Relevant work (Interesting work)
Pavilion et al. in 2016 is the first work to implement on std. Laser scanning system without using DMD and coded aperture. [[@Pavillon2016Compressed]]. They showed that by including the point spread function of the microscope in the optimization, it is possible to extend cs to std. Laser scanning system. (Need to find it cons!)

In 2018, Francis et al. [[@Francis2018Multiresolutionbased]] used a multi-resolution approach where a low-resolution image is used to estimate a compensation term in the regularize term leading to better reconstruction.  However, this work was not implemented on the hardware.

In 2021, Hu et al. showed that we can vary the sampling density using bright field images to get better reconstruction [[@Hu2021Fast]]. (Need to find it cons!)

## Our contribution
Implement on the hardware by combining PSF ([[@Pavillon2016Compressed]]) + Multi-resolution [[@Francis2018Multiresolutionbased]] + Intelligent sampling [[@Hu2021Fast]]  with the goal of obtaining better and faster reconstruction, enabling faster data acquisition for confocal laser scanning microscope.





### Key Bottleneck
- As the resolution of the image increase, the computation gets harder and the reconstruction suffers. So, we need methodologies way to solve it.
- 

### Methodologies
- Better framing of the optimization problem like PSF
- multi-resolution
- context aware 
- scanning strategy

### Existing Work





## Prior Data Available

![[inverseProb.png]]
Image from: [[@Bhandari2022Computational]]



### To Do
[[@Sher2019Review]] 
[[@Kravets2022Progressive]]
[[@Wang2022Total]]
[[@Stern2017Optical]]

### Literature Review

Point scanning vs Switching-mask-based single-pixel cameras.

1. [[@Zhang2021Deep]], [[@Zhang2020Compressed]]UC Davis
They project a pattern on a small block and then sequentially scan and recover using neural network. Showed demo on classical images.

2. [[@Yuan2021Compressive]] - Not Clear
it excites a sample with an array of foci, randomly interleaves the scattering projection positions at the entrance of an imaging spectrometer, and then compresses multiple coded spectra into single spectral acquisition channels. SIRI randomly displaces the Raman spectra of adjacent foci that would otherwise be smeared on a detector because of their spectral similarities, which is crucial for an unambiguous and high-fidelity hyperspectral reconstruction.

3. [[@Hu2021Fast]] uses BF Images as a mask. Excellent Idea. Yeast Cells

4. [[@Soldevila2019Fast]] Mouse cerebellum brain, Under sample and then use matrix completion algos.

5.  [[@Zhang2018Dynamic]] supervised approach for chemical API

6. [[@Lin2017Spectroscopic]] fungal cells + uniform pseudo-random scanning scheme by designing a three-dimensional (3D) triangular Lissajous trajectory with a high least common multiplier (LCM) for the axis frequencies.
https://github.com/jianzhangcs/ISTA-Net-PyTorch
7. [[@Woringer2017Faster]]  for 3D in z-axis and have sample code.

8. Mouse embryonic fibroblast (MEF) cells and used PSF[[@Pavillon2016Compressed]]

9. [[@Chauffert2014Variable]] proposes random walking and travelling salesman problem.

### Issues and Solutions
1. Can we use Image Pyramids
2. Fastest way to matrix multiplane stressgen algo and space librararay?
3. Eigenspace

###
1. https://github.com/Adrian-Markelov/IHT-tutorial
2. https://github.com/vegarant/cilib
3. https://github.com/DIPlib/diplib

### Compressive Sensing
The mathematical framework is as follows:
$$𝑦=𝐶𝑥$$(1)
Where $𝑦$ is the measured/observed data, $C$ is the sampling matrix and $𝑥$ is the source signal (image).
Now, $𝑥$ can be expressed in a universal basis $Ψ$ such as fourier transform, wavelet, shearlets, and curvelets.
$$𝑥=Ψ 𝑠$$(2)
Where 𝑠 is the sparse coefficient. Rewriting equation (1) in terms of (2):
$$𝑦=C Ψ 𝑠$$(3)
In compressive sensing $𝑦,𝐶,Ψ$ are known and sparse coefficients $𝑠$ is the unknown which is computationally solved.

### Tailored Sensing
Step 1: Build custom eigen basis or principal components $(Ψ_r)$ from our training data using techniques such as SVD.
$$𝑦= C_{opt} Ψ_r 𝑎$$ (4)

Step 2: Solve for the tailored sampling matrix Copt by pivoted QR on $Ψ_r$. This tailored sampling matrix $(C_{opt})$ correspond to optimal reconstruction for the signal.

Step 3: Measure the signal $𝑥$ using sampling matrix $C_{opt}$ to obtain measure data $𝑦$:
$$𝑦= C_{opt} 𝑥 $$(5)

Step 4: Solve for $𝑎$ by inverting $Ѳ$, where $Ѳ= C_{opt} Ψ_r$
$$𝑦= C_{opt} Ψ_r 𝑎$$ (6)
$$𝑦=Ѳ 𝑎$$ (7)
$$𝑎= Ѳ^{-1}𝑦 $$(8)

Step 5: Reconstruct 𝑥 by:
$$𝑥= Ψ_{r}𝑎$$(9)

### Matlab Simulation

[GitHub Link](https://github.com/ajaygunalan/TailoredSensing)

![[face.png]]








































%%

### 4 Papers

1.  [An inertia-free beam scanning device for single-wavelength 2PE-STED nanoscopy](https://iopscience.iop.org/article/10.1088/1361-6463/ab8852)
	- Fast Image acquisition by custom scan pattern using Acousto-Optic Deflectors.
2. [Fast Inertia-Free Volumetric Light-Sheet Microscope](https://pubs.acs.org/doi/full/10.1021/acsphotonics.7b00382)
	- Fast Image acquisition by custom scan pattern using Acousto-Optic Deflectors.
3. [A robust and versatile platform for image scanning microscopy enabling super-resolution FLIM](https://www.nature.com/articles/s41592-018-0291-9)
	- Increase the pinhole size to 1 AU to have high SNR and low resolution. The low resolution is overcome by computational (de-convolution) combining the images on the SPAD array detector to produce high SNR and resolution images. 
4. [Volumetric Lissajous confocal microscopy with tunable spatiotemporal resolution](https://opg.optica.org/boe/fulltext.cfm?uri=boe-11-11-6293&id=441078)
	- imaging fast phenomena sacrifices either spatial or temporal resolution. 
%%


