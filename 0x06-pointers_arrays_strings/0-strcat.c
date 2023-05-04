#include "main.h"
/**
 * _strcat - unction that concatenates two strings
 * @dest: pointer to destnation input
 * @src: pointer to source input
 * Return: pointer to resulting string @dest
 */
char *_strcat(char *dest, char *src)
{
int length_of_string, s;
length_of_string = 0;
while (dest[length_of_string != '\0'])
{
length_of_string++;
}
for (s = 0; src[s] != '\0'; s++, length_of_string++)
{
dest[length_of_string] = src[s];
}
dest[length_of_string] = '\0';
return (dest);
}
