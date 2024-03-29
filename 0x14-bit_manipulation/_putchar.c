#include "main.h"
#include <unistd.h>
/**
 * _putchar -Writes the character 'c' to the standard output (stdout).
 * @c:The character to be printed.
 *
 * Return: Returns 1 upon successful completion..
 * On error, -The value of 1 is returned, and errno is set accordingly.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
