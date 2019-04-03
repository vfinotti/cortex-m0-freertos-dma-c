# DMA example code with FreeRTOS for Cortex-M0
Minimal "*framework*" providing startup code and Makefile for building a FreeRTOS C program for Cortex-M0. This should be used alongside the Cortex-M0 softcore implementation available on https://github.com/vfinotti/cortex-m0-soft-microcontroller.

# Required software
This "*framework*" requires following components:
- ARM GCC compiler (install `arm-none-eabi-gcc`)

# Configuration
Set the paths of `TOOLCHAIN_PATH` in Makefile so they correspond to the right path on your machine.

# Usage
Command "make" is all you need, you can do everything with it.

`make` - build project (in ELF, BIN and IHEX formats)

`make clean` - clean files


# References

1. https://github.com/goofacz/cortex-m-minimal-c
