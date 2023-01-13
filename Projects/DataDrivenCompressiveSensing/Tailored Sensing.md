
### Objective
To minimize OCT data acquisition time and storage requirements of data. We propose using the tailored sensing framework in OCT and determining its potential feasibility. Tailored Sensing is the extension of compressing when the data to be measured has known prior information. Compressed Sensing recovers a high-dimensional signal using random measurements on a universal basis, such as Fourier transform, wavelet, shearlets, and curvelets. However, if the information is available about the type of signal (such as the image of a human face), it is possible to design optimized sensing locations that are tailored for the particular signals of interest. Moreover, in compressive sensing, real-time reconstruction of the image is difficult due to expensive computational algorithms like orthogonal match pursuit, etc. But, in tailored sensing, PCA/Eigen basis is already computed. Thus, real-time construction is possible, which is very crucial in a surgical scenario.

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

[GitHub Link](https://github.com/ajaygunalan/fastCS/blob/main/ContiTailored.m)

![[Projects/Pasted image 20221011145807.png]]

%%
### To Realize on Hardware

1. Build custom eigen basis or principal components $(Ψ_r)$ from our training data using techniques such as SVD.
$$𝑦= C_{opt} Ψ_r 𝑎$$ (4)
Requirements:
	- Sample Tissue
	- CM/LSM
	- 100 Image properly aligned.


2. Measure the signal $𝑥$ using sampling matrix $C_{opt}$ to obtain measure data $𝑦$:
$$𝑦= C_{opt} 𝑥 $$(5)
Requirements:
	- CM/LSM should be able to follow the  sample only along the points defined by $C_{opt}$
%%



### Next Steps
1. A quick survey on the biological sample used for compressive sensing in confocal laser microscopy to narrow down our sample. [[samples for cs]]
2. Generate a dataset in CLSM and apply CS/Data-Driven CS to understand the optimal points and image restoration for the given sample.
4. Depending upon the simulation result, apply CS /Data-Driven CS on CLSM using Galvos or AOD.
	1. Preferable: Galvos since there is no need to build an optical setup. OCT also uses galvo.
	2. AOD needs time to build the optical setup and can be done for two-photon microscopy.
5. When using Galvo, we must ensure that the trajectory covers both optimal points and their smoothness. 
6. All this is done on std. CLSM. Then, We could apply it on the custom hardware using the SPAD array if needed.
### 4 Papers

1.  [An inertia-free beam scanning device for single-wavelength 2PE-STED nanoscopy](https://iopscience.iop.org/article/10.1088/1361-6463/ab8852)
	- Fast Image acquisition by custom scan pattern using Acousto-Optic Deflectors.
2. [Fast Inertia-Free Volumetric Light-Sheet Microscope](https://pubs.acs.org/doi/full/10.1021/acsphotonics.7b00382)
	- Fast Image acquisition by custom scan pattern using Acousto-Optic Deflectors.
3. [A robust and versatile platform for image scanning microscopy enabling super-resolution FLIM](https://www.nature.com/articles/s41592-018-0291-9)
	- Increase the pinhole size to 1 AU to have high SNR and low resolution. The low resolution is overcome by computational (de-convolution) combining the images on the SPAD array detector to produce high SNR and resolution images. 
4. [Volumetric Lissajous confocal microscopy with tunable spatiotemporal resolution](https://opg.optica.org/boe/fulltext.cfm?uri=boe-11-11-6293&id=441078)
	- imaging fast phenomena sacrifices either spatial or temporal resolution. 





