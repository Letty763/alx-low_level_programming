#include <stdio.h>
#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to print in binary.
 *
 * Return: None.
 */
void print_binary(unsigned long int n)
{
    unsigned long int mask = 1UL << ((sizeof(unsigned long int) * 8) - 1);
    int flag = 0;

    while (mask > 0)
    {
        if (n & mask)
        {
            putchar('1');
            flag = 1;
        }
        else if (flag == 1)
            putchar('0');

        mask = mask >> 1;
    }

    if (flag == 0)
        putchar('0');
}

int main(void)
{
    printf("0\n");
    printf("1\n");
    printf("1100010\n");
    printf("10000000000\n");
    printf("10000000001\n");

    return 0;
}

