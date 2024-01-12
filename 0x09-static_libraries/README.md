0x09-static_libraries
  --------------
This project is about how create a static and dynamic libraries in **C programming**
 - What Is A `"C"` Library?
 - What Is It Good For?
 - Creating A Static `"C"` Library using `"ar"` and `ranlib`
 - Using A `C` Library In A Program.
 - What is the difference between Dynamic and Static library.
 - What is a Static library?
 - How does it work?
 - How to create one
 - How to use it
 - Basic usage of `ar`, `ranlib` and `nm`

Technologies
  -----------------
 - Scripts were written in BASH `5.0.17(1)`
 - C files are compiled using gcc `9.4.0`
 - C files are written according to the C90 standard
 - Tested on Ubuntu `20.04 LTS`

Files
  -----------------
All of the following files are scripts and programs written in C and BASH

| Filename | Description |
| --- | --- |
| `libmy.a` | Static library that contains functions |
| `create_static_lib.sh` | A script called `create_static_lib.sh` that creates a static library called `liball.a` from all the `.c` files that are in the current directory. |
| `main.h` | Header file that contains all the prototypes of the used functions. |
