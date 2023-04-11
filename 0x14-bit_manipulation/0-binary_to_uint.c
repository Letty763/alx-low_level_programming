#include "main.h"
<<<<<<< HEAD
#include <stddef.h>
#include <stdio.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of binary digits (0 and 1 chars).
 *
 * Return: The converted number, or 0 if there is one or more chars
 *         in the string b that is not 0 or 1, or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int result = 0;
    int i = 0;

    if (b == NULL)
        return 0;

    while (b[i] != '\0')
    {
        if (b[i] == '0' || b[i] == '1')
        {
            result = result << 1;
            if (b[i] == '1')
                result |= 1;
        }
        else
        {
            return 0;
        }
        i++;
    }

    return result;
}

/**
 * main - Test the binary_to_uint function.
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned int n;

    n = binary_to_uint("1");
    printf("%u\n", n);
    n = binary_to_uint("101");
    printf("%u\n", n);
    n = binary_to_uint("1e01");
    printf("%u\n", n);
    n = binary_to_uint("1100010");
    printf("%u\n", n);
    n = binary_to_uint("0000000000000000000110010010");
    printf("%u\n", n);
    return 0;
}

=======

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: Pointer to a string of 0 and 1 chars
 *
 * Return: The converted number, or 0 if there is one or more chars in the
 *         string b that is not 0 or 1, or b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return 0;

	/* Loop through each character in the string */
	for (int i = 0; b[i] != '\0'; i++)
	{
		/* If a non-binary character is found, return 0 */
		if (b[i] != '0' && b[i] != '1')
			return 0;

		/* Shift the current result to the left by 1 bit */
		result <<= 1;

		/* If the current character is '1', set the least significant bit of result to 1 */
		if (b[i] == '1')
			result |= 1;
	}

	return result;
}
>>>>>>> abd1c12fcde27e11a734fefe825ee4054f74845d
