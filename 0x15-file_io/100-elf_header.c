#include "main.h"
#include <elf.h>
void print_osabi_more(Elf64_Ehdr h);
/**
 * print_magic - magic bytes of ELF to be printed
 * @h: header of ELF
 */
void print_magic(Elf64_Ehdr h)
{
int a;
printf(" Magic:  ");
for (a = 0; a < EI_NIDENT; a++)
printf("%2.2x%s", h.e_ident[a], a == EI_NIDENT - 1 ? "\n" : " ");
}
/**
 * print_class - class of ELF to be printed
 * @h: header of ELF
 */
void print_class(Elf64_Ehdr h)
{
printf(" Class: 			");
switch (h.e_ident[EI_CLASS])
{
case ELFCLASS64:
printf("ELF64");
break;
case ELFCLASS32:
printf("ELF32");
break;
case ELFNONE:
printf("NONE");
break;
}
printf("\n");
}
/**
 * print_version - version of ELF to be printed
 * @h: header of ELF
 */
void print_version(Elf64_Ehdr h)
{
printf(" Version: 		%d", h.e_ident[EI_VERSION]);
switch (h.e_ident[EI_VERSION])
{
case EV_CURRENT:
printf(" (current)");
break;
case EV_NONE:
printf("%s", "");
break;
break;
}
printf("\n");
}
/**
 * print_osabi - osabi of ELF to be printed
 * @h: header of ELF
 */
void print_osabi(Elf64_Ehdr h)
{
printf(" OS/ABI: 		");
switch (h.e_ident[EI_OSABI])
{
case ELFOSABI_NONE:
printf("UNIX - System v");
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
 * print_osabi_more - more osabi of ELF to be printed
 * @h: header of ELF
 */
void print_osabi_more(Elf64_Ehdr h)
{
switch (h.e_ident[EI_OSABI])
{
case ELFOSABI_MODESTO:
printf("Novell - Modesto");
break;
case ELFOSABI_OPENBSD:
printf("UNIX - OpenBSD");
break;
case ELFOSABI_STANDALONE:
printf("UNIX - Standalone APP");
break;
case ELFOSABI_ARM:
printf("ARM");
break;
default:
printf("<unknown: %x>", h.e_ident[EI_OSABI]);
break;
}
}
