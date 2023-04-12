#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    printf("Architecture:          x86_64\n");
    printf("CPU op-mode(s):        32-bit, 64-bit\n");
    if (get_endianness() == 1)
        printf("Byte Order:            Little Endian\n");
    else
        printf("Byte Order:            Big Endian\n");
    printf("CPU(s):                1\n");
    printf("On-line CPU(s) list:   0\n");
    printf("Thread(s) per core:    1\n");
    printf("Core(s) per socket:    1\n");
    printf("Socket(s):              1\n");
    printf("NUMA node(s):           1\n");
    printf("Vendor ID:              GenuineIntel\n");

    return 0;
}
