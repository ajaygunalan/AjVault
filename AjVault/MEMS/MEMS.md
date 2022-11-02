# MEMS
#### Introduction
##### why MEMS is challenging?
MEMS fabrication is intimately coupled with design because the choice of material determines the fabrication technology which in turn determines limitation of shape and thickness which affects the performance of the device.
##### learning to “speak” fab
###### vocabulary
There are huge lists of things that you can and can’t do in micro-fab
###### grammar
There are limits on how you can combine steps together to form a process
###### fluency
An experienced micro-fabricator knows most of these capabilities and limits from long experience.
###### tussle
A beginning micro-fabricator must struggle to master details and rules.
#####  why is it called **crayon engineering**?
At the early stages of MEMS design, conceptual process design rather than highly detailed process design is required. It is necessary to obey:
1. The laws of physics
2. Constraints on temperatures
3. Constraints on chemical compatibility
4. Design rules on geometry.

But, we can draw our processes with crayons. Hence, the phrase “crayon engineering”. As we approach the final design, we need CAD tools
##### wafer
###### popular wafer & how are they classified?
The most popular wafer are single-crystal-silicon wafers. They are classified by the orientation of the surface relative to the crystalline axes and also by doping level, n-type or p-type.
###### crystal structure image from ([[MEMS/Source Notes/Senturia2001Microsystem#^4a6547|Senturia2001Microsystem, pp 58]])
![[MEMS/Attachments/fcc.png]] 
###### wafer image from ([[MEMS/Source Notes/Maluf2002Introduction#^6980c3|Maluf2002Introduction, pp 38]])
![[MEMS/Attachments/wafer.png]]
###### [100]
A direction in crystal coordinates
###### 〈100〉
The set of symmetrically equivalent directions
######  (100)
 The plane perpendicular to a direction
######  {100}
The set of symmetrically equivalent planes 
###### Why do these miller indices matter to us?
The angle between {100} and {111} planes is of particular importance in micromachining because many alkaline aqueous solutions, such as potassium hydroxide (KOH), selectively etch the {100} planes of silicon but not the {111} planes (as we will discussed in detail in section blah blah,,). The etch results in cavities that are bounded by {111} planes as shown below.

