### Optical Flow
Motion of brightness patterns. For practical purposes, optical flow = motion field. $V_{image} = f(r_{obj}, V_{obj})$

**Assumption**
1. Intensity of a point remain constant
2. Displacement & time step are small

For a single pixel, $I_xu +I_yv+I_t=0$

![[ofGraph.png]] 
$I_x, I_y, I_t$ are computed by finite difference. However, the parallel flow component of $u,v$ can not be computed due to [aperture problem](https://youtu.be/7p4KEsGgleQ). Hence, consider a group of pixel in a window  $W_{nXn}$ giving rise to L-K Solution. 

$$
\begin{bmatrix}
	I_x(1,1)   &  I_y(1,1) \\
	\vdots     &  \vdots   \\
    I_x(k,1)   &  I_y(k,1) \\
	\vdots     &  \vdots   \\
    I_x(n,n)   &  I_y(n,n) 
\end{bmatrix}
\begin{bmatrix}
	u  \\
	v
\end{bmatrix}
=
\begin{bmatrix}
	I_t(1,1)   &  I_t(1,1) \\
	\vdots     &  \vdots   \\
    I_t(k,1)   &  I_t(k,1) \\
	\vdots     &  \vdots   \\
    I_t(n,n)   &  I_t(n,n) 
\end{bmatrix}
$$
The $W_{nXn}$  should be a textured region as shown below. In case, of large motions, we can estimate optical flow by using [Resolution Pyramidal or Template Matching](https://www.youtube.com/watch?v=VSSyPskheaE&list=PL2zRqk16wsdoYzrWStffqBAoUY8XdvatV&index=5).

![[windowOF.png]]

[[#^f0eba4|Sparse]]: Compute flow only for specific features.
[[#^e2250e|Dense]]: Compute flow for all pixels.

Lucas-Kanade is technically a dense algorithm, but in practice only works on good feature points, i.e., it’s sparse.

### Object Tracking
We have seen that [[#Optical Flow]] is used to track every pixel in an image, whereas Object tracking is to track a specific region. **Change detection** using difference between frames. This is improved by using a Gaussian Mixture Model.  **Tracking** can be done by: (1) Appearance or Histograms template; (2) Features like  SIFT

### Reference
1. [First Principles of Computer Vision by Prof.  Shree K. Nayar, Columbia University](https://fpcv.cs.columbia.edu/)
	- [YouTube Playlist](https://www.youtube.com/channel/UCf0WB91t8Ky6AuYcQV0CcLw/playlists)
	-  [lecture.pdf](https://fpcv.cs.columbia.edu/Monographs)
2.  [Computer Vision by Prof. Mubarak Shah, UCF](https://www.crcv.ucf.edu/courses/cap6411-fall-2022/)
	- [YouTube Playlist](https://www.youtube.com/playlist?list=PLd3hlSJsX_ImKP68wfKZJVIPTd8Ie5u-9)
	- [Fundamentals of Computer Vision.pdf](http://www.cs.ucf.edu/courses/cap6411/book.pdf).
3. [Variational Methods for Computer Vision by Prof. D. Cremers, TU Munich](https://vision.in.tum.de/teaching/online/cvvm)
	- [YouTube Playlist](https://www.youtube.com/playlist?list=PLTBdjV_4f-EJ7A2iIH5L5ztqqrWYjP2RI)
4. 8 OpenCV algorithms
	- [PyImageSearcg](https://pyimagesearch.com/2018/07/30/opencv-object-tracking/)
	- [broutonlab](https://broutonlab.com/blog/opencv-object-tracking)
5. [Slides](https://courses.cs.washington.edu/courses/cse455/22wi/) from UW
6. B.D. Lucas, T. Kanade, “An Image Registration Technique with an Application to Stereo Vision”, in Proceedings of Image Understanding Workshop, 1981, pp. 121-130 ^f0eba4
7. Farnebäck, Gunnar. "Two-frame motion estimation based on polynomial expansion." Scandinavian conference on Image analysis. Springer, Berlin, Heidelberg, 2003 ^e2250e
8. [Matlab](https://www.mathworks.com/matlabcentral/fileexchange/44400-tutorial-and-toolbox-on-real-time-optical-flow)

