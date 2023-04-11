#include <stdio.h>

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number to get the bit from.
 * @index: The index of the bit to get, starting from 0 (LSB).
 *
 * Return: The value of the bit at the given index (0 or 1),
 *         or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
    if (index >= sizeof(unsigned long int) * 8)
        return -1;

    unsigned long int mask = 1UL;
    mask <<= index;
    int bit = (n & mask) >> index;
    return bit;
}

int main(void)
{
    int n;

    n = get_bit(1024, 10);
    printf("%d\n", n);
    n = get_bit(98, 1);
    printf("%d\n", n);
    n = get_bit(1024, 0);
    printf("%d\n", n);

    return 0;
}

