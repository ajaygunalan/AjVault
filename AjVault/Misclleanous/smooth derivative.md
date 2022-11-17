![[Misclleanous/1 1.png]]

How can we implement a smooth derivative in C?  
  
The derivative $\frac{du}{dt}$ is impossible to implement in reality.  
  
The definition of derivative is:  

$\frac{du}{dt}= \lim_{T \to 0} \frac{[U(t+T)-u(t)]}{T}$

  
In practice in a control system, our $T$ is the sample time of the control loop. And it will be small, but never tend to 0.  
  
A simple implementation is to use $\frac{du}{dt} \approxeq \frac{[U(k)-u(k-1)]}{T}$

where $u(k)$ is the reading at step number $k$.  
  
This approach tends to amplify the noise in the signal u, which is always noisy if we are in the real world. To mitigate this effect we can take a step back and have a look at the Laplace domain. Let's define:  

$y(t)=\frac{du(t)}{dt} \rightarrow \frac{Y(s)}{U(s)}=s$
  
Now add a first-order low pass filter to reduce the noise:  

$\frac{Y(s)}{U(s)}= \frac{s}{\tau s +1}$
  
and go back to the time domain:  

$\tau \frac{dy}{dt} + y=\frac{du}{dt}$  
  
now approximate the derivatives with the method suggested above:  

$\tau* \frac{[y(k)-y(k-1)]}{T} + y(k)=\frac{[u(k)-u(k-1)]}{T}$  
  
and solve for $y(k)$, we get:  
  
$y(k) =\frac{[u(k)-u(k-1)+\tau*y(k-1)]}{T+\tau}$
   
This is an algorithm easy to implement in C.  
  
It is also easy to tune as the only parameter is $\tau$: a bigger $\tau$ means a smoother result, with the downside of a slower response. The tuning depends on the noise and on the system.  
  
The picture shows:  
  
- The mathematical steps explained above  
- The C function "Smooth_Derivative" that implements one step of the algorithm suggested  
- The C function "main" used to run the function "Smooth_Derivative"  
- The result of the algorithm used on a noisy signal, compared to the original noise-free derivative  
  
Notes:  
  
- The signal "u - measured" used to test the function was generated starting from an arbitrary noise-free derivative (the "actual" du/dt), integrating it and adding Gaussian noise  
  
- The function "main" simulates the behaviour of the function "Smooth_Derivative" inside a control algorithm. The function is called 200 times, supposing the sample time is 100ms, to perform the derivative on 20 seconds of the signal "u".  
  
- The function "Smooth_Derivative" could be integrated into a real control loop, called in a task that runs every T seconds.  
  
If you enjoyed this follow me for more tips on control and embedded software engineering. Hit the 🔔 on my profile to get a notification for all my new posts.  
  
Feel free to ask in the comments if you would like to see something specific, I'll do my best to address the requests.


<iframe src="https://www.linkedin.com/embed/feed/update/urn:li:share:6991292660338589696" height="2031" width="504" frameborder="0" allowfullscreen="" title="Embedded post"></iframe>