##### Machines at IIT fab lab
###### Yellow room  (250 $m^{2}$)
- Its yellow because of the UV filters; The UV rays may affect devices. 
- [[MEMS/MEMS#^4507fa|Electron Beam Lithography]]
- [[MEMS/MEMS#^122ddb|Maskless Optical Lithography]]
- [[MEMS/MEMS#^b6e5be|Mask aligner]]
- [[MEMS/MEMS#^726fd2|Nano imprinter]]
- [[MEMS/MEMS|AFM]]
###### White room  (250 $m^{2}$)
- ISO 7
- [[MEMS/MEMS#Swiss Army Knife|Swiss army Knife]]
- [[MEMS/MEMS#^844c7e|ICP-RIE]]
- [[MEMS/MEMS#^80369f|Chemical Vapor Deposition]]
	- [[MEMS/MEMS#^983f67|Atomic Layer Deposition]]
	- [[MEMS/MEMS#^5df09b|Plasma Enhanced Chemical Vapor Deposition]]
- [[MEMS/MEMS#^80369f|Physical Vapor Deposition]]
	- [[MEMS/MEMS#^da5178|Evaporator]]  ^a6b6b1
	- [[MEMS/MEMS#^278018|Sputtering]] ^0dcad3
###### Dressing room
ISO 8

#### Lithography

######  Basic MEMS workflow
- image from [[MEMS/Source Notes/Maluf2002Introduction]]
	- ![[MEMS/Attachments/basic_mems_workflow.png|450x300]]

 ```mermaid
graph TB; 
A["Spincoating: The wafer is coated with a thin layer of polymer (photoresist)"]-->B; 
B["Softbaking: Heated on a hot plate for (2 to 5) minutes around 100 C"]--> C; 
C["Align the mask and wafer"]--> D; 
D["Expose it to UV ight"]--> E; 
E["Submerge it in a chemical bath(developer) where exposed photoresist dissovles"]--> F;
F["Rinse with deionised water and blow it dry by nitrogen gas"]--> G;
G[Etching] --> H & I["Wet (acid or base)"] & J["Dry (plasma)"];
H[Deposition]--> A & K & L;
K["PVD (solid)"] --> M["Evaporator (thermal)"] & N["Sputtering (ions)"];
L["CVD (gas)"] --> O[ALD] & P[PECVD]
```

- video
	- <iframe width="320" height="175" src="https://www.youtube.com/embed/GTQCKNVy_qE?list=PLTkAyZQDGrLbJouUD9Zgkd8HMGmjYInDB&start=210&end=555" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>

###### Electron Beam Lithography ^4507fa
-  RAITH150 TWO
-  Used for resolution higher than optical
-  It has a SEM
-  How will you control the resolution?
	-  By tuning the energy of the electron beam.
###### Maskless Optical Lithography ^122ddb
- Heidelberg DWL 66FS
- It has two laser interferometric for positioning x and y stages.
- It used for printing on mask or substrate.
- It is mounted on vibration isolator.
###### Mask aligner ^b6e5be
-  SUSS MA6/BA6
-  Has vacuum chuck; Very similar to this [video](https://www.youtube.com/watch?v=sl1-5-EviR0) 
###### Difference between maskless laser and mask aligner?
- use mask aligner for mass production; maskless for single and repeating pattern on mask.
- video
	- <iframe width="320" height="175" src="https://www.youtube.com/embed/vmxkVCba5Io?start=63&end=100" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>
###### Nano imprinter ^726fd2
-  Obducat NIL 3 inches
- video
	- <iframe width="320" height="175" src="https://www.youtube.com/embed/7ci5FGw89ek" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>
###### When to choose E-beam lithography vs Laser Beam vs Nano Print?
Depends upon the size of the design feature.  Electron beam for high resolution. Nanoprint, if you have a master and the replica quality need to be as high as the master. Resolution is good. This is cheap and faster

#### Ion Etching & Milling
##### etching
After lithography, you have a mask on top of the wafer which forms a pattern. Now, we can remove the material which is exposed by etching.
###### common terms etching terms?
- etch rate
- selectivity
- directionality
###### video
- <iframe width="320" height="175" src="https://www.youtube.com/embed/gFcLfJmNhI0?list=PLTkAyZQDGrLbJouUD9Zgkd8HMGmjYInDB&start=21&end=240" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>
##### wet etching
uses aqueous solutions (acid or base) to etch. Both surfaces of the subrate are etched and its isotropic [demo](https://www.youtube.com/watch?v=ZVYqGmnIDyA&list=PLTkAyZQDGrLbJouUD9Zgkd8HMGmjYInDB&index=54).
###### pros
- simple equipment and easy process
- high throughput
- high selectivity

###### cons
- isotropic -> undercut
- large amount of chemicals
- safety
- poor process control
#####  [[MEMS/Source Notes/Maluf2002Introduction#Dry etching|dry etching]] 
[[MEMS/Source Notes/Maluf2002Introduction#^d65c67|a.k.a plasma etching]] is where charged ions are used to remove the material. These charged ions are formed formed the plasma. [[MEMS/Attachments/Etching.pdf#page=23|What is plasma? How is it produced?]]
[[MEMS/Source Notes/Senturia2001Microsystem#^5d6812|Two outcomes of plasma?]] [video](https://www.youtube.com/watch?v=jPyiImPYUr8&list=PLTkAyZQDGrLbJouUD9Zgkd8HMGmjYInDB&index=56).

- [[MEMS/Attachments/Etching.pdf#page=22|ion milling vs plasma etching vs RIE]]
	- A plasma produces both **ions** and **free radicals**. These ions remove material by physical collision ([[MEMS/Source Notes/Senturia2001Microsystem#What is Maluf2002Introduction Ion Milling ion milling focused ion beam milling|ion milling]]) . The free radicals remove material by chemical reaction ([[MEMS/Source Notes/Maluf2002Introduction#Difference between Maluf2002Introduction d65c67 plasma etching and RIE|plasma etching]]) and combination of these two is *RIE*.

- [[MEMS/Source Notes/Maluf2002Introduction#ICP-RIE|Inductively coupled plasma reactive ion etching]] ^844c7e
	- ICP-RIE Sentech SI 500.
	- see the [[MEMS/Attachments/Nano-Photonic_Devices(1).pdf#page=18|this pdf]] for details such as gas, size of holder, ICP generator and RF source.
- Need for DIRE?
	- [[MEMS/Source Notes/Maluf2002Introduction#Difference between Maluf2002Introduction d65c67 plasma etching and RIE|plasma etching]] produces deep trenches with tapered angles. We overcome this by alternating between std. plasma etch and deposition of a polymer as shown in gif:
	 - gif
		 - ![[MEMS/Attachments/bosch_process.gif|250x300]]
 
 
 

	








#### Deposition

##### PVD vs CVD? ^80369f
In [[MEMS/Source Notes/Senturia2001Microsystem#^935ab2|PVD]] PVD, the material to be deposited is in solid state which is vaporized by *ions* ([[#^0dcad3|sputtering]]), or *thermally* ([[#^a6b6b1|evaporator]]) whereas in CVD, we already have the material to deposited in gaseous form. Due to the presence of gas, CVD has multi-directional deposition leading to conformal deposition. 
- Src Video
	- <iframe width="320" height="175" src="https://www.youtube.com/embed/7UPstHIQNZ4?start=55&end=452" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>
###### Atomic Layer Deposition ^983f67
- How it works? ^ef29f8
###### Plasma Enhanced Chemical Vapor Deposition ^5df09b
- STS (now SPTS)/ LPX PRO CVD
- How it works? ^566d6f

###### [[MEMS/Source Notes/Maluf2002Introduction#Sputter|sputtering]] ^278018
-  Kenosistec 500 CONFOCAL
-  we have one big sputter which has four chambers
-  due to these four chambers we can do alloy also.
-  this not possible if wehave single sputter
######  [[MEMS/Source Notes/Maluf2002Introduction#Evaporation|evaporator]] ^da5178
- K. J. Lesker PVD 75
- We have both thermal and e-beam evaporator
- Nickel might react with crucible hence used in e-beam evaporator
- Si can't be  thermally evaporated.
- Also we have one custom machine evaporator 
- [[MEMS/Source Notes/Senturia2001Microsystem#^935ab2|used for?]]
###### [[MEMS/Source Notes/Maluf2002Introduction#CVD vs Sputtering|Difference between CVD and Sputtering?]]
###### Plasma Enhanced Chemical  Vapor Deposition (CVD)
- STS (now SPTS)/ LPX PRO CVD
- Gases
	- SiH4, N2O, NH3, N2, Ar, O2, CF4, C4F8, He
- Holder
	- Set up for 6”  (possible up to 8”)
- Deposition
	-  Silicon Oxide, Silicon Nitride,  and Silicon Oxynitride.








#### Swiss Army Knife
- Helios NanoLab 660
- Contains dual beam of electron and gallium ions.
- Beauty:
	- one beam could deposit and other could image
	- ability to do some crazy structures by deposition 
	- extremely versatile for prototype
- Cons
	- It can't hold the usual 4 inch wafer. Need to break into smaller dice.
#### Morphological & Spectroscopical characterization
[[MEMS/Attachments/Nano-Photonic_Devices(1).pdf#page=22|Microscopes]]

#### To Do

- [ ] [[MEMS/MEMS#^ef29f8|Atomic Layer Deposition]]
	- Need to mention its number here
- [ ] [[MEMS/MEMS#^566d6f|Plasma Enhanced Chemical Vapor Deposition]]

#### Attachments
[[MEMS/Attachments/Nano-Photonic_Devices(1).pdf]]


Psititve peel of is easy
Nehative is harder thats why we use alkali

Small hole Single hole - positve 
pillar - negative 

developing vs lift off

Casino for low energy electron beam
SRIM for Ga ion beam
Why Ga

1St one for Ga .
2nd He
Gold for last2 3 years
really good souruce and manage perfect shape for beam
GaArs having Ga ion milling is not bad
Not so small not so big
Extermely good and helium
What for optical lithography