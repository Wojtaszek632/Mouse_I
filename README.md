# 🐭 Mouse_I - path finding robot
Simple path finding robot, based on arduino and HC-SR04 ultrasonic sensor. 

## Table of contents
* [General info](#general-info)
* [Screenshots](#screenshots)
* [Technologies](#technologies)
* [Parts needed](#Parts)
* [Setup](#setup)
* [Features](#features)
* [Status](#status)
* [Inspiration](#inspiration)
* [Contact](#contact)

## General info
First version of path finding robot that I made in my first year of highschool. It is controlled by [Arduino Uno](https://store.arduino.cc/arduino-uno-rev3?queryID=undefined) board. It usues the [HC-SR04](https://www.sainsmart.com/products/ultrasonic-ranging-detector-mod-hc-sr04-distance-sensor) ultrasonic sensor to detect and awoid obstacles and an [L293D](https://www.amazon.com/NDRTJM-MSTL2930-L293D-Stepper-Driver/dp/B008XCGLNM) push-pull driver to controll 2 Brushed DC electric motors. I build and programmed this robot in the first year of my High school, when i started to learn arduino.

## Screenshots
![Example screenshot](https://i.imgur.com/lP9YxXU.png)
![Example screenshot](https://i.imgur.com/D5p3OIV.png)

## Technologies
* [Arduino IDE](https://www.arduino.cc/en/Main/Software)
## Parts needed
* Arduino Uno
* L293D push-pull 2 channel motor driver
* HC-SR04 ultrasonic sensor
* Breadboard
* Breadboard jumper wires
* 2WD Robot Car Chassis
* Battery pack or other energy source. (I use 4x AA batteries to power motors, and 9V battery to power Arduino, sensor, and logic of the L293D)

## Setup
Upload MARK_I.ino to your arduino and connect components as shown below:
![Schematic](https://i.imgur.com/89oVgOW.png)




## Features
Thanks to HC-SR04 ultrasonic sensor, this robot can:
* Measure distance to a obstacle
* Avoid obstacles
* Escape complicated mazes

## Status
This particular configuration is finished, hower i plan on using it as a base for future verisons of the Mouse.

## Inspiration
Youtube videos, Forbot blog.

## Contact
Created by [@Wojciech Mańczak](https://www.linkedin.com/in/wojciech-ma%C5%84czak-a11b071b2/) - feel free to contact me!
