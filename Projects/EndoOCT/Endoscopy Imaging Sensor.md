
The idea here is to develop an endoscopic imaging sensor based on electromagnetic actuation of scanning fiber [[#^22d354]] and [[oct]]. First, we developed a [[1-D OCT]] to verify whether the reference arm is correctly setup and know-how of optical alignment [[#^86084b]].





[[Scanning Fiber Endoscope]]

### Purpose of PCB
 1. To get the two independent signals (+/- 10V) from the OCT Base unit from Pin 5 and 4 and drive two independent electromagnetic coils as shown below
![[PCB 1.png]]
 2. The pin numbering and the type of socket are mentioned in the attached document titled, "Pin Assignment Auxiliary Connection OCT base unit.pdf."
 3. The PCB should use this signal for two independent current sources, maybe like a Howland current source, which will drive two electromagnetic coils.

### To Do
- [ ] The freqeuncy range at which the control signals are generated in the Thorlabs OCT base unit.


### References
1. [Design and Control of a Magnetic Laser Scanner for Endoscopic Microsurgeries](https://ieeexplore.ieee.org/document/8629990) ^22d354
2. https://github.com/ajaygunalan/AScanOCT ^86084b