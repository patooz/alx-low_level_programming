#include "main.h"

/**
 * _check - checks if it is an ELF
 * @e_ident: pointer to the ELF
 */
void _check(unsigned char *e_ident)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (e_ident[i] != 127 && e_ident[i] != 'E' && e_ident[i] != 'L' &&
				e_ident[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * _magic - prints the magic number of ELF
 * @e_ident - pointer to the ELF
 */
void _magic(unsigned char *e_ident)
{
	int i;

	printf(" Magic: ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", e_ident[i]);
		if (i == EI_NIDENT - 1)
			printf("/n");
		else
			printf(" ");
	}

}

/**
 * _class - prints the class of ELF
 * @e_ident - pointer to the ELF
 */
void _class(unsigned char *e_ident)
{
	printf("	Class:		");
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
 * _data - prints data of ELF
 *@e_ident - pointer to the ELF
 */
void _data(unsigned char *e_ident)
{
	printf("	Data:		");
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
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * _version - prints th version of ELF
 *  @e_ident: pointer to the ELF
 */
void _version(unsigned char *e_ident)
{
	printf("	Version:		%d",
			e_ident[EI_VERSION]);
	switch (e_ident[EI_VERSION])
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
 * _osabi - prints the OS/ABI of the ELF
 * @e_ident: pointer to the ELF
 */
void _osabi(unsigned char *e_ident)
{
	printf("	OS/ABI:		");
	switch (e_ident[EI_OSABI])
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
			printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
 * _abi - prints the ABI version of ELF
 * @e_ident: pointer to the ELF
 */
void _abi(unsigned char *e_ident)
{
	printf("	ABI Version:		%d\n",
			e_ident[EI_ABIVERSION]);
}

/**
 * _type - prints the type of ELF
 * @type: type of ELF
 * @e_ident: pointer to the ELF
 */
void _type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;
	printf("	Type:		");
	switch (e_type)
	{
		case ET_NONE:
			printf("NONE (NONE)\n");
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
			printf("<unknown: %x>\n", e_type);
	}
}

/**
 * _entry - prints the entry point of ELF
 * @e_entry: entry point of EFL
 * @e_ident: pointer to the EFL
 */
void _entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("Entry point address:		");
	if (e_ident[EI_DATA == ELFDATA2MSB])
	{
		 e_entry = ((e_entry << 8) & 0xFF00FF00) |
			 ((e_entry >> 8) & 0XFF00FF);
		 e_entry = (e_entry << 16) | (e_entry >> 16);
	}
	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);
	else
		printf("%#lx\n", e_entry);
}

/**
 * _close - closes ELF
 * @file: file of ELF
 */
void _close(int file)
{
	if (close(file) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
		exit(98);
	}
}

/**
 * main - displays the content of EFL file
 * @argc: argument count
 * @argv: argument array
 * Return: 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int i, j;

	i = open(argv[1], O_RDONLY);
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		_close(i);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	j = read(i, header, sizeof(Elf64_Ehdr));
	if (j == -1)
	{
		free(header);
		_close(i);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}
	_check(header->e_ident);
	printf("ELF Header:\n");
	_magic(header->e_ident);
	_class(header->e_ident);
	_data(header->e_ident);
	_version(header->e_ident);
	_osabi(header->e_ident);
	_abi(header->e_ident);
	_type(header->e_type, header->e_ident);
	_entry(header->e_entry, header->e_ident);
	free(header);
	_close(i);
	return (0);
}
