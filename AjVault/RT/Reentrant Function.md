A function that can preempted and **re-entered** again safely without any issues, typically they are thread-safe.

By:
- Avoid [[global and static variable]]
-  Function must not modify its own code (e.g. some low level graphic routines may have "habit" to generate itself) 
-   Do not call any function that does not comply with the two rules above

When to use re-entrant function? Here are some examples:
- Functions executed in interrupt context must be re-entrant.
- Functions that will be called from multiple threads/tasks must be re-entrant.

