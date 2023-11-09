# 0x17. C - Doubly linked lists
![alt text](https://pbs.twimg.com/media/F-fKsIxXQAA2M9_?format=jpg&name=small)

## Table of Contents
- [About](#about)
- [Objective](#objective)
- [Requirements](#requirements)
- [More Info](#more-info)

## About
Having already learnt about Singly linked lists, I take a step further to learn about Doubly linked lists.

## Objectives
At the end of this project I am expected to explain to anyone, without the help of Google:
- What is a doubly linked list
- How to use doubly linked lists
- Understand and know how to implement the various operations (deletion, insertion, etc) with doubly linked lists
- Start to look for the right source of information without too much help

## Requirements
- **Allowed editors**: `vi`, `vim`, `emacs`.
- **Interpretation/Compilation Environment**: Ubuntu 20.04 LTS using python3 (version 3.8.5).
- **New Line Requirement**: All your files should end with a new line.
- **Mandatory README**: A `README.md` file, at the root of the folder of the project, is mandatory.
- **Code Style**: Your code should use the `Betty` style. It will be checked using `betty-style.pl` and `betty-doc.pl`.
- **Global Variables**: You are not allowed to use global variables.
- **Functions per file**: No more than 5 functions per file.
- **Allowed functions**: The only C standard library functions. allowed are `malloc`, `free`, `printf` and `exit`.
- **Test Files**: In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c`files at compilation. Our `main.c` files might be different from the one shown in the examples.
- **Header File**:
	- The prototypes of all your functions should be included in your header file called `lists.h`.
	- Don't forget to push your header file.
	- All your header files should be include guarded.

## More Info
Please use this data structure for this project:
```
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * 
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
```
