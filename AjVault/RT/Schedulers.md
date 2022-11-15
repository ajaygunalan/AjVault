### Fixed

[[RT/Rate Monotonic]] is identical to [[RT/Deadline Monotonic]] when the release period equals the deadline. 

The [[RT/Rate Monotonic]] (and related  [[RT/Deadline Monotonic]] ) policy can be shown to provably meet system deadline requirements given deterministic release periods and service execution times. However, one major drawback is that fixed priorities do not guarantee maximum use of the CPU.

### Dynamic
[[RT/Earliest Deadline First]]
Ignoring the overhead of:
- determining which service has the earliest impending deadline.
- priority reassignment

[[RT/Earliest Deadline First]] can be shown to provide full use of the CPU where possible—even when requests intervals are not harmonic. The downside of [[RT/Earliest Deadline First]] is that if request rates vary or execution times vary, the effect upon services is hard to predict—which service will miss its deadline in an overload? 


Variations on EDF have been proposed that intend to improve the determinism of the system given variations, including [[RT/Least Laxity First]]. 

### Linux Options
[[RT/SCHED_FIFO]]








