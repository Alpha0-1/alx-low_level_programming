#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <elf.h>

void print_error(const char *msg)
{
	dprintf(2, "Error: %s\n", msg);
	exit(98);
}

void print_magic(const unsigned char *magic)
{
	printf("  Magic:   ");
	for (int i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", magic[i]);
		if (i != EI_NIDENT - 1)
			printf(" ");
	}
	printf("\n");
}

void print_class(unsigned char class)
{
	printf("  Class:                             ");
	switch (class)
	{
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown>\n");
		break;
	}
}

void print_data(unsigned char data)
{
	printf("  Data:                              ");
	switch (data)
	{
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown>\n");
		break;
	}
}

void print_version(unsigned char version)
{
	printf("  Version:                           %d\n", version);
}

void print_osabi(unsigned char osabi)
{
	printf("  OS/ABI:                            ");
	switch (osabi)
	{
	case ELFOSABI_SYSV:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("Sun Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("SGI Irix\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("Compaq TRU64 UNIX\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone (embedded) application\n");
		break;
	default:
		printf("<unknown>\n");
		break;
	}
}

void print_abiversion(unsigned char abiversion)
{
	printf("  ABI Version:                       %d\n", abiversion);
}

void print_type(Elf64_Half type)
{
	printf("  Type:                              ");
	switch (type)
	{
	case ET_NONE:
		printf("NONE (No file type)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown>\n");
		break;
	}
}

void print_entry(Elf64_Addr entry)
{
	printf("  Entry point address:               %#lx\n", (unsigned long)entry);
}

void print_elf_header(const char *filename)
{
	int fd = open(filename, O_RDONLY);
	if (fd == -1)
		print_error("Cannot open file");

	Elf64_Ehdr header;
	if (read(fd, &header, sizeof(header)) != sizeof(header))
		print_error("Cannot read ELF header");

	if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 ||
	    header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
		print_error("Not an ELF file");

	print_magic(header.e_ident);
	print_class(header.e_ident[EI_CLASS]);
	print_data(header.e_ident[EI_DATA]);
	print_version(header.e_ident[EI_VERSION]);
	print_osabi(header.e_ident[EI_OSABI]);
	print_abiversion(header.e_ident[EI_ABIVERSION]);
	print_type(header.e_type);
	print_entry(header.e_entry);

	close(fd);
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		dprintf(2, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}

	print_elf_header(argv[1]);

	return (0);
}

