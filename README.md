# Hacklife_-Macrospadius
My first ever project with a pcb design and first hackclub activity
The idea of the project is to complete the 10 week "course" of halflife by hackclub
for the first week i decided to build a macropad since it was farily simple and there was a hackclub tutorial
_______________________________________________________________________________________________________________

I call the macropad : Macrpadilius
Macrpadilius is a custom six-key macropad designed in KiCad. It uses a Seeed Studio XIAO, six Cherry MX-compatible switches, an EC11 rotary encoder with a push button, and a 0.91-inch I2C OLED display.

assets/pcb-3d-front.png

Features:    Six programmable mechanical keys
             EC11 rotary encoder
            Encoder push-button input
             0.91-inch I2C OLED display
            Seeed Studio XIAO microcontroller
            USB-C connection
           Cherry MX-compatible switch footprints
           Custom PCB shape
           B.Cu ground plane
           KiCad source files included
         
           
           Project Status
The PCB is currently under development.

Schematic completed - done
Components assigned to footprints- done
PCB routed - done
Ground zone added - done
Electrical Rules Check completed - done
Design Rules Check completed - done
Mounting holes added - done
Physical footprints verified - not yet
Gerber files generated - not yet
PCB ordered - not yet
Firmware completed  - not yet
Final board assembled and tested- Not yet
PCB Preview

PCB Editor
assets/PCB-editor.png

Front 3D view
assets/PCB-3d-front.png

Back 3D view
assets/PCB-3d-back.png

Schematic
assets/schematic.png

The buttons are connected between individual GPIO pins and GND. The firmware will use the microcontroller's internal pull-up resistors.

The OLED uses I2C:

VCC to 3.3 V
GND to GND
SDA to the XIAO SDA pin
SCL to the XIAO SCL pin
The rotary encoder uses:

A to a GPIO pin
B to a separate GPIO pin
C to GND
S1 to a GPIO pin
S2 to GND
Bill of Materials
Quantity	Component	Description
1	Seeed Studio XIAO	Exact model: Seeed Studio XIAO RP2040 Plus
6	Mechanical switches	Cherry MX-compatible PCB-mount switches -  Vendor 
6	Keycaps	Standard 1U keycaps
1	Rotary encoder	EC11-compatible encoder with push button
1	Encoder knob	Knob matching the encoder shaft
1	OLED display	0.91-inch I2C OLED
1	Custom PCB	Two-layer PCB
2 or 4	M2 screws	For mounting the PCB
2 or 4	M2 standoffs	Height depends on the enclosure
Hardware Files
The KiCad project files are located in the hardware/ directory.

Macrpadilius.kicad_pro
Macrpadilius.kicad_sch
Macrpadilius.kicad_pcb
Firmware
The firmware will support:

Six programmable keys
Rotary encoder clockwise and counterclockwise inputs
Rotary encoder push button
OLED status information
Multiple macropad layers or modes
Firmware development has not been completed yet.

Manufacturing
Before manufacturing, verify:

The exact EC11 encoder dimensions
OLED module dimensions and pin order
XIAO footprint and USB-C orientation
Cherry MX switch compatibility
Keycap and encoder-knob clearance
Mounting-hole locations
Copper-to-edge clearance
DRC results
Gerber and drill-file output
Do not manufacture the PCB before comparing every footprint with the exact physical component or its mechanical drawing.

Assembly
Planned assembly order:

Inspect the manufactured PCB.
Test continuity between power and GND.
Solder the Seeed Studio XIAO or its sockets.
Solder the OLED header.
Solder the rotary encoder.
Install and solder the six switches.
Inspect every solder joint.
Connect the board through USB-C.
Upload test firmware.
Test every switch, encoder signal, and OLED connection.
Designed With
KiCad
Arduino IDE or PlatformIO
Seeed Studio XIAO
GitHub
License
A license has not been selected yet.

Possible options include:

MIT License for firmware
CERN Open Hardware Licence Version 2 for PCB hardware
Creative Commons for documentation and images
Author
Created by Sergel Hasabella

tl;dr, This project being made is a a 6 button macropad with screen and a knob (7th), most of the work is done and uploaded
