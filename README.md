# DIY Minesweeper: MSweep

## Project Overview

The Mines and Ordnance Fast Obstacle Clearer (MOFO) is a DIY minesweeper robot designed and built by Team Fighting Bombs, Ordnance, and Mines with Breakthroughs in Science (FBOMBS) at Columbia University. This project was developed as part of the Fall '23 Hacking For Defense class with the goal of creating an efficient and cost-effective solution for clearing antipersonnel mines in contested environments.

Key features of MOFO include:
- Twin-engine, three-wheeled design for stability and maneuverability
- Dimensions: 24" wide x 24" long
- Capable of clearing a 24" wide path
- Powered by dual C6374 170KV brushless motors
- Maximum speed of 5 miles per hour
- Designed for easy reproduction and replacement of parts

## Team Organization

Our team consists of 5 undergraduate and 2 graduate students from various schools within Columbia University:
- Columbia College
- School of Engineering and Applied Science
- School of General Studies

The team is divided into three subteams:
1. Electrical
2. Mechanical
3. Research/Admin

## Design Process

### Initial Concept

The initial design concept for MOFO was inspired by the idea of a 3-wheeled mine detonating electric skateboard. This concept aimed to create a simple, cost-effective, and easily reproducible robot capable of clearing antipersonnel mines in various terrains.

### Design Evolution

Throughout the development process, our team explored various design options and faced several challenges:

1. **Drivetrain:**
   - Initially considered a chain drive system
   - Evolved to a spur gear setup inspired by off-road electric skateboards
   
2. **Wheel Design:**
   - Explored options including large gears, moon-rover wheels, and replaceable wooden blocks
   - Developed 3D printed wheel prototypes
   - Finally adopted an adapted off-the-shelf (OTS) wheel solution

3. **Chassis and Structure:**
   - Started with a ⅜" mild steel plate as the main chassis
   - Developed custom mounting solutions for the drivetrain and wheels
   - Refined the design to improve stability and blast resistance

### Final Design

The final MOFO design features:
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

The electrical system of MOFO includes:
- Arduino Uno as the central processor
- Dual ESCs (Electronic Speed Controllers) with VESC software
- RC receiver for wireless control
- CAN Bus protocol for motor synchronization
- Custom Y-splitter cables and connections

## Testing Plan

Our testing plan focuses on three main objectives:
1. Maneuverability and operability on various terrains
2. Effectiveness at detonating mines and identifying weak points
3. Endurance and battery life

Planned tests include:
- Terrain testing (pavement, grass, sand, inclines)
- Detonation testing (in coordination with local authorities)
- Battery life and range testing

## Future Improvements

Potential areas for future development include:
- Refinement of blast-resistant components
- Integration of additional sensors for autonomous operation
- Exploration of alternative materials for weight reduction
- Enhancement of control systems for improved maneuverability

## Acknowledgements

We would like to thank Professor Paul Blaer for advising our team, and Matt Toles for the initial concept and technical guidance. We also extend our gratitude to Columbia University and the Hacking For Defense program for providing us with this opportunity to work on a real-world problem.

---

This project is part of the Columbia University Hacking For Defense class. For more information, please contact [Your Contact Information].
