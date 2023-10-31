#include "main.h"
#include <elf.h>

void print_osabi_more(Elf64_Ehdr h);

/**
 * print_magic - prints ELF magic bytes
 * @h: ELF header
 */
void print_magic(Elf64_Ehdr h)
{
	int i;

	printf(" MAGIC:  ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%2.2x%s", h.e_ident[i], i == EI_NIDENT - 1 ? "\n" : " ");
}

/**
 * print_class - print ELF class
 * @h: ELF header
 */
void print_class(Elf64_Ehdr h)
{
	printf(" CLASS:                      ");
	switch (h.e_ident[EI_CLASS])
	{
		case ELFCLASS64:
			printf("ELF64");
			break;
		case ELFCLASS32:
			printf("ELF32");
			break;
		case ELFCLASSNONE:
			printf("none");
			break;
	}
	printf("\n");
}

/**
 * print_data - print ELF data
 * @h: ELF header
 */
void print_data(Elf64_Ehdr h)
{
	printf(" DATA:                      ");
	switch (h.e_ident[EI_DATA])
	{
		case ELFDATA2MSB:
			printf("2's complement, big endian");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian");
			break;
		case ELFDATANONE:
			printf("none");
			break;
	}
	printf("\n");
}

/**
 * print_version - print ELF version
 * @h: ELF header
 */
void print_version(Elf64_Ehdr h)
{
	printf(" VERSION:                     %d", h.e_ident[EI_VERSION]);
	switch (h.e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)");
			break;
		case EV_NONE:
			printf("%s", "");
			break;
	}
	printf("\n");
}

/**
 * print_osabi - print ELF OS/ABI
 * @h: ELF header
 */
void print_osabi(Elf64_Ehdr h)
{
	printf(" OS/ABI:                       ");
	switch (h.e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris");
			break;
		case ELFOSABI_AIX:
			printf("UNIX - AIX");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64");
			break;
		default:
			print_osabi_more(h);
			break;
	}
	printf("\n");
}

/**
 * print_osabi_more - print more ELF OS/ABI
 * @h: ELF header
 */
void print_osabi_more(Elf64_Ehdr h)
{
	switch (h.e_ident[EI_OSABI])
	{
		case ELFOSABI_MODESTO:
			printf("Novell - modesto");
			break;
		case ELFOSABI_OPENBSD:
			printf("UNIX - OpenBSD");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App");
			break;
		case ELFOSABI_ARM:
			printf("ARM");
			break;
		default:
			printf("<unknown: %x>", h.e_ident[EI_OSABI]);
			break;
	}
}

/**
 * print_abiversion - print ELF ABI version
 * @h: ELF header
 */
void print_abiversion(Elf64_Ehdr h)
{
	printf(" ABI Version:                 %d\n", h.e_ident[EI_ABIVERSION]);
}

/**
 * print_type - print ELF type
 * @h: ELF header
 */
void print_type(Elf64_Ehdr h)
{
	char *p = (char *)&h.e_type;
	int i = 0;

	printf(" Type:                            ");
	if (h.e_ident[EI_DATA] == ELFDATA2MSB)
		i = 1;

	switch (p[i])
	{
		case ET_NONE:
			printf("None (None)");
			break;
		case ET_REL:
			printf("REL (Relocatable file)");
			break;
		case ET_EXEC:
			printf("EXEC (Excutable file)");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)");
			break;
		case ET_CORE:
			printf("CORE (Core file)");
			break;
		default:
			printf("<unknown>: %x", p[i]);
			break;
	}
	printf("\n");
}

/**
 * print_entry - print ELF entry
 * @h: ELF header
 */
void print_entry(Elf64_Ehdr h)
{
	int i = 0, l = 0;
	unsigned char *p = (unsigned char *)&h.e_entry;

	printf(" Entry point address:              0x");
	if (h.e_ident[EI_DATA] != ELFDATA2MSB)
	{
		i = h.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
		while (!p[i])
			i--;
		printf("%x", p[i--]);
		for (; i >= 0; i--)
			printf("%02x", p[i]);
		printf("\n");
	}
	else
	{
		i = 0;
		l = h.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
		while (!p[i])
			i++;
		printf("%x", p[i++]);
		for (; i <= l; i++)
			printf("%02x", p[i]);
		printf("\n");
	}
}

/**
 * main - Entry point
 * @ac: size of arguments
 * @av: list of arguments
 *
 * Return: 0 on success, Always
 */
int main(int ac, char **av)
{
	int fd;
	Elf64_Ehdr e;
	ssize_t b;

	if (ac != 2)
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n"), exit(98);
	fd = open(av[2], O_RDONLY);
	if (fd == -1)
		dprintf(STDERR_FILENO, "Can't open file: %s\n", av[1]), exit(98);

	b = read(fd, &e, sizeof(e));
	if (b < 1 || b != sizeof(e))
		dprintf(STDERR_FILENO, "Can't read from file: %s\n", av[1]), exit(98);

	if (e.e_ident[0] == 0x7f && e.e_ident[1] == 'E' && e.e_ident[2] == 'L'
&& e.e_ident[3] == 'F')
	{
		printf("ELF header\n");
	} else
		dprintf(STDERR_FILENO, "Not ELF file: %s\n", av[1]), exit(98);

	print_magic(e);
	print_class(e);
	print_data(e);
	print_version(e);
	print_osabi(e);
	print_abiversion(e);
	print_type(e);
	print_entry(e);
	if (close(fd))
		dprintf(STDERR_FILENO, "Error closing file descriptor: %d\n", fd), exit(98);

	return (0);
}
