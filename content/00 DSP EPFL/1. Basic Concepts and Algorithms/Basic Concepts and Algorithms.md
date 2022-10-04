## Basic Concepts and Algorithms

| Week | Topic                                |     
| ---- | ------------------------------------ | 
| 1    | [[Basic Concepts and Algorithms#Basics]]                               |     
| 2    | [[Basic Concepts and Algorithms#Signal Processing Meets Vector Space]]   |
| 3    |  [[Basic Concepts and Algorithms#Fourier Analysis Basics]]     |     
| 4    |  [[Basic Concepts and Algorithms#Fourier Analysis Advanced]]      |     

### Basics

- Do we lose anything by digitizing? Digitizing = Sampling + Quantization. Under what conditions both signals are equivalent?
	- <iframe width="320" height="175" src="https://www.youtube.com/embed/FrcdvO09Yiw" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>

- How to model a plucked string?
	- [Karplus-Strong algorithm](http://sites.music.columbia.edu/cmc/MusicAndComputers/chapter4/04_09.php)


### Signal Processing Meets Vector Space

#### What is a Hilbert Space?
A Hilbert space is nothing more than a vector space endowed with an inner product that satisfies a technical condition, namely completeness. 

#### The reason for Gibbs Phenomenon?
#### Relation Subspace Projection and Approximation?
- Orthogonal projection is the best approximation of vector in an sub-space.
	- The error is least.
	- The error and approximation are orthogonal. The basis vector and error are uncorrelated. They can't capture any more data. 

#### Legendre approximation vs Taylor approximation 

Taylor approximation is a local approximation.  Legendre approximation. The orthogonal projection, on the other hand, minimizes the global distance, the mean square error between the approximation and the original vector. So although the error is not as small around the origin, the energy of the error is lower considered over the entire interval. It's a global optimization of the approximation.

### Fourier Analysis: Basics 
### Fourier Analysis: Advanced 