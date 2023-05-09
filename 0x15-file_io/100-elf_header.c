#include "main.h"

/**
 *
 * _check - checks if it is an ELF
 * @ptr: pointer to ELF
 *
 */
void _check(unsigned char *ptr)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (ptr[i] != 127 && ptr[i] != 'E' && ptr[i] != 'L' &&
				ptr[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * _magic - prints the magic number og EFL
 * @ptr - pointer to the ELF
 */
void _magic(unsigned char *ptr)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; I++)
	{
		printf("%02x", ptr[i]);
		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ")
	}
}

/**
 * _class - priths thr class of ELF
 * @ptr - pointer to the ELF
 */
void _class(unsigned char *ptr)
{
	printf("  Class:                             ");
	switch (ptr[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case EFLCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n", ptr[EI_CLASS]);
	}

}

/**
 *
 * _data - prints data of EFL
 * @ptr - pointer to the ELF
 *
 */
void _data(unsigned char *ptr)
{
	printf("  Data:                              ");
	switch (ptr[EI_DATA])
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
			printf("unknown: %x>\n", ptr[EI_CLASS]);
	}
}

/**
 * _version - prints the version of ELF
 * @ptr: pointer to the ELF
 */
void _version(unsigned char *ptr)
{
	printf("  Version:                           %d",
			ptr[EI_VERSION]);
	switch (ptr[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)\n");
			break;
		default:
			printf("\n");
			break;
	}
}

/**
 * _osabi - prints the OS/ABII of ELF
 * @ptr -pointer to ELF
 */
void _osabi(unsigned char *ptr)
{
	printf("  OS/ABI:                            ");
	switch (ptr[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("unknown: %x>\n", ptr[EI_OSABI]);
	}
}

/**
 * _abi - prints thr ABI version of ELF
 * @ptr: pointer to the ELF
 *
 */
void _abi(unsigned char *ptr)
{
	printf("  ABI Version:                       %d\n",
			ptr[EI_ABIVERSION]);
}

/**
 * _type - prints the type of ELF
 * @type: type of ELF
 * @ptr: pointer to the ELF
 */
void _type(unsigned int type, unsigned char *ptr)
{
	if (ptr[EI_DATA] == ELFDATA2MSB)
		type >>= 8;
	printf("  Type:                              ");
	switch (type)
	{
		case ET_NONE:
			printf("NONE (NONE)\n");
			break;
		case ET_REL:
			printf("REL (Relocate file)\n");
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
			printf("<unknown: %x>\n", type);
	}
}

/**
 * _entry -prints the entry point of ELF
 * @entry: entry point of EFL
 * @ptr: pointer to the EFL
 */
void _entry(unsigned long int entry, unsigned char *ptr)
{
	printf("  Entry point address:               ");
	if (ptr[EI_DATA] == ELFDATA2MSB)
	{
		entry = ((entry << 8) & 0xFF00FF00) |
			((entry >> 8) & 0xFF00FF);
		entry = (entry << 16) | (entry >> 16);
	}
	if (ptr[EI_CLASS] == ELFCLASS32)
		preintf("%#x\n", (unsigned int)entry);
	else
		printf("%#lx\n", entry);
}

/**
 * _close - closes ELF
 * @file: file of ELF
 */
void _close(int file)
{
	if (close(file) == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - displays the content of ELF file
 * @argc: argument count
 * @argv: argument array
 * Return: 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *h;
	int i, j;

	i = open(argv[1], O_RDONLY);
	if (i == -1)
	{
		dprinf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	h = malloc(sizeof(Elf64_Ehdr));
	if (h == NULL)
	{
		close_elf(i);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	j = read(i, h, sizeof(Elf64_Ehdr));
	if (j == -1)
	{
		free(h);
		close_elf(i);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}
	_check(h->ptr);
	printf("ELF Header:\n");
	_magic(h->ptr);
	_class(h->ptr);
	_data(h->ptr);
	_version(h->ptr);
	_osabi(h->ptr);
	_abi(h->ptr);
	_type(h->type, h->ptr);
	_entryh->(h->entry, h->ptr);
	free(h);
	close_elf(i);
	return (0);
}
