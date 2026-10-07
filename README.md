# ee186-lab1


2) Flashing & Debugging Code

Deliverables: 

- When we flash the C code we wrote the complier coverts C into machine code and creates a binary file. On the MCU the memory that gets wrtten is NVS. STM32CubeIDE communicates to the board with ST-LINK (thats why if the board is not plugged in it will say ST-LINK not found)
- Screenshot
![debugger pic](https://github.com/qv123456/ee186-lab1/blob/main/part2-flashing-and-debugging-code/variables%20in%20debugger.png?raw=true)



3) Blinking LEDs
Deliverables:

Screenshot of debugger
![debugger RCC](https://github.com/qv123456/ee186-lab1/blob/main/part3-blinking-LEDs/rcc_screenshot.png?raw=true)

Video:
[![blinking video](thumbnail.jpg)](https://githubusercontent.com)

User LD1 (green) - PC7
User LD2 (blue) - PB7
User LD3 (red) - PB14

These pins are configured as bring on the GPIO C port and PPIO B port.
They should be configured as an output because we are driving them high/low such as the result we get is that they turn on and off. Output meaning that they are doing a reaction.

4) Blinking LED (in Assembly!)
Deliverables: