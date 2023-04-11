#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned int n;

    n = flip_bits(1024, 1);
    printf("%u\n", n);
    n = flip_bits(402, 98);
    printf("%u\n", n);
    n = flip_bits(1024, 3);
    printf("%u\n", n);
    n = flip_bits(1024, 1025);
    printf("%u\n", n);

    return 0;
}

/**
 * flip_bits - Returns the number of bits needed to flip to get from one number to another.
 * @n: First number.
 * @m: Second number.
 *
 * Return: Number of bits needed to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    unsigned long int xor_result = n ^ m;
    unsigned int count = 0;

    while (xor_result > 0)
    {
        count += xor_result & 1;
        xor_result >>= 1;
    }

    return count;
}

