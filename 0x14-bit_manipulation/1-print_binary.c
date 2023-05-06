#include <stdio.h>
#include "main.h"

void print_binary(unsigned long int n)
{
	unsigned long int num;
	int i;

	for (i = 31; i >= 0; i--)
	{
		num = n >> i;
		if (num & 1)
			putchar(49);
		else
			putchar(48);
	}
}
