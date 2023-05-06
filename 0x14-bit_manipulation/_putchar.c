#include "main.h"
#include <unistd.h>


/**
 * _putchar - this writes the c character to the standard output
 * @c: the character that should be printed
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
