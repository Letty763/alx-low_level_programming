#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int append_text_to_file(const char *filename, char *text_content) {
    FILE *file;
    size_t text_len;
    size_t bytes_written;

    if (filename == NULL) {
        return -1;
    }
    
    file = fopen(filename, "a");
    if (file == NULL) {
        if (errno == ENOENT || errno == EACCES) {
            return -1;
        }
        return -1;
    }

    if (text_content != NULL) {
        text_len = strlen(text_content);
        bytes_written = fwrite(text_content, sizeof(char), text_len, file);
        if (bytes_written != text_len) {
            fclose(file);
            return -1;
        }
    }

    fclose(file);
    return 1;
}

