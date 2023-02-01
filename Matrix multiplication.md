
[Source video by Prof. Gilbert Strang](https://www.youtube.com/watch?v=FX4C-JpTFgY&list=PL49CF3715CB9EF31D&index=3)

$C= AB$ interpreted in four ways:

$$
\begin{bmatrix}  
9 & 12\\  
17 & 20\\
13 & 16\\
\end{bmatrix} =
\begin{bmatrix}  
1 & 1 & 1 & 0 & 0 \\  
1 & 0 & 0 & 1 & 1 \\
1 & 0 & 1 & 1 & 0\\
\end{bmatrix}
\begin{bmatrix}  
1 & 2 \\  
3 & 4 \\
5 & 6 \\
7 & 8 \\
9 & 10 \\
\end{bmatrix}
$$

```
A =  [1 1 1 0 0; 1 0 0 1 1; 1 0 1 1 0];
B = [1 2; 3 4; 5 6; 7 8; 9 10];
C = A*B;
```


1. $C_{ij} = (i_{th}$ row of $A$)$\cdot(j_{th}$ column of $B$) 

$$
17 =
\begin{bmatrix}   
1 & 0 & 0 & 1 & 1 \\
\end{bmatrix}
\begin{bmatrix}  
1 \\  
3 \\
5 \\
7 \\
9  \\
\end{bmatrix}
$$


```
17 == A(2, :)*B(:,1)
```

2. The columns of $C$ are a combination of columns $A$. The columns of $B$ tell how they are linearly combined.

$$
\begin{bmatrix}  
9 \\  
17 \\
13 \\
\end{bmatrix} 

=
1
\begin{bmatrix}  
1 \\  
1 \\
1 \\
\end{bmatrix}

+
3
\begin{bmatrix}  
1 \\  
0 \\
0 \\
\end{bmatrix}

+
5
\begin{bmatrix}  
1 \\  
0 \\
1 \\
\end{bmatrix}

+
7
\begin{bmatrix}  
0 \\  
1 \\
1 \\
\end{bmatrix}

+
9
\begin{bmatrix}  
0 \\  
1 \\
0 \\
\end{bmatrix}
$$


```
[9; 17; 13] == B(1,1)*A(:, 1) + B(2,1)*A(:, 2) + B(3,1)*A(:,3) + B(4,1)*A(:,4) + B(5,1)*A(:,5)
```
3. Rows of $C$ are a combination rows of $B$. The rows of $A$ tell how they are linearly combined.


$$
\begin{bmatrix}  
9 & 12\\  
\end{bmatrix} =

1
\begin{bmatrix}  
1 & 2 \\  
\end{bmatrix}

+
1
\begin{bmatrix}  
3 & 4 \\  
\end{bmatrix}

+
1
\begin{bmatrix}  
5 & 6 \\  
\end{bmatrix}

+
0
\begin{bmatrix}  
7 & 8 \\  
\end{bmatrix}

+
0
\begin{bmatrix}  
9 & 10 \\  
\end{bmatrix}


$$


```
[9 12] ==  A(1,1)*B(1,:) +  A(1,2)*B(2,:) + A(1,3)*B(3,:) + A(1,4)*B(4,:) + A(1,5)*B(5,:)
```


4. Sum of [(column of A).(row of B)]

$$
\begin{bmatrix}  
9 & 12\\  
17 & 20\\
13 & 16\\
\end{bmatrix} =

\begin{bmatrix}  
1 \\  
1 \\
1 \\
\end{bmatrix}
\begin{bmatrix}  
1 & 2 \\  
\end{bmatrix}

+

\begin{bmatrix}  
1 \\  
0 \\
0 \\
\end{bmatrix}
\begin{bmatrix}  
3 & 4 \\  
\end{bmatrix}

+

\begin{bmatrix}  
1 \\  
0 \\
1 \\
\end{bmatrix}
\begin{bmatrix}  
5 & 6 \\  
\end{bmatrix}

+

\begin{bmatrix}  
0 \\  
1 \\
1 \\
\end{bmatrix}
\begin{bmatrix}  
7 & 8 \\  
\end{bmatrix}

+

\begin{bmatrix}  
0 \\  
1 \\
0 \\
\end{bmatrix}
\begin{bmatrix}  
9 & 10 \\  
\end{bmatrix}

$$


```
C == A(:,1)*B(1,:) + A(:,2)*B(2,:) + A(:,3)*B(3,:) + A(:,4)*B(4,:) + A(:,5)*B(5,:)
```