# PROSLogger

## Overview
- PROSLogger is a program just a logger

## Installation
- To install PROSLogger run these program in integrated terminal in vex pros.

    ```
    pros c add-depot PROSLogger https://raw.githubusercontent.com/GamerVerse722/PROSLogger/refs/heads/depot/stable.json
    pros c apply PROSLogger
    ```

## Developer Notes

### Build Instruction
- To build a template, run:

    ```
    pros make template
    ```

### Makefile Configuration  
- Customize the `Makefile` by modifying the following variables:

- **`IS_LIBRARY`** – Defines if the program is a library.
  - Example: `IS_LIBRARY:=1` *(1 = true, 0 = false)*

- **`LIBNAME`** – Sets the library name.
  - Example: `LIBNAME:=PROSLogger`
  
- **`VERSION`** – Specifies the current version of the library.
  - Example: `VERSION:=1.0.0`
