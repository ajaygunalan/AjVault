

## Intro

Optimization based CS vs Learning Based CS[[@Zhang2018ISTANet]].



[[@Marcia2011Compressed]] 



and [[@Duarte2008Singlepixel]]

Principal Component vs Pesudo-Random [[@NeifeldOptical]].




## No Prior Data

### Goal 
To improve the temporal resolution of confocal laser scanning fluorescence microscopy by compressive sensing when no prior data is available.

### Key Bottleneck
As the resolution of the image increase, the computation gets harder. So, we need methodologies way to solve it.

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


