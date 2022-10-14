

---
title: "Communication-Protocols"
---

 ## Knowledge on how motors work and their limitations ##

It's a vast topic covering various aspects of motors and their dynamics; I tried to cover the basics over [here](https://ajaygunalan.github.io/blog/notes/motor/motor.html) 



### Familiarity with Communication Protocol 

Motor driver must communicate with the main controller board for sending and receiving data. Communication can be either serial or parallel. [Serial](https://learn.sparkfun.com/tutorials/serial-communication/serial-intro) can be further classified as synchronous or asynchronous. Synchronous serial includes [SPI](https://learn.sparkfun.com/tutorials/serial-peripheral-interface-spi/all), [I2C](https://learn.sparkfun.com/tutorials/i2c/all). Asynchronous
includes two physical hardware pins for transmitting and receiving, combined they are known as UART. UART supports a wide variety of protocol such as RS-232, RS-422, RS-485 and [ICS](https://kondo-robot.com/w/wp-content/uploads/ICS3_5SoftwareManual_V1English.pdf).


### What is CAN? 

Controller Area Network is an Asynchronous Serial Bus. It was invented by Robert Bosch to **reduce the wiring** associated in an automobile and to be more **robust to noise**. According to OSI seven layers, CAN was defined only for *Physical Layer* and *Data Link Layer* by Bosch. This meant we could build a custom protocol on top of it or use some existing layers such as OpenCAN, DeviceNet. In **OpenCAN** there are things like  PDO, SDO, Heart Beat, NMT, Arbitration, etc, which is a vast topic.  In case, you are interested have a look at the following book. You can get it form [libgen.io](http://libgen.io/)


```
1.  Embedded Networking with CAN and CANopen by Olaf Pfeiffer, Andrew Ayre and Christian Keydel

2.  Understanding and Using the Controller Area Network Communication Protocol: Theory and Practice by Marco Di Natale, Haibo Zeng, Paolo Giusto, Arkadeb Ghosal
```


### CAN for roboticist 

I think, unless you are developeing a piece of code for one of the layers, You could just learn to read and write data from CAN Bus using a fully developed stack such as [SocketCAN](https://github.com/linux-can/can-utils). Of course, It works with linux only, I can't imagine doing robotics in windows!


### To Do
- [ ] EtherCAT
- [ ] Some project


<script defer src="https://cdn.commento.io/js/commento.js"></script>
<div id="commento"></div>