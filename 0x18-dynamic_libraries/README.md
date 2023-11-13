# 0x18. C - Dynamic libraries
![alt text](https://miro.medium.com/v2/resize:fit:1400/format:webp/1*xlvEHlb2VxB5mmHJhftDoA.jpeg)

## Table of Contents
- [About](#about)
- [Objective](#objective)
- [Requirements](#requirements)
	- [C](#c)
	- [Bash](#bash)

## About
Having already learnt about Static Libraries in C, I take a step further to learn about Dynamic Libraries in C.

## Objectives
At the end of this project I am expected to explain to anyone, without the help of Google:
- What is the environment variable `$LD_LIBRARY_PATH` and how to use it
- What are the differences between static and shared libraries
- Basic usage `nm`, `ldd`, `ldconfig`


## Requirements
### C
- **Allowed editors**: `vi`, `vim`, `emacs`.
- **Interpretation/Compilation Environment**: Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89.
- **New Line Requirement**: All your files should end with a new line.
- **Mandatory README**: A `README.md` file, at the root of the folder of the project, is mandatory.
- **Code Style**: Your code should use the `Betty` style. It will be checked using `betty-style.pl` and `betty-doc.pl`.
- **Global Variables**: You are not allowed to use global variables.
- **Functions per file**: No more than 5 functions per file.
- **Allowed functions**: 
	- You are not allowed to use the standard library. Any use of functions like `printf`, `puts`, etc… is forbidden.
	- You are allowed to use `_putchar`
- **_putchar.c**: You don’t have to push` _putchar.c,` we will use our file. If you do it won’t be taken into account
- **Test Files**: In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c`files at compilation. Our `main.c` files might be different from the one shown in the examples.
- **Header File**:
	- The prototypes of all your functions the prototype of the function `_putchar` should be included in your header file called `main.h`.
	- Don't forget to push your header file.
	- All your header files should be include guarded.
### Bash
- **Allowed editors**: `vi`, `vim`, `emacs`.
- **Interpretation/Compilation Environment**: Ubuntu 20.04 LTS
- **New Line Requirement**: All your files should end with a new line.**
- **Shebang**: The first line of all your files should be exactly `#!/bin/bash`
- **Mandatory README**: A `README.md` file, at the root of the folder of the project, describing what each script is doing.
- **File type**: All your files must be executable
