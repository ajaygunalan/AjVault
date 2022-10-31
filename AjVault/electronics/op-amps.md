---
title: "op-amps"
---

### Why Op-amp?
You must be aware that transistors can function as amplifiers. However, an amplifier made from a single transistor has some drawbacks. By combining several transistors and other components in an integrated circuit known as an op-amp, we can get around these restrictions.

### What it  does?
If the voltage applied ($V_{in}$) to the non-inverting terminal ($V_+$) > the voltage applied to the inverting terminal ($V_-$) , the output saturates toward the positive supply voltage $+V_s$. Conversely,  if $V_-$ >  $V_+$ , then $V_{out}$ -> $-V_S$.  This "maxing out" effect occurs with the slightest difference in voltage between the input terminals. They key here is to understand behaviors of op-amp in open loop, positive feedback and negative feedback.
[Pg635PracticalElectronicsForInventors](zotero://open-pdf/library/items/WMPQQ98V?page=664)
![[electronics/images/opamp.png]]


###   Biasing  
You give +V and -V and  add 100nF capacitor near the OP-Amps to filter out noise in the power rail. 

### Open-Loop
###### circuit
![[electronics/images/op-amp-bias-circuit.jpg]]

###### breadboard
![[electronics/images/breadBoard.jpg]]


### Use Cases
##### Comparator at 0V
######  Sine to Square wave
![[electronics/images/open_inverting.jpg]]
######  Open Invert Circuit Configuration
![[electronics/images/OPEN_INVERT_circuit.jpg]]

##### Comparator at 5V
######  Sine to Square wave @ 5V
![[electronics/images/open_invert_reference.jpg]]
######  Open Invert Circuit with Ref. Voltage
![[electronics/images/OPEN_INVERT_REFERENCE_Circuit.jpg]]

###### What if we don't have 5V supply?
 Need to develop voltage divider like below:
![[electronics/images/OPEN_INVERT_REFERENCE_VOLT_DIVID.jpg]]

##### Hystersis for Noise Thresholding
##### Problem with our stable power supply 
Bias voltages often originate from a stable power source that is either linear (5V) or switching (+12V, -12V). The absolute values may change somewhat even when the power supply is steady. My voltage is +12.4 V, while yours is +12.2 V, for instance. We require a circuit that can function with both power sources. Therefore, regardless of the actual bias voltage value, we employ a reference-voltage IC to obtain an accurate well-known voltage value.
- circuit
	- ![[Reference Voltage.svg]]




### What if we have noisy input signal
- like this
	- ![[Input_signal.svg]]
- output
	- ![[noisy_signal_output.jpg]]
- noisy signal  simulating circuit
	-  ![[SIMULATING_NOISY_SIGNAL 1.jpg]]
-  [[Electronics#^e79c59|solution]]



