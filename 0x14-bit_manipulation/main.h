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
