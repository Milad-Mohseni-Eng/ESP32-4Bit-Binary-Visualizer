# ESP32 4-Bit Binary Visualizer

ESP32-based embedded systems project that demonstrates real-time decimal-to-binary conversion using 4 LEDs and an SSD1306 OLED display.

The system counts from `0` to `15` and visualizes each number simultaneously in:

- Decimal format on OLED
- Binary format on OLED
- Physical binary output using LEDs

This project demonstrates digital logic representation, GPIO control, OLED interfacing, and firmware sequencing concepts in embedded systems.

---

# Features

- Real-time 4-bit binary counting
- Decimal-to-binary visualization
- SSD1306 OLED integration
- LED-based binary representation
- I2C communication
- Structured embedded firmware
- Educational digital logic demonstration

---

# Hardware Components

| Component | Quantity |
|---|---|
| ESP32 Dev Board | 1 |
| SSD1306 OLED Display | 1 |
| LEDs | 4 |
| 220Ω Resistors | 4 |
| Breadboard | 1 |
| Jumper Wires | Multiple |

---

# Pin Configuration

| Component | ESP32 Pin |
|---|---|
| LED 1 | GPIO16 |
| LED 2 | GPIO17 |
| LED 3 | GPIO18 |
| LED 4 | GPIO19 |
| OLED SDA | GPIO21 |
| OLED SCL | GPIO22 |

---

# Project Structure

```text
ESP32-4Bit-Binary-Visualizer
│
├── firmware
│   └── ESP32_4Bit_Binary_Visualizer.ino
│
├── docs
│   ├── wiring.png
│   ├── circuit_diagram.png
│   └── oled_active.png
│
├── README.md
├── LICENSE
└── .gitignore
```

---

# System Demonstration

The OLED displays both decimal and binary values:

```text
Decimal: 5
Binary : 0101
```

At the same time, LEDs visualize the binary state physically.

---

# Wiring Diagram

![Wiring](docs/wiring.png)

---

# Circuit Diagram

![Circuit Diagram](docs/circuit_diagram.png)

---

# OLED Preview

![OLED Preview](docs/oled_active.png)

---

# How It Works

The ESP32 iterates through a predefined 4-bit binary lookup table containing values from `0` to `15`.

Each binary digit controls one LED:

- `0` = LED OFF
- `1` = LED ON

The OLED simultaneously displays:

- Decimal representation
- Binary representation

This creates a synchronized decimal-to-binary visualization system useful for learning:

- Binary number systems
- Digital logic
- GPIO output control
- OLED interfacing
- Embedded firmware sequencing

---

# Firmware Concepts Used

| Concept | Usage |
|---|---|
| GPIO Output Control | LED binary states |
| Arrays | Binary lookup table |
| Nested Loops | State iteration |
| I2C Communication | OLED interface |
| OLED Graphics | Data visualization |
| Embedded Sequencing | Binary state progression |

---

# Required Libraries

Install the following libraries from Arduino IDE Library Manager:

```text
Adafruit GFX Library
Adafruit SSD1306
Wire
```

---

# Code Overview

The firmware performs the following operations:

1. Initializes OLED display and GPIO pins
2. Iterates from `0` to `15`
3. Outputs binary values to LEDs
4. Displays decimal and binary values on OLED
5. Repeats continuously

---

# Educational Purpose

This project is useful for understanding:

- Binary number systems
- Decimal-to-binary conversion
- Embedded GPIO control
- OLED display interfacing
- Real-time digital visualization
- Embedded firmware sequencing

---

# Future Improvements

- Dynamic binary generation using bitwise operations
- Push-button controlled counting
- Up/Down binary counting
- Hexadecimal visualization
- Shift-register expansion
- Interrupt-driven state control

---

# Author

Milad Mohseni  
Embedded Systems & IoT

---

# License

MIT License
