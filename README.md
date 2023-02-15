# IO expander MCP23017 breakout Arduino library

[![Make docs and publish to GitHub Pages](https://github.com/e-radionicacom/Soldered-MCP23017-Port-Expander-Arduino-Library/actions/workflows/make_docs.yml/badge.svg?branch=dev)](https://github.com/e-radionicacom/Soldered-MCP23017-Port-Expander-Arduino-Library/actions/workflows/make_docs.yml)

| ![IO expander MCP23017 breakout](https://github.com/SolderedElectronics/IO-expander-MCP23017-breakout-hardware-design/blob/main/OUTPUTS/V1.1.1/333007.jpg) |
| :---------------------------------------------------------------------------------------------: |
| [IO expander MCP23017 breakout](https://www.solde.red/333007)                                                            |

Are you short on IO pins? Looking to increase the number of them? That’s what the GPIO Expander MCP23017 is for! It uses I2C communication to do so. With just two wires, 16 new fully configurable digital IO pins are added to a microcontroller.

Due to the jumpers on the board, the I2C address of a device can be changed. Thus, eight breakout boards can be connected to a microcontroller. All of the pins on the expander board have pull-out resistors that can be turned on and off.

- Dimensions: 38 mm x 22 mm
- Standby current consumption: 1 μAStandard current consumption:  1 mA
- Logic voltage level: 5V
- Operating voltage: 1.8V to 5.5V
- Communication: I2C (address: 0x27)
- Connectors: easyC x2
- Mounting holes: 2
(https://www.soldered.com/en/easyC)

### Repository Contents
- **/src** - source files for the library (.h & .cpp)
- **/examples** - examples for using the library
- ***other*** - *keywords* file highlights function words in your IDE, *library.properties* enables implementation with Arduino Library Manager.

### Hardware design
You can find hardware design for this board in [*IO expander MCP23017 breakout*](https://github.com/SolderedElectronics/IO-expander-MCP23017-breakout-hardware-design) hardware repository.

### Documentation

Access Arduino library documentation [here](https://SolderedElectronics.github.io/Soldered-MCP23017-Port-Expander-Arduino-Library/).

- Tutorial for using the NAZIV PROIZVODA board
- Installing an Arduino library

### Board compatibility

The library is compatible with board & microcontroller families shown in green below: 

[![Compile Sketches](http://github-actions.40ants.com/e-radionicacom/Soldered-MCP23017-Port-Expander-Arduino-Library/matrix.svg?branch=dev&only=Compile%20Sketches)](https://github.com/e-radionicacom/Soldered-MCP23017-Port-Expander-Arduino-Library/actions/workflows/compile_test.yml)


### About Soldered
<img src="https://raw.githubusercontent.com/e-radionicacom/Soldered-MCP23017-Port-Expander-Arduino-Library/dev/extras/Soldered-logo-color.png" alt="soldered-logo" width="500"/>

At Soldered, we design and manufacture a wide selection of electronic products to help you turn your ideas into acts and bring you one step closer to your final project. Our products are intented for makers and crafted in-house by our experienced team in Osijek, Croatia. We believe that sharing is a crucial element for improvement and innovation, and we work hard to stay connected with all our makers regardless of their skill or experience level. Therefore, all our products are open-source. Finally, we always have your back. If you face any problem concerning either your shopping experience or your electronics project, our team will help you deal with it, offering efficient customer service and cost-free technical support anytime. Some of those might be useful for you:

- [Web Store](https://www.soldered.com/shop)
- [Tutorials & Projects](https://soldered.com/learn)
- [Community & Technical support](https://soldered.com/community)


### Original source
​
This library is possible thanks to original [arduino-mcp23017](https://github.com/blemasle/arduino-mcp23017) library. Thank you, blemasle. 


### Open-source license
Soldered invests vast amounts of time into hardware & software for these products, which are all open-source. Please support future development by buying one of our products. 

Check license details in the LICENSE file. Long story short, use these open-source files for any purpose you want to, as long as you apply the same open-source licence to it and disclose the original source. No warranty - all designs in this repository are distributed in the hope that they will be useful, but without any warranty. They are provided "AS IS", therefore without warranty of any kind, either expressed or implied. The entire quality and performance of what you do with the contents of this repository are your responsibility. In no event, Soldered (TAVU) will be liable for your damages, losses, including any general, special, incidental or consequential damage arising out of the use or inability to use the contents of this repository. 

## Have fun! 
And thank you from your fellow makers at Soldered Electronics.