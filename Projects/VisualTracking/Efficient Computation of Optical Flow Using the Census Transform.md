GitHub Repo: [Link](https://github.com/ajaygunalan/censusFlow)

1. Scan image frame $1$. Compute for every pixel $P_i^1 =(u_i^1, v_i^1)$ the signature $\xi(P_i^1)$. For a pixel $P$: 
$$\begin{split}
             & 0 \;  P-P'  >    \xi \\
\xi(P,P')  = & 1 \; |P-P'| \leq \xi  \\
			 & 2 \;  P'-P  >    \xi
\end{split}$$

2. The ternary $\xi(P_i^1)$ is interpreted as a decimal number and serves as the key to a table 1 in which the corresponding coordinate $(u_i^1, v_i^1)$ is stored.
3. Scan image frame $2$. Compute for every pixel $P_j^2 =(u_j^2, v_j^2)$  the signature $\xi(P_j^2)$.
5. Look for every $\xi(P_j^2)$ in table $1$ whether there are one or more entries with the same signature vector
6. All the resulting $(u_i^1, v_i^1) \leftrightarrow (u_j^2, v_j^2)$ pairs represent correspondence hypotheses.
7. If a consecutive image (e.g. in optical flow) has to be analyzed create a table 2 from all the $\xi(P_j^2)$.

It is obvious that this procedure leads to a huge amount of correspondence hypotheses. E.g. a patch with uniform intensity values and a center pixel U results in ξ(U )=1c.In our test images such uniform patches account for at least 104 such patches. Therefore we have to analyze at least 108 correspondence hypotheses. The question is: How can we handle the explosion of the number of correspondence hypotheses? In our work we use filters
