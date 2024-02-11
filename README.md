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

Follow the steps outlined in our [Installation Guide](https://kcir-roberto.github.io/mechminds/about-us.html#install).

## Usage

Before deploying Inexpensibot-SLAM, it's imperative to ensure that your environment is properly set up. Begin by securely attaching all hardware components to the robot structure. Double-check that the battery is connected to the power source, providing the necessary energy for the system to function optimally.

Once the hardware setup is complete, proceed with initializing the software environment. Follow the comprehensive instructions outlined in the Usage Guide to seamlessly install the required libraries and dependencies. Ensure that your system is equipped with the latest version of Arduino IDE to support the software integration process effectively.

Now that your environment is primed, it's time to embark on the experimentation phase with Inexpensibot-SLAM. Strategically position obstacles within the environment to simulate real-world mapping scenarios accurately. Feel free to adjust the placement and configuration of obstacles to thoroughly test the robot's mapping capabilities across various conditions.

For detailed insights and practical demonstrations, refer to the Usage Guide, which provides comprehensive code examples and step-by-step instructions on running the SLAM algorithms on your robot. Experiment with different settings and parameters to fine-tune the mapping performance and enhance accuracy.

As you delve into the exploration of Inexpensibot-SLAM, your contributions are invaluable. Share your insights, feedback, and any code improvements to enrich the project further. Together, let's democratize SLAM technology and empower robots with advanced mapping capabilities for diverse applications.

## Contributing

We encourage community contributions! Check our [Contribution Guidelines](CONTRIBUTING.md) to get involved.

## License


This project is subject to the following terms and conditions:

1. Privacy: Any information, data, or documentation provided in this project is subject to privacy and confidentiality. Users are prohibited from sharing, distributing, or disclosing any confidential information without prior written consent.

2. Intellectual Property: All intellectual property rights, including but not limited to copyrights, trademarks, and patents, associated with this project belong to the project contributors and the affiliated institution. Users are granted a limited license to use, modify, and distribute the project's code and documentation for non-commercial purposes only.

3. Liability: The project contributors and the affiliated institution shall not be held liable for any damages, losses, or injuries arising from the use or misuse of this project. Users assume all risks associated with the use of this project and agree to indemnify the project contributors and the affiliated institution against any claims or liabilities.

4. Compliance: Users agree to comply with all applicable laws, regulations, and policies governing the use of this project. Any violation of these terms and conditions may result in termination of the user's license and legal action.

By using or accessing this project, you agree to be bound by these terms and conditions. If you do not agree with any part of these terms, you are prohibited from using or accessing this project.

For questions or inquiries regarding this project license, please [Contact Us](https://kcir-roberto.github.io/mechminds/index.html#contact-section).

Inexpensibot-SLAM - All rights reserved.
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
