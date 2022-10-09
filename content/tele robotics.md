---
title: "tele robotics"
---

A part of the team developing a user interface team in virtual reality for tele-operated robots.

<center><iframe src="https://www.youtube.com/embed/vl5wQ8cF8U4" title="IIT and INAIL are working together to increase safety of workers" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe></center>

My primary task was developing real-time audio, video, and point cloud (PCL) streams to VR when the user requested via ROS service. I used multi-threading in C++ to parallelly open several sensors using OpenCV  & and custom encoders. The software design is described in the slideShow below.

<center><iframe src="https://www.youtube.com/embed/db5fdoCdh4U" title="Design of Vicario Sever" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe></center>

Then, I interfaced the gas sensor, temperature sensor, mic, and thermal camera with Nvidia Jetson and experimented with beam forming on the XMOS Microphone array using the [ODAS](https://github.com/introlab/odas) library. 

<script defer src="https://cdn.commento.io/js/commento.js"></script>
<div id="commento"></div>