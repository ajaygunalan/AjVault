### Design Parameters for Sample Arm

| **Component**                                                                                                    | **Specification**                                                                 | Needed?             |
| ---------------------------------------------------------------------------------------------------------------- | --------------------------------------------------------------------------------- | ------------------- |
| laser source                                                                                                     | $\lambda_{center} = 1310$ $nm$                                                    | No                  |
| Coupler                                                                                                          | [TW1300R5A](https://www.thorlabs.com/thorproduct.cfm?partnumber=TW1300R5A2)       | We can get one more |
| FC/APC to FC/APC Connector                                                                                       | [ADAFC4](https://www.thorlabs.com/newgrouppage9.cfm?objectgroup_id=314&pn=ADAFC4) | 2                   |
| *We can either buy patch cables like below or buy SMF roll & install FC/APC*                                     |                                                                                   |                     |
| [SMF-28 Scanning Fiber](https://www.thorlabs.com/thorproduct.cfm?partnumber=P3-SMF28Y-FC-1)                      | $\varnothing_{core} = 8.2 \mu m$; $\varnothing_{clad} = 125 \mu m$; $NA =0.14$    | 4                   |
| **Plano-Convex Lens** with [NBK-7](https://www.thorlabs.com/newgrouppage9.cfm?objectgroup_id=6973&tabname=N-BK7) |                                                                                   |                     |
| [Collimating lens](https://www.thorlabs.com/thorproduct.cfm?partnumber=LA1540-C)                                 | $f=x$ $mm$; $\varnothing=12.7$ $mm$                                               | 2                   |
| [Focusing lens](https://www.thorlabs.com/thorproduct.cfm?partnumber=LA1472-C)                                    | $f=y$ $mm$; $\varnothing = 9$ $mm$                                                | 2                   |
| [[Ring Magnet]]                                                                                                  | $\varnothing_i=0.25$ $mm$; $\varnothing_o=2$ $mm$; $h=2$ $mm$                     | No                  |
| Scanning Range                                                                                                   | $a$ $*$ $a$ $mm^2$                                                                |                     |
| [[Electromagnetic coils ]]   (150-160 Turns)                                                                                    | [35 AWG Enamelled copper wire](https://it.rs-online.com/web/p/fili-di-rame/7790696)                                                                               | 1                   |

Major Suppliers: [MISUMI](https://us.misumi-ec.com/). [RS IT](https://it.rs-online.com/web/), [Farnell](https://it.farnell.com/)

Note: Thorlabs has mentioned focal lengths for different wavelengths., Thus. I need to calculate(simulate) to find $x$, $y$ the focal length for lens at $1310$ $nm$.  This is easy but I'm not sure how to model the light from optical fiber. 

### Design Parameters for Reference Arm

| **Component**         | **Model** |
| --------------------- | --------- |
| Fiber Collimation Pkg | [F280APC-C](https://www.thorlabs.com/thorproduct.cfm?partnumber=F280APC-C) |
| Aperture              | [SM1D12CZ](https://www.thorlabs.com/thorproduct.cfm?partnumber=SM1D12CZ#ad-image-0)  |
| Mirror                | [PS975M-C](https://www.thorlabs.com/thorproduct.cfm?partnumber=PS975M-C)  |




