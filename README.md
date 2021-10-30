
<h1>
 Arduino Amplified with ISTE-VIT 🔌 📈
</h1>

<br>
If you're an electrical enthusiast :sunglasses: and want to add or improve a project or snippet of code your contribution is welcome! 


<br>
<h3 align="center">
<a href="https://hacktoberfest.digitalocean.com/"><img src="https://64.media.tumblr.com/7fea346d43dff365ad54f4a33441389f/1473908e7816c915-fe/s540x810/80ecb48ebe2db3aa0b3e2757ce10c71d5b3acbc9.png"></a>
  </h3>
When it comes to Electric domain practice makes perfect! (Whether you are a beginner or on the way to becoming a pro) join us this Hacktoberfest 🎊 to sharpen your analysing skill and develop new solutions to the challenges presented to you. Work your way up through the categories or choose projects that interest you. All that matters is making this October a month of learning and winning Schwags 👕


  <h2>
 What is Hacktoberfest2021 :thinking:? 
</h2>
Hacktoberfest is a month-long celebration of open source software run by DigitalOcean in partnership with GitHub and Twilio. Hacktoberfest is open to everyone in the global community!

All that one must do is contribute to any open source project and send atleast 4 pull request between October 1 and October 31. It can be any project and you can contribute in any way possible. It can be a be a bug fix, improvement,feature addition  or even a documentation change! And win a T-Shirt and awesome stickers :star_struck:.

## Steps to Contribute 
- Fork this repo 
- Clone on your local machine 
```terminal
git clone https://github.com/<your username>/Arduino_Amplified.git
cd Arduino_Amplified
```
- Create a new branch 
```terminal
git checkout -b my-new-branch
```
- Add your contributions 
- Commit and push

```terminal
git add .
git commit -m "your-commit-msg"
git push origin my-new-branch
```
- Create a new pull request from your forked repository

## Contribution Guidelines 📃

#### Kindly mention the following while making a PR:
* It is mandatory to attach the Circuit Diagram  or Simulation Video along the code
* If the PR is not in the right format, it will not be merged and marked as invalid.
* Don't make any changes in the repo format or create new issues without asking the maintainers.
* You can make a new folder if a particular topic is missing.
* Kindly avoid repeating the algorithms which are already available.

#### All your PRs will be marked as invalid if you don't adhere to the rules.


 ## Table of contents

  <details><summary>Beginner</summary>
<p>

