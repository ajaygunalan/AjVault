$$\min_u \sum_i ||D_iu||, \;\; s.t. Au=b,$$

$$\min_{w_i, u} \sum_i ||w_i||, \;\; s.t. Au=b \;\; and \;\; D_iu=w_i \;\; for \;\; all \;\; i$$


$$\mathcal{L_A}(w_i, u) = \sum_i ||w_i|| - \nu_i^T(D_iu-w_i) + \frac{\beta_i}{2}||D_iu-w_i||_2^2 - \lambda_i^T(Au-b) + \frac{\mu}{2}||Au-b||_2^2$$


- Initialize $\nu_i^0$, $\beta_i^0$, $\lambda_i^0$, $\mu_i^0$ and startaing points  $w_i^0$, $u^0$  for all $i;$
- **While** outer stopping criteria unsatisfied **Do** 
- Set $w_{i,0}^{k+1} = w_k$ and $u_0^{k+1}=u^k;$
- Find minimizers $w_i^{k+1}$ and $u^{k+1}$ of the augmented Lagrangian functcion by means of [[Algorithm 2]], starting from $w_{i,0}^{k+1}$ and $u_{0}^{k+1};$
- Update multipliers using ___ to attain $v_i^{k+1}, \lambda^{k+1}$
- Choose new penalty paramterss $\beta_i^{k+1} \ge \beta_i^k$ and $\mu^{k+1} \ge \mu^k$
- **End Do**
