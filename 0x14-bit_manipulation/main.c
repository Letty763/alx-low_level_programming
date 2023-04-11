#include "main.h"
#include <stdio.h>

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
            _putchar('1');
            flag = 1;
        }
        else if (flag == 1)
            _putchar('0');

        mask = mask >> 1;
    }

    if (flag == 0)
        _putchar('0');
}

int main(void)
{
    // Example usage of print_binary function
    unsigned long int num = 42; // Example number to print in binary
    printf("Number to print in binary: %lu\n", num);
    printf("Binary representation of %lu: ", num);
    print_binary(num); // Call the print_binary function
    printf("\n");

    return 0;
}

