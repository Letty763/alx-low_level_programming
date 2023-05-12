#ifndef MAIN_H
#define MAIN_H
 
// The header guards "#ifndef MAIN_H" and "#define MAIN_H" are used to ensure that the code in this header file is only included once in any given source file.
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
 
// The "#include" statements bring in various standard libraries that are needed for the functions defined in this header file to work.
 
// The "read_textfile" function takes a filename and the number of letters to read as input, and returns the number of letters actually read from the file.
ssize_t read_textfile(const char *filename, size_t letters);
 
// The "create_file" function takes a filename and a string of text as input, and creates a new file with that filename and the specified text.
int create_file(const char *filename, char *text_content);
 
// The "append_text_to_file" function takes a filename and a string of text as input, and appends the specified text to the end of the file with that filename.
int append_text_to_file(const char *filename, char *text_content);
 
#endif
