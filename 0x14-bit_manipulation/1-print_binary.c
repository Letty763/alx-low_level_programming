#include <unistd.h>#include "main.h"

/**
 * print_binary -Displays the binary representation.
 * @n: The unsigned long integer to be converted and displayed.
 */

void print_binary(unsigned long int n)
{
	if (n >> 0)
	{
		if (n >> 1)
			print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
	else
	{
		_putchar('0');
	}
}
