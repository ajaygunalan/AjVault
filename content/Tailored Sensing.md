---
title: "Tailored Sensing"
---
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

![[Pasted image 20221011145807.png]]










<script defer src="https://cdn.commento.io/js/commento.js"></script>
<div id="commento"></div>
