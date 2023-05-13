#include "main.h"
#include <stdio.h>
#include <stdlib.h>
 
char *create_buffer(char *file);
void close_file(int fd);
 
/**
* create_buffer – it will assign 1,024 bytes to the buffer
* @file: this is the name of the file
*
* Return: a variable for the new buffer
*/
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}
 
/**
* close_file - this closes the files description
* @fd: this will be the description needed to be closed
*/
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

 
/**
* main – it  will duplicate the contents of the file to an alternative file
* @argc: this will be the number of arguments provided for the program
* @argv: it is an array of pointers for arguments
*
* Return: 0 if success
*
* Description: provided the number of argument not correct one, exit with code 97,
* Incase the file_from does not exist, or if you can’t read it, exit with code 98,
* Incase you cannot create or if write to file_to fails, exit with code 99,
*  case you cannot close a file descriptor, exit with code 100
*/
int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(to, buffer, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
