# Temperature-controlled fan (Arduino)

Small Arduino Uno project: read an analog temperature sensor and set the fan speed with PWM in four steps.

## How it works (`CODE.ino`)

- Reads the sensor on `A0` and converts it to °C with `(V − 0.5) × 100` (TMP36-style sensor, 10 mV/°C with a 500 mV offset).
- Drives the motor driver's forward input on pin 6 with `analogWrite`:

| Temperature | PWM duty (0–255) |
|---|---|
| < 25 °C | 0 (off) |
| 25–30 °C | 128 |
| 30–35 °C | 192 |
| ≥ 35 °C | 255 (full speed) |

- Pin 5 (reverse) is configured as an output but not used.

## Files

- `CODE.ino` — the sketch
- `CIRCUIT.PNG` — wiring diagram
- `TEMPERATURE CONTROLLED FAN.pptx` — project presentation

## Limitations

No hysteresis between steps (the fan can toggle near a threshold) and no smoothing of the sensor reading.
