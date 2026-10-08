# ee186-lab1


2) Flashing & Debugging Code

Deliverables: 

- When we flash the C code we wrote the complier coverts C into machine code and creates a binary file. The other files it creates is in the debug folder and has .elf .list .map. It write to the MCU flash memory. STM32CubeIDE communicates to the board with ST-LINK server. 0n the STM webstie it says "STM32 Nucleo-144 board does not require any separate probe as it integrates the ST-LINK debugger/programmer"


- Screenshot
![debugger pic](https://github.com/qv123456/ee186-lab1/blob/main/part2-flashing-and-debugging-code/variables%20in%20debugger.png?raw=true)



3) Blinking LEDs
Deliverables:
Screenshot of debugger
![debugger RCC](https://github.com/qv123456/ee186-lab1/blob/main/part3-blinking-LEDs/rcc_screenshot.png?raw=true)

Video:
https://drive.google.com/file/d/1EMB12g-qLWZw0ZIwz1dn3RmUcMssAQS2/view?usp=sharing

Questions:
User LD1 (green) - PC7
User LD2 (blue) - PB7
User LD3 (red) - PB14

These pins are configured GPIOs and the associated ports are C and B.
They should be configured as an output because we are driving them high/low such as the result we get is that they turn on and off. Output meaning that they are doing a reaction.

4) Blinking LED (in Assembly!)
Deliverables:
Code attached to part 4 folder