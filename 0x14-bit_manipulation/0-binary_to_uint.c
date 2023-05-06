#include <stdio.h>

unsigned int binary_to_uint(const char *b);

int main(void)
{
    const char *binary = "101010";
    unsigned int decimal;

    decimal = binary_to_uint(binary);
    printf("%u\n", decimal);

    return 0;
}

unsigned int binary_to_uint(const char *b)
{
    unsigned int binary, decimal, i, remainder, power;

    if (b == NULL)
        return 0;

    binary = 0;
    for (i = 0; b[i] != '\0'; ++i)
    {
        if (b[i] < '0' || b[i] > '1')
            return 0;
        binary = binary * 10 + (b[i] - '0');
    }

    decimal = 0;
    power = 1;
    while (binary)
    {
        remainder = binary % 10;
        decimal = decimal + (remainder * power);
        binary = binary / 10;
        power *= 2;
    }

    return decimal;
}
