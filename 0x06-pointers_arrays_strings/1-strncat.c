#include"main.h"
/**
 * _strncat - a function that concatenates two strings.
 * @dest: pointer to destnation input
 * @src: pointer to source input
 * @n: most number of bytes from %src
 * Return: %dest
 */
char *_strncat(char *dest, char *src, int n)
{
int a, s;
a = 0;
while (dest[a])
a++;
for (s = 0; s < n && src[s] != '\0'; s++)
dest[a + s] = src[s];
dest[a + s] = '\0';
return (dest);
}