* [Automatic Light Switch](#Automatic-Light-Switch)
* [Counter using an IR sensor](#Counter-using-an-IR-sensor)
* [Smoke Detector](#Smoke-Detector)
* [ Obstacle sensor ](#Obstacle-sensor)
* [Alarm Clock](#Alarm-Clock)
* [Garden Sprinkler System](#Garden-Sprinkler-System)
* [RGB projects](#RGB-projects)
* [Smoke Detector](#Smoke-Detector)
* [Theft alarm system](#Theft-alarm-system)
* [Digital Clock](#Digital-Clock)
</p>
</details>

 <details><summary>Intermediate</summary>
<p>
	
* [Bidirectional counter](#Bidirectional-counter)
* [Automatic screen brightness adjuster](#Automatic-screen-brightness-adjuster)
* [Water level detector](#Water-level-detector)
* [IR Remote based home automation](#IR-Remote-based-home-automation)
</p>
</details>

 <details><summary>Advance</summary>
<p>
<hr/>
* [Numeric Keypad based Lock system](#Numeric-Keypad-based-Lock-system)
* [Crowd warning system](#Crowd-warning-system)
* [Gas detecting Helmet](#Gas-detecting-Helmet)
* [Air quality monitering system](#Air-quality-monitering-system)
</p>
</details>

 * [Resources](#Resources)

 ## Beginner :thought_balloon:
 #### Automatic Light Switch
Use PIR (passive infrared) sensor and design a circuit which can sense human presence on arriving and switches on the  LED .
 
 #### Counter using an IR sensor
The main goal of the project is to create a system which senses when a person enters a room using only one IR sensor and is able to keep a track of how many people are entering.
You are free to add additional features to it !
 <br>
 <hr/>
 #### Smoke Detector
In this project, we will create a smoke detector using Arduino. The detector will detect the smoke and will notify the user, by various means such as a glowing red light or even an alarm system.
 
 ####  Obstacle sensor 
Using a sensor of your choice ,create a framework of  an obstacle detector. It should print “Obstacle detected” or the distance from it  in the serial monitor.

#### Alarm Clock
Create a simple alarm clock using RTC and a buzzer. Set the RTC by a keypad as well as set the alarm.
 
#### Garden Sprinkler System
Construct a project which monitors the moisture of the soil and waters it by a motor based water pump when required.

#### RGB projects
Design a project using RGB led such that the red LED will light up for one second, the next 1 sec green and the next one sec blue.You may also get creative with this project and curate  different RGB based projects and give your own twist to it.

#### Smoke Detector
Fabricate a smoke detector that will detect the smoke and will notify the user, by various means such as a glowing red light or even an alarm system.

#### Theft alarm system
Model a theft alarm system using photoresistor (LDR) such that when one crosses the area where light falls the alarm system gets activated.

#### Digital Clock
Build a simple digital clock which contains an LCD and two buttons without any potentiometer or resistors.

 ## Intermediate :bar_chart:
 #### Bidirectional counter
Draft a Bidirectional Visitor Counter with an Automatic Light Control System using Arduino. This project is based on a pair of Infrared Sensors that detects an interrupt when it detects an obstacle. The pair of IR sensors can detect the visitor from both directions, i.e. the number of entering visitors and the number of exciting visitors.
 
 ####  Automatic screen brightness adjuster
Using an ambient light sensor, develop an automatic screen brightness adjuster. Represent the brightness of the screen with a RED LED. As the ambient brightness increases, the brightness of the RED LED should also increase and vice-versa.
 
 #### Water level detector
 Using an ultrasonic sensor and Arduino put together a water level detector which detects the water level and updates it in the serial monitor.

 
 #### IR Remote based home automation
Using IR Sensor and a remote, make a home automation circuit which controls a high voltage load such as fluorescent tube just by using a single button in IR Remote (On and off of the load should be actuated by the same button in IR Remote). For the HV switching circuit, make use of a relay.
 
 ## Advance :dart:
 #### Numeric Keypad based Lock system
 Using a 4x4 keypad, make a lock system that opens a gate (run the servo to 90 degrees) when a correct 4 digit pin is entered and if the pin doesn't match, display the error using a 16x2 LCD display.
 
 #### Crowd warning system
 Measures the no. of people entering and leaving the room using an IR Sensor at the door. Include a RED LED such that its brightness is proportional to no. of people in the room at particular time. If the no. of people in the room exceeds a certain value, a buzzer should be powered.
 
 #### Gas detecting Helmet
 The objective of this project is to make a safety helmet that provides toxic gas monitoring in the field of vision of the helmet user. The safety helmet includes a gas-measuring device of modular design. The safety helmet has a sensor module positioned in the field of vision of the helmet user.
 
#### Air quality monitering system
The Air quality monitoring system is a system which measures meteorological parameters such as, smoke, dust, temperature, humidity and gaseous level of few unwanted gases(in ppm)  which exists in open air. This project should be made using Arduino and a couple of sensors which can detect the required parameters.
 
 
 ## Resources
- [Learn how to create a Pull Request](https://services.github.com/on-demand/intro-to-github/create-pull-request)

- [Learn the Git Basics](https://try.github.io)

##### Click icon to access Simulation Softwares

<a href="https://www.arduino.cc/en/Main/Software_"><img src="https://64.media.tumblr.com/29c9aa0efbaebe523688b7f0ec1a8e1f/1c18798b14bb4f88-10/s400x600/da3e77831781e4eea3837046db9f1d9b2925189e.png" align="left" height="100" width="250" ></a>

<a href="https://www.tinkercad.com/"><img src="https://64.media.tumblr.com/bdaa7635507d980c2fcf473f9ab460cc/34edd42736f512fc-16/s540x810/d24a836b5e52a8bc8efebc377b75f1d648bf8995.jpg" align="left" height="100" width="250" ></a>

<a href="https://fritzing.org/"><img src="https://64.media.tumblr.com/677556a2b32b7328150b5e1fc6b1b656/d19e3a3bb3ce0976-0a/s540x810/5fc4a28aa40cfdb86ed3069b5761fb90c78aa74e.jpg" align="left" height="100" width="250" ></a><br>


<br>
<br>
<br>
<h2>Other Repos by ISTE for Hacktober</h2>

<br>
<table align="center">
<tbody>
	<tr>
		
<td align="center" >
<span><b><center>Repo Name</center></b></span>
</td>

<td align="center">
<span><b><center>Link to the folder</center></b></span>
</td>
</tr>
 <tr>
	
	


<td align="center" >
<span><center>Algo Companion</center></span>
</td>

<td align="center">
<a href="https://github.com/ISTE-VIT/The-Algo-Companion">Link to the Repo</a>
</td>
</tr>

<tr>
<td align="center">
<span><center>Projects Archive</center></span>
</td>

<td align="center">
<a  href="https://github.com/ISTE-VIT/Projects-Archive"> Link to the Repo</a>
</td>



</tbody>
</table>

 
 
 



 
 <h4>
	Keep contributing!!
</h4>

 If the information from this repo was useful to you in any way, make sure you give it a star 🌟
<br>
<hr>
<p align="center">
	With :heart: &nbsp;by <a href="https://istevit.in/" target="_blank">ISTE-VIT</a>
</p>


