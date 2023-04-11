#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: Pointer to the unsigned long int to modify.
 * @index: Index of the bit to set to 0, starting from 0.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
    /* Check if index is out of range */
    if (index >= (sizeof(unsigned long int) * 8))
        return -1;

    /* Create a mask to clear the bit at the given index */
    unsigned long int mask = 1UL << index;

    /* Use bitwise AND to clear the bit at the given index */
    *n &= ~mask;

    return 1;
}
#include <stdio.h>
#include "main.h"

int main(void)
{
    unsigned long int n;

    n = 1024;
    clear_bit(&n, 10);
    printf("%lu\n", n);
    n = 0;
    clear_bit(&n, 10);
    printf("%lu\n", n);
    n = 98;
    clear_bit(&n, 1);
    printf("%lu\n", n);
    return 0;
}

