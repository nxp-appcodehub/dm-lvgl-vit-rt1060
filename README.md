# NXP Application Code Hub
[<img src="https://mcuxpresso.nxp.com/static/icon/nxp-logo-color.svg" width="100"/>](https://www.nxp.com)

## i.MX RT1060 LVGL Coffee Machine with VIT demo
This application code is to demonstrate LVGL Coffee Machine GUI + NXP VIT on RT1060-EVK for smart panel demo.

#### Boards: EVK-MIMXRT1060
#### Categories: Graphics, HMI, RTOS, Voice
#### Peripherals: DISPLAY, I2C, I2S
#### Toolchains: MCUXpresso IDE

## Table of Contents
1. [Software](#step1)
2. [Hardware](#step2)
3. [Setup](#step3)
4. [Results](#step4)
5. [FAQs](#step5) 
6. [Support](#step6)
7. [Release Notes](#step7)

## 1. Software<a name="step1"></a>
- MCUXpresso SDK 2.10.0
- MCUXpresso IDE, version is 11.4.0 or later

## 2. Hardware<a name="step2"></a>
- [MIMXRT1060-EVK REV A board](https://www.nxp.com/design/development-boards/i-mx-evaluation-and-development-boards/i-mx-rt1060-evaluation-kit:MIMXRT1060-EVKB)
- [RK043FN02H-CT LCD panel](https://www.nxp.com/design/development-boards/i-mx-evaluation-and-development-boards/4-3-lcd-panel:RK043FN02H-CT)
- Micro USB Cable
- Personal computer

## 3. Setup<a name="step3"></a>
1. Connect a USB cable between the host PC and the OpenSDA USB ort on the target board.
1. Open a serial terminal with the following settings:
   - 115200 baud rate
   - 8 data bits
   - No parity
   - One stop bit
   - No flow control
1. Import the existing project from MCUXpresso IDE
1. Compile the project.
1. Download the built image to the board through debug probe USB port and run the example.

## 4. Results<a name="step4"></a>
1. Use VIT wakeup word and voice commands to control the smart panel.
   - Wake Word: "HEY NXP"
   - Voice Commands: “COFFEE MACHINE”, “ESPRESSO”, “RISTRETTO”, “AMERICANO”, 
“CAPPUCCINO”, “CAFE LATTE”, “CAFE MOCHA”, “START”, “SMALL”, 
“REGULAR”, “LARGE”, “RETURN”.
1. Please watch the demo video
[RT1060-EVK LVGL Coffee Machine with VIT Demo Video](https://github.com/nxp-appcodehub/dm-lvgl-vit-rt1060/blob/main/LVGL%20Coffee%20Machine%20with%20VIT%20demo%20video.MOV)

## 5. FAQs<a name="step5"></a>
If you have some questions, you can contact FAE or create a ticket to [NXP community](https://community.nxp.com/).

## 6. Support<a name="step6"></a>
#### Project Metadata
<!----- Boards ----->
[![Board badge](https://img.shields.io/badge/Board-EVK&ndash;MIMXRT1060-blue)](https://github.com/search?q=org%3Anxp-appcodehub+EVK-MIMXRT1060+in%3Areadme&type=Repositories)

<!----- Categories ----->
[![Category badge](https://img.shields.io/badge/Category-GRAPHICS-yellowgreen)](https://github.com/search?q=org%3Anxp-appcodehub+graphics+in%3Areadme&type=Repositories) [![Category badge](https://img.shields.io/badge/Category-HMI-yellowgreen)](https://github.com/search?q=org%3Anxp-appcodehub+hmi+in%3Areadme&type=Repositories) [![Category badge](https://img.shields.io/badge/Category-RTOS-yellowgreen)](https://github.com/search?q=org%3Anxp-appcodehub+rtos+in%3Areadme&type=Repositories) [![Category badge](https://img.shields.io/badge/Category-VOICE-yellowgreen)](https://github.com/search?q=org%3Anxp-appcodehub+voice+in%3Areadme&type=Repositories)

<!----- Peripherals ----->
[![Peripheral badge](https://img.shields.io/badge/Peripheral-DISPLAY-yellow)](https://github.com/search?q=org%3Anxp-appcodehub+display+in%3Areadme&type=Repositories) [![Peripheral badge](https://img.shields.io/badge/Peripheral-I2C-yellow)](https://github.com/search?q=org%3Anxp-appcodehub+i2c+in%3Areadme&type=Repositories) [![Peripheral badge](https://img.shields.io/badge/Peripheral-I2S-yellow)](https://github.com/search?q=org%3Anxp-appcodehub+i2s+in%3Areadme&type=Repositories)

<!----- Toolchains ----->
[![Toolchain badge](https://img.shields.io/badge/Toolchain-MCUXPRESSO%20IDE-orange)](https://github.com/search?q=org%3Anxp-appcodehub+mcux+in%3Areadme&type=Repositories)

Questions regarding the content/correctness of this example can be entered as Issues within this GitHub repository.

>**Warning**: For more general technical questions regarding NXP Microcontrollers and the difference in expected funcionality, enter your questions on the [NXP Community Forum](https://community.nxp.com/)

[![Follow us on Youtube](https://img.shields.io/badge/Youtube-Follow%20us%20on%20Youtube-red.svg)](https://www.youtube.com/@NXP_Semiconductors)
[![Follow us on LinkedIn](https://img.shields.io/badge/LinkedIn-Follow%20us%20on%20LinkedIn-blue.svg)](https://www.linkedin.com/company/nxp-semiconductors)
[![Follow us on Facebook](https://img.shields.io/badge/Facebook-Follow%20us%20on%20Facebook-blue.svg)](https://www.facebook.com/nxpsemi/)
[![Follow us on Twitter](https://img.shields.io/badge/Twitter-Follow%20us%20on%20Twitter-white.svg)](https://twitter.com/NXP)

## 7. Release Notes<a name="step7"></a>
| Version | Description / Update                           | Date                        |
|:-------:|------------------------------------------------|----------------------------:|
| 1.0     | Initial release on Application Code HUb        | July 17<sup>th</sup> 2023 |

