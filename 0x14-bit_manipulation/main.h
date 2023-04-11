<<<<<<< HEAD
#include "putchar.h"
#ifndef MAIN_H
#define MAIN_H

/* Function prototypes */
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int _putchar(char c);
#endif /* MAIN_H */


=======
#ifndef MAIN_H
#define MAIN_H

#include <stdint.h> // For uint32_t and uint64_t

// Function prototypes

// Convert a binary string to an unsigned int
unsigned int binary_to_uint(const char *b);

// Convert an unsigned int to binary string and print it
void print_binary(unsigned int n);

// Get the value of a bit at a specific index
int get_bit(unsigned int n, unsigned int index);

// Set the value of a bit at a specific index
int set_bit(unsigned int *n, unsigned int index);

// Clear the value of a bit at a specific index
int clear_bit(unsigned int *n, unsigned int index);

// Flip the value of a bit at a specific index
int flip_bit(unsigned int *n, unsigned int index);

// Get the number of bits in an unsigned int
int get_num_bits(unsigned int n);

// Get the value of a specific bit field
unsigned int get_bit_field(unsigned int n, unsigned int start, unsigned int end);

// Set the value of a specific bit field
unsigned int set_bit_field(unsigned int n, unsigned int value, unsigned int start, unsigned int end);

// Get the endianness of the system
int get_endianness();

#endif
>>>>>>> abd1c12fcde27e11a734fefe825ee4054f74845d
