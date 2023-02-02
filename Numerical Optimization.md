
- Prof. Shirish K. Shevade, IISc
- [youtube playlist](https://www.youtube.com/playlist?list=PL6EA0722B99332589)
- [slides and transcript](https://nptel.ac.in/courses/106108056)

I assume you know, gradient of f(x) = 0 and Hessian f''(x) < 0 at minimum point.

## Line Search Techniques

1. What is the stopping condition?
2. How to find the step length at each iteration?
	- Exact Line Search
	- Inexact line search. Armijo-Goldstein, Armjio -Wolfe.

[lec11quickNotes.pdf](https://ajaygunalan.github.io/assets/optimisation/lec11.pdf), [video](https://www.youtube.com/watch?v=8tqaXIM6kEE&list=PL6EA0722B99332589&index=12)

## Global Convergence Theorem

1. What does the algorithm converge?
2. When there is difficulty in using Armijo-Wolfe or Armijo-Goldstein, use Backtracking with Armijo Conditions.
3. How to find descent direction? $d = -Ag$ 
	- If $A=1$, then it is Steepest Descent Method.
	- Then, look at how it converges for circular, elliptical contours and for rosenbrock functions.
[lec12quickNotes.pdf](https://ajaygunalan.github.io/assets/optimisation/lec12.pdf), [video](https://www.youtube.com/watch?v=0UIt48Dt-5c&list=PL6EA0722B99332589&index=12)

## Steepest Descent Method
1. Convergence depends upon the condition number H.
	- For circular contours (1 iteration)
	- For elliptical takes more iterations.
[lec13quickNotes.pdf](https://ajaygunalan.github.io/assets/optimisation/lec13.pdf), [video](https://www.youtube.com/watch?v=V64HwFDLnoc&list=PL6EA0722B99332589&index=13)

## Classical Newton Method
1. If $d = -H^{-1}g$, it is the classical Netwon method. At each point, we replace the function locally with a convex quadratic function and solve it in one step. Then, we go to the next point.
2. In the case of SDM, we replace each point with a line (first-order Taylor series).
3. Provides smooth convergence, less sensitivity to start point compared to Steepest.
### Downsides
1. Requires $O(n3)$ computational effort for every iteration
2. No guarantee that d is a descent direction
3. No guarantee that $f (xk+1) < f (xk)$ (no line search)
4. Sensitive to initial point (for non-quadratic functions)
[lec14quickNotes.pdf](https://ajaygunalan.github.io/assets/optimisation/lec14.pdf), [video](https://www.youtube.com/watch?v=QnLvBNp8gkg&list=PL6EA0722B99332589&index=14)

## Modified Newton Method, Trust Region

In Classical Newton Method, the Initialization of $x^0$ requires knowledge of $x*$.Not practical, and $H^k$ may not be positive definite. Thus, we fix hessian  $H^K + \zeta^kI$ and use line search. This is known as the **Modified Newton Method**. When $\zeta^k$ is very high, it behaves like the Steepest descent, and when it is low, it's a classical newton (quadratic) approximation [[pdf](https://ajaygunalan.github.io/assets/optimisation/lec15modifiedNewton.pdf)].

Newton method does quadratic approximates. But what is the region in which this approximation is valid? This is called the **region of trust**. If the approximation is bad, you decrease the size of this region and vice-versa [[pdf](https://ajaygunalan.github.io/assets/optimisation/lec15trustRegion.pdf)].




[video](https://www.youtube.com/watch?v=Xxi8Cro-ssQ&list=PL6EA0722B99332589&index=1)

## Quasi-Newton Methods 


$(H^k)^{-1}$ is computationally expensive so  we approximate it by $B^k$  

$$s.t. \Longrightarrow B^{k+1}(g^{k+1}-g^k) = x^{k+1}-x^k \Longrightarrow B^{k+1}\gamma^k = \delta^k$$

- Rank 1: $B^{k+1} = B^k +\alpha uu^T$ 
- Rank 2: $B^{k+1} = B^k +\alpha vv^T +\beta vv^T$

After $n$ iterations $B^n = (H^k)^{-1}$ . The two ways to update are BFS (Davidon-Fletcher-Powell) and  BFGS (Broyden–Fletcher–Goldfarb–Shanno). Combining them gives rise to **Broyden Family** [[pdf](https://ajaygunalan.github.io/assets/optimisation/BroydenFamily.pdf)].

[[pdf](https://ajaygunalan.github.io/assets/optimisation/lec17quasiNewton.pdf), [video](https://www.youtube.com/watch?v=XpPvsMhxwSM&list=PL6EA0722B99332589&index=18)]

## Coordinate & Conjugate Descent




[video](https://www.youtube.com/watch?v=H6CCJ5c3WQw&list=PL6EA0722B99332589&index=16)
 