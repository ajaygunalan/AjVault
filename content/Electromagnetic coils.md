We need control from 0 to 100 Hz right? 
- That is the excitation frequency
-  Alperen  showed cntrol freq was [here](https://gitlab.advr.iit.it/BRL/laser/electromagnetic-laser-scanner/-/blob/master/arduino2/Magnetic_Scanner_sin_wave/Magnetic_Scanner_sin_wave.ino#L562) 

```
// Control loop frequency - Values obtained experimentaly: 
// * between 105 and 107 microseconds
// * 9.35 - 9.52 KHZ
// Enforce maximum control loop period = 8 KHz
``` 