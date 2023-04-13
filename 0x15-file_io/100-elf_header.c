#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

void print_elf_header_info(const Elf64_Ehdr *header) {
    int i;
    printf("Magic: ");
    for (i = 0; i < EI_NIDENT; i++) {
        printf("%02x ", header->e_ident[i]);
    }
    printf("\n");
    printf("Class: %d\n", header->e_ident[EI_CLASS]);
    printf("Data: %d\n", header->e_ident[EI_DATA]);
    printf("Version: %d\n", header->e_ident[EI_VERSION]);
    printf("OS/ABI: %d\n", header->e_ident[EI_OSABI]);
    printf("ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);
    printf("Type: %d\n", header->e_type);
    printf("Entry point address: 0x%lx\n", header->e_entry);
}

int main(int argc, char *argv[]) {
    const char *file_name;
    Elf64_Ehdr header;
    int fd;
    
    if (argc != 2) {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        exit(98);
    }

    file_name = argv[1];
    fd = open(file_name, O_RDONLY);
    if (fd == -1) {
        fprintf(stderr, "Error: Unable to open file %s\n", file_name);
        exit(98);
    }

    if (read(fd, &header, sizeof(header)) != sizeof(header)) {
        fprintf(stderr, "Error: Failed to read ELF header from file %s\n", file_name);
        close(fd);
        exit(98);
    }

    print_elf_header_info(&header);

    close(fd);
    return 0;
}

