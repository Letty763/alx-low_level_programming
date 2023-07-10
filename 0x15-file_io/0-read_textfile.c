#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - This function reads the content of a text file and outputs it to the POSIX standard output (stdout).
 * @filename:A pointer to the file name.
 * @letters:The number of letters in the file.
 *           The function should read a specified number of letters from the file and print them.
 *
 * Return: If the function fails to read the file or if the `filename` parameter is `NULL`, the function should return `0`.
 *         O/w -The function should return the actual number of bytes it successfully reads and prints from the file.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);

	return (w);
}
