### Problem Statement 
Track a **weakly textured** region defined by surgeon in an endoscopic image under challenging illumination in real-time. Census, NDD and their own algorithms seems best to tackle these scenarios [[References/@trinh2019a]].


### Approach
**Challenges**: In [[optical flow]], we assume intensity of a point remain constant. We will try to use [[horn and schunck]], a variational (optimization) approach and [[descriptors]] to solve it. [[horn and schunck]] assumes smooth velocity gradient, better than constant velocity assumed by [[lucas and kanade]]. Second, the variational approach makes the problem more approachable.  Third, [[descriptors#Binary descriptors]] are robust to illumination changes and computational efficient.

I will use [biplanes](https://github.com/ajaygunalan/bitplanes) as reference and try to implement some of the algorithms in the literature review [python](https://github.com/ajaygunalan/censusFlow) for depth understanding and to improvise on it.


### Literature Review

1. In [[@stein2004a]] used filters to reduce the correspondence hypotheses. Correspondence hypotheses involves comparing census transform signature at each pixel to all the pixels in the previous frame. 
6. 
7. 
8. [[@muller2011a]]



### Improvise 
1. Discontinuity preserving smoothness by dropping quadratic cost Maybe use truncated quadratic cost [[#^33f475]]. However, it's not convex.
2.  Use $I(x)-I(x+v)$ instead of Taylor expansion [[#^99d7c6]].
3. Primal Dual algorithms allow us to model for sharp discontinuity [[#^da071e]].
4. Quadratic relaxation to decouple data term and regularizer.
5. Data-dependent regularization which favors flow edges to coincide with image edges.



### Object Tracking
We have seen that [[optical flow]] is used to track every pixel in an image, whereas Object tracking is to track a specific region. **Change detection** using difference between frames. This is improved by using a Gaussian Mixture Model.  **Tracking** can be done by: (1) Appearance or Histograms template; (2) Features like SIFT [[#^aa51dc]].

### Reference
1. [First Principles of Computer Vision by Prof.  Shree K. Nayar, Columbia University](https://fpcv.cs.columbia.edu/) ^aa51dc
	- [YouTube Playlist](https://www.youtube.com/channel/UCf0WB91t8Ky6AuYcQV0CcLw/playlists)
	-  [lecture.pdf](https://fpcv.cs.columbia.edu/Monographs)
2.  [Computer Vision by Prof. Mubarak Shah, UCF](https://www.crcv.ucf.edu/courses/cap6411-fall-2022/)
	- [YouTube Playlist](https://www.youtube.com/playlist?list=PLd3hlSJsX_ImKP68wfKZJVIPTd8Ie5u-9)
	- [Fundamentals of Computer Vision.pdf](http://www.cs.ucf.edu/courses/cap6411/book.pdf).
3. [Variational Methods for Computer Vision by Prof. D. Cremers, TU Munich](https://vision.in.tum.de/teaching/online/cvvm)
	- [YouTube Playlist](https://www.youtube.com/playlist?list=PLTBdjV_4f-EJ7A2iIH5L5ztqqrWYjP2RI)
5. [Slides](https://courses.cs.washington.edu/courses/cse455/22wi/) from UW.
6. https://www.youtube.com/watch?v=GgcbVPNd3SI&list=PLTBdjV_4f-EJ7A2iIH5L5ztqqrWYjP2RI&index=19 ^33f475
7. https://youtu.be/GgcbVPNd3SI?list=PLTBdjV_4f-EJ7A2iIH5L5ztqqrWYjP2RI&t=1150 ^da071e
8. On illumination-invariant variational optical flow for weakly textured scenes. ^b18dd7
9. [Efficient Computation of Optical Flow Using the Census Transform.](https://link.springer.com/chapter/10.1007/978-3-540-28649-3_10) ^b4884a
10. Illumination-Robust Dense Optical Flow Using Census Signatures ^ed855b





