---
title: "Why real time"
---


### Real-Time Embedded System Programming 


#### Embedded Programming 

 When you learn to programme (in 21st century), the first exercise would be Hello World. You would probably think of computer as a black box and after some practice, would generalize that programming means using the appropriate functions with right arguments and using the returns at the right place. It's true for most of the High-Level Programming Languages, not for Embedded Programming. In Embedded, everything is about writing and reading data from a register. A register is an expensive memory block, closest to CPU, resulting in low access time for the CPU.

### Real-Time System 

 Some think that real-time means super-fast execution such that everything happens in an instance with no delay. This is far from the truth. Real-Time means guaranteed implementation of the programme within a specified period. To achieve it there should be no variable delay in the execution of the programme which implies avoiding certain paradigms such as scheduler in a general purpose operating system like Windows, Linux (Ubuntu) and Macintosh which causes unpredictablness in execution time. A trivial example would be to check the execution time for the classic Hello World example. Run the following code snippet. (Make sure you that matplot package is installed) 

```python
#!/usr/bin/python
import time
import matplotlib.pyplot as plt

for i in range(10000):
  begin = time.time()
  print ("Hello World")
  delay = time.time() -begin
  delay =  delay*1000 # sec to milli sec
  print (delay)
  plt.scatter (i, delay)
  plt.pause (0.000000000001)
  plt.xlabel('Iterations') 
  plt.ylabel('Delay in Milliseconds')
  plt.title('Unpredictablness of exact execution time') 
  plt.ylim(0, 0.1)

plt.show()
```
 


You would get a output like shown below

![Unpredictableness of exact execution time](https://ajaygunalan.github.io/projects/asset/past/bldc/delay.png)

The test was on conducted my laptop with the following CPU and 8 GB of system ram.


```
Architecture:          x86_64
CPU op-mode(s):        32-bit, 64-bit
Byte Order:            Little Endian
CPU(s):                4
On-line CPU(s) list:   0-3
Thread(s) per core:    2
Core(s) per socket:    2
Socket(s):             1
NUMA node(s):          1
Vendor ID:             GenuineIntel
CPU family:            6
Model:                 61
Model name:            Intel(R) Core(TM) i7-5500U CPU @ 2.40GHz
Stepping:              4
CPU MHz:               1078.814
CPU max MHz:           3000.0000
CPU min MHz:           500.0000
BogoMIPS:              4789.18
Virtualization:        VT-x
L1d cache:             32K
L1i cache:             32K
L2 cache:              256K
L3 cache:              4096K
NUMA node0 CPU(s):     0-3
```


### Why have a GPOS causing unpredictableness in execution time? 

The GPOS(General Purpose Operating System) have been designed to maximize the through-output of the process executed on the machine. Whether the task is executed within a fixed time limit is not of prime concern here, and that's why the scheduler of a GPOS  focuses on increasing the number of processes executed by the CPU.




#### Then, why we need a Real-Time System? 

When it comes to a General Purpose Computers, having an OS to increase the through-output is good since the average user only cares about the over-efficacy. However, In robotics, We have two major requirements for  a real-time system. First, BLDC driver must work in real-time for ensuring appropriate switching of transistors without any variance in timing. Secondly, for reading sensor values and writing actuator values because control, and planning, algorithms require the value within a certain delay. The latter case may consist of a Single Board Computer (like RPI3) with RTOS like xenomai. The former case may consist of a microcontroller using an Embedded RTOS like ChibiOS.


### Led Blink using ChibiOS 

[Playembedded](https://www.playembedded.org/blog/how-to-start/) tutorial are best. I did it and I don't want to repeat it again. In essence, what you'll do is to write a piece of code for Led BLINK in the Eclipse IDE. Then, build it on your computer to get the binaries and dump it on the embedded board using OpenOCD. OpenOCD is a software abstraction layer so that you can dump and debug the binaries on the board. You would need a flasher or debugger like STLINK V2 which connects your PC to the embedded board.



### Why ChibiOS ###

Microcontroller manufacturers provide their own software libraries to use their product. However, ChibiOS has more functionalities which can be used instead of you developing everything from scratch saving time, effort and cost. In competitive with ChibiOS there are others too, but ChibiOS is open-source, portable, real-time and lightweight. The reason I started with ChibiOS is beacuse Benjamin Veddar uses it for his open source BLDC driver, [VESC](http://vedder.se/2015/01/vesc-open-source-esc/).

<script defer src="https://cdn.commento.io/js/commento.js"></script>
<div id="commento"></div>*