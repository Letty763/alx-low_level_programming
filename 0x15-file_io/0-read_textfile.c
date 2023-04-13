#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters) {
    FILE *file;
    char *buffer;
    ssize_t bytesRead, bytesWritten;

    if (filename == NULL) {
        return 0;
    }

    file = fopen(filename, "r");
    if (file == NULL) {
        return 0;
    }

    buffer = (char *)malloc(letters * sizeof(char));
    if (buffer == NULL) {
        fclose(file);
        return 0;
    }

    bytesRead = fread(buffer, sizeof(char), letters, file);
    if (bytesRead < 0) {
        free(buffer);
        fclose(file);
        return 0;
    }

    bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
    if (bytesWritten < 0 || bytesWritten != bytesRead) {
        free(buffer);
        fclose(file);
        return 0;
    }

    free(buffer);
    fclose(file);
    return bytesWritten;
}

