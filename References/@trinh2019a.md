
# On illumination-invariant variational optical flow for weakly textured scenes

Link: [pdf](zotero://select/items/@trinh2019a), [URL](https://linkinghub.elsevier.com/retrieve/pii/S107731421830256X)

### Notes


### 1.2 Previous works
1. BCA with the gradient constancy assumption (GCA, energy 𝐸𝐺𝐶𝐴).
	- Weights are scene dependent.
	- Even if you select them locally based on pixel value.
	- It's not robust for multiplicative addition.
2. HoD like Laplacian, hessian 
	- increase computation and sensitivity to noise. 
	- Finding weights depends on scene.
3. Preprocesses the images using a structure and texture decomposition.
	- Computation
	- weight adjustment
4. data-term + photometric invariants
	- combining several photometric invariants obtained from normalized RGB channels, log-derivatives, from the HSI color space, or from the 𝑟𝜙𝜃 color space. 
	- However, this model is only applicable to color images.
5. Intensities = illumination + reflection
	- since reflectance is invariant to illumination changes. 
	- This with BCA and GCA assumptions improves.
	- performance of this method strongly depends on the accurate estimation of the illumination component.
6. Generalized dynamic image model
	- illumination = multiplicative + additive
	- Kim et al. (2005) used this model to construct a robust variational method for OF computation. However, the optimization of the OF with this method is quite complex for a limited effectiveness.
7. Descriptor-based variational OF methods
	- The underlying idea of these methods is to construct a robust data-term by defining illumination-invariant descriptors at each pixel.
	- The census transform-based methods 
	- the rank transform-based method 
	- the correlation-based methods 
	- MLDP 
	- NND.


### 1.3 Motivation of the paper