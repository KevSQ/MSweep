# DIY Minesweeper: MSweep

![image19](https://github.com/user-attachments/assets/11b7cfc9-7678-4710-9d49-2f7b876ec0d5)

## Project Overview

MSweep is a DIY minesweeper robot designed and built by Team Fighting Bombs, Ordnance, and Mines with Breakthroughs in Science at Columbia University. This project was developed as part of the Fall '23 Hacking For Defense class with the goal of creating an efficient and cost-effective solution for clearing antipersonnel mines in contested environments. The project files and design are available here and open-source for anyone to pull and modify to their needs!

Key features of MSweep include:
- Twin-engine, three-wheeled design for stability and maneuverability
- Dimensions: 24" wide x 24" long
- Capable of clearing a 24" wide path
- Powered by dual C6374 170KV brushless motors
- Maximum speed of 5 miles per hour
- Designed for easy reproduction and replacement of parts

## Design Process

### Initial Concept

The initial design concept for MSweep was inspired by the idea of a 3-wheeled mine detonating electric skateboard. This concept aimed to create a simple, cost-effective, and easily reproducible robot capable of clearing antipersonnel mines in various terrains.

![image15](https://github.com/user-attachments/assets/fb7e7eb0-179e-4b54-8c98-c1eae1b9f8a5)

### Final Design

The final MSweep design features:
- A reverse tricycle configuration with two powered front wheels and one unpowered rear wheel
- Adapted OTS wheels with custom 3D printed (later metal) adapters
- Spur gear drivetrain for efficient power transfer
- Arduino Uno-based control system with wireless remote operation
- Dual battery configuration for redundancy and extended range

## Technical Specifications

- **Dimensions:** 24" x 24"
- **Weight:** 75kg (165lb)
- **Power Source:** 2x 22.2V 5000 mAh LiPo Batteries
- **Motors:** 2x C6374 170KV
- **Control System:** Wireless Remote (20m range)
- **Estimated Range:** 5 km
- **Maximum Speed:** 2.3 m/s
- **Armor Thickness:** 
  - Bottom: ⅜" Mild Steel
  - Sides, Top (Theoretical): 20 Gauge

## Manufacturing Process

Our manufacturing process involved a combination of techniques:

1. **3D Printing:**
   - Used for rapid prototyping of components
   - Materials: Thermoplastic PLA (polylactic acid)
   - Advantages: Quick iterations, complex geometries
   - Challenges: Variability in print quality, limited durability

2. **CNC Machining:**
   - Planned for final production of drivetrain components
   - Advantages: Increased durability, precision

3. **Metal Base:**
   - Material: Mild steel
   - Chosen for its toughness, affordability, and availability

Assembly process included:
- Wooden prototype base with cut-outs and indentations
- 3D printed components mounted with M2 screws
- Custom electrical connections and wiring

## Electrical Design

The electrical system of MSweep includes:
- Arduino Uno as the central processor
- Dual ESCs (Electronic Speed Controllers) with VESC software
- RC receiver for wireless control
- CAN Bus protocol for motor synchronization
- Custom Y-splitter cables and connections

![image13](https://github.com/user-attachments/assets/98089b8a-2aec-4fb8-930b-4e32d1651cae)

## Testing Plan

Our testing plan focuses on three main objectives:
1. Maneuverability and operability on various terrains
2. Effectiveness at detonating mines and identifying weak points
3. Endurance and battery life

Planned tests include:
- Terrain testing (pavement, grass, sand, inclines)
- Detonation testing (in coordination with local authorities)
- Battery life and range testing

## Using the Project Files


First, you should download VESC Tool, the ESC controlling software we used as part of this project. While
a raw implementation on the Arduino Uno or even a Raspberry Pi may be preferable, the instructional needs
for this project isn't that extensive. As such, using this open-source software will serve our needs plenty.

Make sure to download it [here](https://vesc-project.com/vesc_tool).

Next, you'll want to download the Arduino IDE to upload the ```.ino``` file to your Arduino board.

Make sure to download Arduino IDE [here](https://www.arduino.cc/en/software).


### Load VESC Configuration Files

To load the VESC Configuration files, you'll want to navigate to the VESC Settings and import
the XML files found under the repository configs folder to the options ``` Load Motor Configuration XML ```
and ``` Load App Configuration XML ```:

![Screen Shot 2024-08-06 at 12 50 40 AM](https://github.com/user-attachments/assets/b60e364a-783d-4cb4-a534-6c6ea079770e)

### Load Arduino .ino File

After loading the sketch in the Arduino IDE, please refer to the wiring diagrams previously seen above and decide how
you will wire the required connections on your own physical build. The code assumes some default values
but you are able to change the variables quite easily at the very top. Please upload them as needed.

![Screen Shot 2024-08-06 at 2 39 12 AM](https://github.com/user-attachments/assets/869b948a-05b6-4764-890f-4cc32c02dd47)


After uploading, your wireless PWM controller should be working and communicating with the Arduino which
then relays your intent to the dual Electronic Speed Controllers.

## Future Improvements

Potential areas for future development include:
- Refinement of blast-resistant components
- Integration of additional sensors for autonomous operation
- Exploration of alternative materials for weight reduction
- Enhancement of control systems for improved maneuverability

Currently, we are working on fine-tuning the software implementation and expand functionality to several different
controller configurations. This will allow the project to be much more flexible and modular in design.

