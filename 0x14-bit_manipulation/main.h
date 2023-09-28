#ifndef MAIN_H
#define MAIN_H

/* Standard library headers */
#include <stdio.h>
#include <unistd.h>

/* Prototypes */
int set_bit(unsigned long int *n, unsigned int index);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int _putchar(char c);
int get_bit(unsigned long int n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);

#endif
