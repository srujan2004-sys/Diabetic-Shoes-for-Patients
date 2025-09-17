# FSR Sensor Controlled Relay

A simple Arduino project that reads **five Force Sensitive Resistors (FSRs)** and controls a **relay** automatically or via **serial commands**. Ideal for learning sensor input, mapping analog values, and controlling devices with Arduino.

---

## Features

- Reads **5 FSR sensors** and maps analog readings to 0–100 scale.  
- **Automatic relay control** when any FSR exceeds a threshold.  
- **Manual relay control** via Serial Monitor (`1` = ON, `2` = OFF).  
- Sends sensor readings in **JSON format** for easy monitoring.  
- Easily extendable for **IoT, robotics, or home automation projects**.

---

## Hardware Required

- Arduino board (Uno, Mega, Nano, etc.)  
- 5 × Force Sensitive Resistors (FSRs)  
- 1 × Relay module  
- Jumper wires  
- Breadboard (optional)  

---

## Wiring

| Component | Arduino Pin |
|-----------|-------------|
| FSR1      | A3          |
| FSR2      | A4          |
| FSR3      | A2          |
| FSR4      | A6          |
| FSR5      | A7          |
| Relay IN  | D2          |
| Relay VCC | 5V          |
| Relay GND | GND         |

---

## Usage

1. Clone or download this repository.  
2. Open `FSR_Relay.ino` in the **Arduino IDE**.  
3. Connect the hardware as per the wiring table above.  
4. Upload the sketch to your Arduino board.  
5. Open **Serial Monitor** at 9600 baud to view sensor readings.  
6. Use `'1'` or `'2'` in Serial Monitor to manually control the relay.  

---

## Example Output

```json
{
  "FSR1": 23,
  "FSR2": 45,
  "FSR3": 12,
  "FSR4": 67,
  "FSR5": 34
}
