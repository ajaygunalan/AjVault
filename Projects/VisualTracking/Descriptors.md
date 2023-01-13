A descriptor is some function that is applied on the patch to describe it in a way that is invariant to all the image changes that are suitable to our application (e.g. rotation, illumination, noise etc.). A descriptor is “built-in” with a distance function to determine the similarity, or distance, of two computed descriptors. So to compare two image patches, we’ll compute their descriptors and measure their similarity by measuring the descriptor similarity, which in turn is done by computing their descriptor distance [[#^f39ccc]]. 

### Census Transform
It computes for every pixel a binary string (census signature) by comparing its grey value with the grey values in its neighbourhood. In particular, the signature encodes whether the neighbours are smaller than the reference pixel or not. For a 3×3 neighbourhood, the census signature has length 8 and can be represented efficiently via a single byte [[#^112efc]].

### Binary descriptors
Imagine one can encode most of the information of a patch as a binary string using only comparison of intensity images. This can be done very fast, as only intensity comparisons need to be made. Also, if we use the [[hamming distance]] as a distance measure between two binary strings, then matching between two patch descriptions can be done using a single instruction, as the hamming distance equals the sum of the XOR operation between the two binary strings. This is exactly the common line and rational behind binary descriptors [[#^76ef74]].

### Reference
1. [Why Binary Descriptors?](https://gilscvblog.com/2013/08/26/tutorial-on-binary-descriptors-part-1/) ^76ef74
2. [Why Is the Census Transform Good for Robust Optic Flow Computation?](https://link.springer.com/chapter/10.1007/978-3-642-38267-3_18) ^112efc
3. [A Short introduction to descriptors](https://gilscvblog.com/2013/08/18/a-short-introduction-to-descriptors/) ^f39ccc