# Inexpensibot-SLAM: Autonomous Robot Localization and Mapping

An open-source project dedicated to affordable Simultaneous Localization and Mapping (SLAM) for robots. Navigate smarter without breaking the bank!

## Key Features

- **Low-Cost Sensors**: Affordable sensors for reduced hardware expenses without compromising performance.
  
- **MappingMagic**: Innovative SLAM algorithms for real-time, high-precision mapping.

- **Versatile Applications**: Designed for robotics education, research, and practical use.

- **User-Friendly**: Easy-to-use tools, documentation, and resources for seamless SLAM implementation.

- **Community Collaboration**: Welcome contributions to enhance Inexpensibot-SLAM capabilities.

## Getting Started

Refer to our [Wiki](https://kcir-roberto.github.io/mechminds/about-us.html) for detailed documentation, installation instructions, and examples.

## Installation

Follow the steps outlined in our [Installation Guide](https://github.com/IsreLite/Inexpensibot-SLAM/wiki/Installation).

## Usage

Explore usage instructions and code examples in our [Usage Guide](https://github.com/IsreLite/Inexpensibot-SLAM/wiki/Usage).

## Contributing

We encourage community contributions! Check our [Contribution Guidelines](CONTRIBUTING.md) to get involved.

## License

This project is licensed under the [PWR Project License](LICENSE).

## Contact

For questions or inquiries, contact us at [Our Main Project Site](https://kcir-roberto.github.io/mechminds/).

Happy mapping with Inexpensibot-SLAM!

---

## Project Documentation

### Problem Statement and Motivation

The Inexpensibot-SLAM project aims to address the challenge of costly robot localization and mapping solutions by providing an affordable alternative. By leveraging low-cost sensors and innovative SLAM algorithms, the project seeks to enable precise mapping capabilities for various robotics applications.

### Solution

The solution proposed by Inexpensibot-SLAM consists of several components, including low-cost sensors, SLAM algorithms, and user-friendly tools for implementation. These components are interconnected to facilitate data flow and communication within the system.

### Tools Used

- Software: 
  - Arduino IDE - Version 1.8.13
  - C++ Programming Language

- Libraries: 
  - Servo Library
  - Analog Input/Output Libraries (for signal conversion)

- Models/Frameworks:
  - Ready-made 4-wheel 2-layer robot chassis kits (Smart Car Chassis Kits)


### Details of the Solution

The solution involves connecting various hardware components and implementing appropriate data flow and transmission protocols. 

To tackle the challenges posed by hardware complexities, a deep understanding of electronics, robotics, mathematics, along with logical and critical thinking, proved valuable. 

In the process, we encountered issues with the initial configuration of the hardware. However, through code repurposing and fine-tuning, we successfully adapted our code to work with the device. This involved adjusting vector parameters to ensure optimal output and functionality.


### Tests and Results

The solution underwent rigorous testing to evaluate its performance under various conditions. Tests included:

1. Lighting Conditions: The solution was tested under different lighting conditions to assess its robustness. Hardware failure due to low current and voltage was observed in some cases, highlighting the need for power optimization.

2. Kinematics Parameters: Testing involved adjusting kinematic parameters to ensure smooth transitions between the robot's initial and final positions. This process required fine-tuning to achieve optimal movement and accuracy.

3. PWM Calibration: PWM (Pulse Width Modulation) calibration was conducted by adjusting the output frequency of the microchip on the microcontroller. This calibration process was crucial for controlling motor speeds and achieving desired movement precision.

The results of these tests provided valuable insights into the solution's performance and guided further refinement and optimization efforts.

### Summary

The Inexpensibot-SLAM project offers an affordable solution for robot localization and mapping, with potential applications in robotics education, research, and practical use. While the solution demonstrates promising results, there are limitations to consider, such as environmental factors and hardware constraints.

### Evaluation of the Project

The project's range of applicability includes indoor mapping scenarios, educational robotics projects, and research experiments. However, limitations exist regarding the accuracy and reliability of the mapping results, particularly in complex environments.

### Possible Enhancements

- Integration of additional sensors for improved accuracy.
- Optimization of SLAM algorithms for better performance.
- Expansion of documentation and resources for user support.

### Appendices

Project Plan:
The original project plan outlined the following key stages and milestones:

- Stage 1 (Weeks 1-4): Project planning, research, and sensor selection.
- Stage 2 (Weeks 5-8): Robot hardware assembly, including chassis, motors, and sensors.
- Stage 3 (Weeks 9-12): Software development, focusing on localization algorithms and mapping functionality.
- Stage 4 (Weeks 13-15): Testing, refinement, and preparation for the project presentation.

Deviations from the original plan included:
- Extended time required for sensor selection and procurement.
- Unforeseen challenges during hardware assembly, leading to delays.
- Additional time allocated for software development to address complexities in localization algorithms.

Task Distribution:
Tasks were distributed among team members based on their expertise and responsibilities:

- Project Manager: Oversaw project progress, coordinated tasks, and ensured adherence to deadlines.
- Software Developer: Responsible for coding and programming the robot's software, focusing on sensor data processing and navigation algorithms.
- Quality Assurance (QA) Tester: Conducted testing to identify and report issues, ensuring the robot met project success criteria.
- Documentation & Procurement Specialist: Managed project documentation and acquired necessary hardware and materials.
- Technical Lead: Provided technical guidance and oversight, particularly in hardware and sensor selection and integration.
- Hardware Engineer: Focused on ensuring the proper functioning and integration of hardware components, including sensors, actuators, and power systems.
- Communication and Liaison: Facilitated clear communication among team members and stakeholders, ensuring effective collaboration.
- Risk Manager: Identified and mitigated project risks, ensuring the project stayed on course and addressing incompatibility issues.
- Presentation and Demonstration Lead: Prepared and delivered the project presentation and demonstration, showcasing the robot's mapping capabilities.
