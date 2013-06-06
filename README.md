Thermostat - an Arduino-based temperature controller
=========================================

README


Author:     Logan Edwards
Site:       le-create.com
Version:    2013-06-06
Title:      Digital Thermostat of Sorts

*NOTE:This project is a work-in-progress.*

An Arduino Uno is the platform used to model a simple thermostat. Eventually, the goal is to transplant the project onto a standalone chip, perhaps an ATmega 328 with the Arduino bootloader for ease. At this point, a 10k thermistor and 10k mini potentiometer are used to determine a setpoint. Calculations will be necessary to translate the difference is resistance to a temperature. The scope could eventually grow to include a digital temperature and humidity sensor, a LCD display and a snazzy box. We'll see where this proof of concept goes.
