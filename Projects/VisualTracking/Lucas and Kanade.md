Velocity in a window $W_{nXn}$ around each point in constant [[#^c08b8c]].  We calculate the velocity at every point independently.

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
The $W_{nXn}$  should be a textured region as shown below.
![[windowOF.png]]

### References
1. https://www.youtube.com/watch?v=I1kw72ld5iw&list=PLTBdjV_4f-EJ7A2iIH5L5ztqqrWYjP2RI&index=17 ^c08b8c