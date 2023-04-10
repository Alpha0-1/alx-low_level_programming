#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

/**
 * error_exit - print an error message to stderr and exit with a status code
 * @msg: the error message to print
 * @status: the status code to exit with
 */
void error_exit(char *msg, int status)
{
	dprintf(STDERR_FILENO, "%s\n", msg);
	exit(status);
}
/**

print_magic - print the magic number of the ELF header

@e_ident: the ELF header structure containing the magic number
*/
void print_magic(unsigned char *e_ident)
{
	int i;
	
	printf(" Magic: ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x%c", e_ident[i], i == EI_NIDENT - 1 ? '\n' : ' ');
}

/**

print_class - print the class (32-bit or 64-bit) of the ELF file
@e_ident: the ELF header structure containing the class
*/
void print_class(unsigned char *e_ident)
{
	printf(" Class: ");
	switch (e_ident[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}
/**

print_data - print the endianness of the ELF file
@e_ident: the ELF header structure containing the endianness
*/
void print_data(unsigned char *e_ident)
{
	printf(" Data: ");
	switch (e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_DATA]);
	}
}
/**

print_version - print the version of the ELF file
@e_ident: the ELF header structure containing the version
*/
void print_version(unsigned char *e_ident)
{
	printf(" Version: %d", e_ident[EI_VERSION]);
	switch (e_ident[EI_VERSION])
	{
		case EV_NONE:
			printf(" (invalid)\n");
			break;
		case EV_CURRENT:
			printf("\n");
			break;
		default:
			printf(" (unknown)\n");
	}
}
/**

print_osabi - print the operating system and ABI of the ELF file
@e_ident: the ELF header structure containing the OS and ABI
*/
void print_osabi(unsigned char *e_ident)
{
	printf(" OS/ABI: ");
	switch (e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_AIX:
			printf("UNIX - AIX\n");
			break;
	}
}
