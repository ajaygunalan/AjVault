---
title: "threads"
---

### thread
When you run two simple executables, you create two processes that the OS independently schedules. Processes are also independently scheduled by OS. But,  they exist within a process by duplicating only the bare essential resources that enable them to exist as executable code [ref](https://hpc-tutorials.llnl.gov/posix/what_is_a_thread/).

### pthread
POSIX threads, or Pthreads are std. UNIX threads. They are defined as a set of C language programming types and procedure calls, implemented with a `pthread.h` header/include file and a thread library - though this library may be part of another library, such as `libc`, in some implementations [ref](https://hpc-tutorials.llnl.gov/posix/what_are_pthreads/). They use less resource than process and  are efficient in data exchange [ref](https://hpc-tutorials.llnl.gov/posix/why_pthreads/).


### when pthreads?
-   Work that can be executed, or data that can be operated on, by multiple tasks simultaneously:
-   Block for potentially long I/O waits
-   Use many CPU cycles in some places but not others
-   Must respond to asynchronous events
-   Some work is more important than other work (priority interrupts)

Several common models for threaded programs exist:, Manager/worker, Pipeline, Peer. Threads have common shared memory and private memory. When accessing common memory, they have to synchronize. Be careful if your application uses libraries or other objects that don’t explicitly guarantee thread-safeness. When in doubt, assume that they are not **thread-safe** until proven otherwise. For example, `OpenCV::imshow()` is not thread-safe. I suffered a lot to learn this, Lolz!! 😅 [ref](https://hpc-tutorials.llnl.gov/posix/designing_threaded_programs/).


The Pthreads API subroutines can be informally grouped into:Thread management, Mutexes, Condition variables, Synchronization [ref](https://hpc-tutorials.llnl.gov/posix/pthreads_api/).


### Thread Creation &Termination
##### Thread creation

`pthread_create(&threadId[t], NULL, PrintHello, (void *)t);`

1. Thread ID is of type `pthread_t` (`unsigned long`) 
2. Thread attributes
3. Subroutine to be called
4. Argument for subroutine

##### Thread Termination

There are several ways in which a thread may be terminated:

-   The thread returns normally from its starting routine. Its work is done.
-   The thread makes a call to the `pthread_exit` subroutine - whether its work is done or not.
-   The thread is canceled by another thread via the `pthread_cancel` routine.
-   The entire process is terminated due to making a call to either the `exec()` or `exit()`
-   If `main()` finishes first, without calling `pthread_exit` explicitly itself

###### Code
```C++ HL:"10,20,28"
#include <pthread.h>
#include <stdio.h>
#define NUM_THREADS 5

 void *PrintHello(void *threadid)
 {
    long tid;
    tid = (long)threadid;
    printf("Hello World! It's me, thread #%ld!\n", tid);
    pthread_exit(NULL);
 }

 int main (int argc, char *argv[])
 {
    pthread_t threadId[NUM_THREADS];
    int rc;
    long t;
    for(t=0; t<NUM_THREADS; t++){
       printf("In main: creating thread %ld\n", t);
       rc = pthread_create(&threadId[t], NULL, PrintHello, (void *)t);
       if (rc){
          printf("ERROR; return code from pthread_create() is %d\n", rc);
          exit(-1);
       }
    }

    /* Last thing that main() should do */
    pthread_exit(NULL);
 }
```

Link: [code](https://github.com/ajaygunalan/notes/tree/hugo/content/code/threadCreateTerminate), [ref](https://hpc-tutorials.llnl.gov/posix/creating_and_terminating/)

### Thread Join

Thread Join is one way to accomplish synchronization between threads. Two other methods are  [[mutexes]] and [[condition variables]]. The `pthread_join()` subroutine blocks the calling thread until the specified thread terminates. When a thread is created, one of its attributes defines whether it is joinable or detached. Only threads that are created as joinable can be joined. If a thread is created as detached, it can never be joined [ref](https://hpc-tutorials.llnl.gov/posix/joining_and_detaching/).

`pthread_join(threads[i], &status);` 
1. `threads[i]` is the unqiue id.
2. `status` is the return status

###### Code
```C++, HL:"45"
#include <pthread.h>
#include <stdlib.h>
#include <stdio.h>
#include <sched.h>

#define NUM_THREADS 64

typedef struct
{
    int threadIdx;
} threadParams_t;


// POSIX thread declarations and scheduling attributes
pthread_t threads[NUM_THREADS];
threadParams_t threadParams[NUM_THREADS];


void *counterThread(void *threadp)
{
    int sum=0, i;
    threadParams_t *threadParams = (threadParams_t *)threadp;

    for(i=1; i < (threadParams->threadIdx)+1; i++)
        sum=sum+i;
 
    printf("Thread idx=%d, sum[1...%d]=%d\n", 
           threadParams->threadIdx,
           threadParams->threadIdx, sum);
}


int main (int argc, char *argv[])
{
   int rc, i;
   void *status;

   for(i=1; i <= NUM_THREADS; i++)
   {
       threadParams[i].threadIdx=i;
       pthread_create(&threads[i], (void *)0, counterThread, (void *)&(threadParams[i]));
   }

   for(i=0;i<NUM_THREADS;i++) {
      pthread_join(threads[i], &status);
      printf("Main: completed join with thread %ld having a status of %ld\n",i,(long)status);  
   }


   printf("TEST COMPLETE\n");
}
}
```

Link: [code](https://github.com/ajaygunalan/notes/tree/hugo/content/code/joinThread), [ref](https://www.coursera.org/learn/real-time-embedded-systems-concepts-practices/resources/EVDh5)




























<script defer src="https://cdn.commento.io/js/commento.js"></script>
<div id="commento"></div>