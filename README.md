# Potentiometer-Controlled Servo Motor using ESP32

Turn a potentiometer and a servo follows its angle in real time (0-180 degrees).

## How it works
1. The potentiometer is a voltage divider between 3.3V and GND. Its wiper goes to GPIO34 (an ADC1 input pin).
2. The ESP32's 12-bit ADC reads 0-4095.
3. The code maps that value to 0-180 degrees with `map()`.
4. The ESP32Servo library sends a 50 Hz PWM signal (500-2400 us pulses) on GPIO23 to the servo.

## Components
- ESP32 board
- Servo motor
- Potentiometer
- Breadboard and jumper wires
- ESP32Servo library (Arduino IDE)

## Wiring
| Part | Pin | Connects to |
|---|---|---|
| Potentiometer | Left leg | 3V3 |
| | Wiper (middle) | GPIO34 |
| | Right leg | GND |
| Servo | Red | VIN (5V) |
| | Brown/Black | GND |
| | Orange/Yellow | GPIO23 |

All grounds must be shared. If the ESP32 resets or the servo twitches, add a 100-470 uF capacitor across the servo's 5V and GND, or power the servo from a separate 5V supply.

## Code
See [servo_pot.ino](servo_pot.ino).

## Demo
[google drive](https://drive.google.com/drive/folders/11mbiHHcY_Fpu3N8ubNWxBzsHSX1ehBqZ)
