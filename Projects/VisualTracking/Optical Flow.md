Motion of brightness patterns. For practical purposes, optical flow = motion field. $V_{image} = f(r_{obj}, V_{obj})$

**Assumption**
1. [[#^91a9d8|BCA]]: Intensity of a point remain constant. 
2. Displacement & time step are small.

For a single pixel, $I_xu +I_yv+I_t=0$ ^99d7c6

![[Projects/00Past/images/ofGraph.png]] 
$I_x, I_y, I_t$ are computed by finite difference. However, the parallel flow component of $u,v$ can not be computed due to [aperture problem](https://youtu.be/7p4KEsGgleQ). Hence, it is an ill-posed problem.

We get a unique solution (regularize) by additional constraint. The two major methods are (1) [[Lucas and Kanade]]; (2) [[Horn and Schunck]]. [[Lucas and Kanade]] is technically a  [[#^008726|dense]] algorithm, but in practice only works on good feature points, i.e., it’s [[#^ccd19c|sparse]]. [[Horn and Schunck]] is a [[#^008726|dense]] method.

A good overview was given by Barron et al. [[#^7d6091]] and by C ́ edras et al [[#^f51560]]. Barron et al. classify the optical flow techniques in four classes: 
- differential methods
- region-based matching
- energy-based techniques
- phase-based approaches.

### Large Motion
In case, of large motions, we can estimate [[optical flow]] by using [Resolution Pyramidal or Template Matching](https://www.youtube.com/watch?v=VSSyPskheaE&list=PL2zRqk16wsdoYzrWStffqBAoUY8XdvatV&index=5).


### References
1. [Performance of optical flow techniques](https://link.springer.com/article/10.1007/BF01420984) ^7d6091
2. [Motion-based recognition a survey](https://www.sciencedirect.com/science/article/abs/pii/026288569593154K) ^f51560

### Definitions
- Compute flow only for specific features. ^ccd19c
- Computes flow for all pixels. ^008726
- Brightness Constancy Assumption ^91a9d8





https://youtu.be/fpw26tpHGr8?list=PLTBdjV_4f-EJ7A2iIH5L5ztqqrWYjP2RI&t=1484



