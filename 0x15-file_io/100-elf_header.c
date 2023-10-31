#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

#define BUFF_SIZE 64
int memcmp(const void *s1, const void *s2, size_t n);

/**
 * display_error - display error message
 * @message: message to display
 */

void display_error(const char *message)
{
	fprintf(stderr, "%s\n", message);
	exit(98);
}
/**
 * display_elf_header - display information in elf header
 * @elf_header: --
 */
void display_elf_header(const Elf64_Ehdr *elf_header)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", elf_header->e_ident[i]);
		if (i < EI_NIDENT - 1)
			printf(" ");
	}
	printf("\n");
	printf("  Class:                             %s\n",
			elf_header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
	printf("  Data:                              %s\n",
			elf_header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
	printf("  Version:                           %d (current)\n",
			elf_header->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %d\n",
			elf_header->e_ident[EI_OSABI]);
	printf("  ABI Version:                       %d\n",
			elf_header->e_ident[EI_ABIVERSION]);
	printf("  Type:                              %s\n",
			elf_header->e_type == ET_EXEC ? "EXEC (Executable file)" :
			(elf_header->e_type == ET_DYN ? "DYN (Shared object file)" : "REL (Relocatable file)"));
	printf("  Entry point address:               0x%lx\n",
			(unsigned long)elf_header->e_entry);
}
/**
 * main - entry point
 * @argc: --
 * @argv: --
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int fd;
	const char *filename = argv[1];
	Elf64_Ehdr elf_header;

	if (argc != 2)
		display_error("Usage: elf_header elf_filename");

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		display_error("Error: Unable to open the file");
	if (read(fd, &elf_header, sizeof(elf_header)) != sizeof(elf_header))
	{
		close(fd);
		display_error("Error: Unable to read ELF header");
	}
	if (memcmp(elf_header.e_ident, ELFMAG, SELFMAG) != 0)
	{
		close(fd);
		display_error("Error: Not a valid ELF file");
	}
	display_elf_header(&elf_header);
	close(fd);
	return (0);
}

