---
title: "threads"
---

#### thread
When you run two simple executables, you create two processes that the OS independently schedules. Processes are also independently scheduled by OS. But,  they exist within a process by duplicating only the bare essential resources that enable them to exist as executable code [ref](https://hpc-tutorials.llnl.gov/posix/what_is_a_thread/).

#### pthread
POSIX threads, or Pthreads are std. UNIX threads. They are defined as a set of C language programming types and procedure calls, implemented with a `pthread.h` header/include file and a thread library - though this library may be part of another library, such as `libc`, in some implementations [ref](https://hpc-tutorials.llnl.gov/posix/what_are_pthreads/). They use less resource than process and  are efficient in data exchange [ref](https://hpc-tutorials.llnl.gov/posix/why_pthreads/).


#### when pthreads?
-   Work that can be executed, or data that can be operated on, by multiple tasks simultaneously:
-   Block for potentially long I/O waits
-   Use many CPU cycles in some places but not others
-   Must respond to asynchronous events
-   Some work is more important than other work (priority interrupts)

Several common models for threaded programs exist:, Manager/worker, Pipeline, Peer. Threads have common shared memory and private memory. When accessing common memory, they have to synchronize. Be careful if your application uses libraries or other objects that don’t explicitly guarantee thread-safeness. When in doubt, assume that they are not **thread-safe** until proven otherwise. For example, `OpenCV::imshow()` is not thread-safe. I suffered a lot to learn this, Lolz!! 😅 [ref](https://hpc-tutorials.llnl.gov/posix/designing_threaded_programs/).

<script defer src="https://cdn.commento.io/js/commento.js"></script>
<div id="commento"></div>