#include <sys/types.h>
#include <elf.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
/**
 * chk_elf - checks elf
 * @e_id: pointer
 * Description: checks elf
 */

void chk_elf(unsigned char *e_id)
{
	int ix;
	for (ix = 0; ix < 4; ix++)
	{
		if (e_id[ix] != 127 &&
			e_id[ix] != 'E' &&
			e_id[ix] != 'L' &&
			e_id[ix] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * prn_mgc - prints
 * @e_id: pointer
 * Description: prints
 */

void prn_mgc(unsigned char *e_id)
{
	int ix;
	printf("  Magic:   ");
	for (ix = 0; ix < EI_NIDENT; ix++)
	{
		printf("%02x", e_id[ix]);
		if (ix == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * prn_cls - prints class
 * @e_id: pointer
 */

void prn_cls(unsigned char *e_id)
{
	printf("  Class:                             ");
	switch (e_id[EI_CLASS])
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
		printf("<unknown: %x>\n", e_id[EI_CLASS]);
	}
}

/**
 * prn_dt - prints data
 * @e_ident: pointer
 */

void prn_dt(unsigned char *e_id)
{
	printf("  Data:                              ");
	switch (e_id[EI_DATA])
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
		printf("<unknown: %x>\n", e_id[EI_CLASS]);
	}
}

/**
 * prn_vrsn - prints version
 * @e_id: pointer
 */

void prn_vrsn(unsigned char *e_id)
{
	printf("  Version:                           %d",
		   e_id[EI_VERSION]);
	switch (e_id[EI_VERSION])
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
 * prn_sb - prints OS/ABI
 * @e_id: pointer
 */

void prn_sb(unsigned char *e_id)
{
	printf("  OS/ABI:                            ");
	switch (e_id[EI_OSABI])
	{
	case ELFOSABI_NONE:
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
		printf("<unknown: %x>\n", e_id[EI_OSABI]);
	}
}

/**
 * prn_bi - حrints abi
 * @e_id: pointer
 */

void prn_bi(unsigned char *e_id)
{
	printf("  ABI Version:                       %d\n",
		   e_id[EI_ABIVERSION]);
}

/**
 * prn_tp - prints type
 * @e_tp: type
 * @e_id: pointer
 */

void prn_tp(unsigned int e_tp, unsigned char *e_id)
{
	if (e_id[EI_DATA] == ELFDATA2MSB)
		e_tp >>= 8;

	printf("  Type:                              ");

	switch (e_tp)
	{
	case ET_NONE:
		printf("NONE (None)\n");
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
		printf("<unknown: %x>\n", e_tp);
	}
}

/**
 * prn_ent - prints entry
 * @e_ent: ad. of entry
 * @e_id: pointer
 */

void prn_ent(unsigned long int e_ent, unsigned char *e_id)
{
	printf("  Entry point address:               ");
	if (e_id[EI_DATA] == ELFDATA2MSB)
	{
		e_ent = ((e_ent << 8) & 0xFF00FF00) |
				  ((e_ent >> 8) & 0xFF00FF);
		e_ent = (e_ent << 16) | (e_ent >> 16);
	}
	if (e_id[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_ent);
	else
		printf("%#lx\n", e_ent);
}

/**
 * cls_elf - closes elf
 * @e: elf
 * Description: closes elf
 */
void cls_elf(int e)
{
	if (close(e) == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't close fd %d\n", e);
		exit(98);
	}
}

/**
 * main - shows everything
 * @arc: arguments
 * @arv: array
 * Return: success -> 0
 * Description: shows everything
 */
int main(int __attribute__((__unused__)) arc, char *arv[])
{
	Elf64_Ehdr *hd;
	int a, s;
	a = open(arv[1], O_RDONLY);
	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", arv[1]);
		exit(98);
	}
	hd = malloc(sizeof(Elf64_Ehdr));
	if (hd == NULL)
	{
		cls_elf(a);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", arv[1]);
		exit(98);
	}
	s = read(a, hd, sizeof(Elf64_Ehdr));
	if (s == -1)
	{
		free(hd);
		cls_elf(a);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", arv[1]);
		exit(98);
	}
	chk_elf(hd->e_ident);
	printf("ELF Header:\n");
	prn_mgc(hd->e_ident);
	prn_cls(hd->e_ident);
	prn_dt(hd->e_ident);
	prn_vrsn(hd->e_ident);
	prn_sb(hd->e_ident);
	prn_bi(hd->e_ident);
	prn_tp(hd->e_type, hd->e_ident);
	prn_ent(hd->e_entry, hd->e_ident);
	free(hd);
	cls_elf(a);
	return (0);
}
