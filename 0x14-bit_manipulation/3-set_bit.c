#include <stdio.h>

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: Pointer to the number to set the bit in.
 * @index: The index of the bit to set, starting from 0 (LSB).
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
    if (index >= sizeof(unsigned long int) * 8)
        return -1;

    unsigned long int mask = 1UL << index;
    *n |= mask;
    return 1;
}

int main(void)
{
    unsigned long int n;

    n = 1024;
    set_bit(&n, 5);
    printf("%lu\n", n);
    n = 0;
    set_bit(&n, 10);
    printf("%lu\n", n);
    n = 98;
    set_bit(&n, 0);
    printf("%lu\n", n);

    return 0;
}

