# Zephyr Project - Button Debouncing Sample

## About

This repository contains a basic sample with working button debouncing code.
The button module Tracks Edge-Interrupts with Minimum Cooldown to discard bouncing upon button actuation.

This sample is part of the article written about Button Debouncing, developed for Golioth.

## Try this sample

- Clone this repository at the same level of the zephyr directory.
- Issue the build command with a compatible board: `west build -b nrf52840dk_nrf52840 zephyr_button_debouncing`
- Program the target: `west flash --erase`
- View the console output using the serial terminal of your choice: `screen /dev/ttyACM0 115200`
