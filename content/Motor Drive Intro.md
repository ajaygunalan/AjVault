### What is a motor driver? 

 A motor driver is a circuit while applies the required voltage on the motor based upon the user input. The user input can be a position, velocity, current, or any combinations of them. Mostly, motor driver consists of three main parts: microcontroller, gate-driver, inverter. Let us look into each one of them starting from the inverter. The inverter is nothing but a bunch of transistors (MOSFET) arranged like shown in the following figure. 


![BLDC Driver, Image courtesy of Nidec.com](https://ajaygunalan.github.io/projects/asset/past/bldc/bldc_driver.png)


 By switching these transistors at an appropriate time, you can convert the supplied DC voltage into Variable AC voltage(thus inverter) required by the BLDC motor. The transistors in the inverters have to be switched ON/OFF by the microcontroller. But, the transistors are on the high-power side, and the microcontroller is on the low-power side. Thus, we need protection between them. That’s why we use a GATE-driver which drives (switches) the transistors at the high-power region based upon the signals from the microcontroller at lower power. This ensures safety. The microcontroller receives the input from the user through some communication buses like UART, CAN, EtherCAT. Then, based upon the algorithms like (FOC, sensorless, etc.), the microcontroller gives appropriate signals to the gate-driver to switch on the corresponding MOSEFTs which in turn powers the BLDC motor.  



### Why Custom BLDC driver? 

 The article, "Actuators for dexterous and agile robots" would have explained the need for 4Q control motor driver. Here let us look at how to build a custom BLDC motor driver. The reasons to make a BLDC driver compared to others are energy-efficiency, scalable(BLDC driver can run other types of motors too), cheaper compared to commercially available BLDC drivers and in case if you want to make 8-phase BLDC motor for having a minimun torque ripple, its best you start with a 3-phase BLDC motor and it's driver.




### Skills required to build a BLDC driver 


 
  <ul style="width:50%; float:left;">
    <li>Real-Time Embedded System Programming</li>
    <li>Knowledge on how motors work and their limitations</li>
    <li>Familiarity with Communication Protocol</li>
  </ul>

  <ul style="width:50%; float:left;">
    <li>Power Electronics</li>
    <li>EMI/EMC check</li>
    <li>PCB design</li>
  </ul>

