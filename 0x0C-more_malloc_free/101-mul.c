#include"main.h"
#include<stdlib.h>
#include<stdio.h>
/**
 * is_digit - checks if string contains non digit character
 * @s: dtring
 * Return: 0 Success, 1 Error
 */
int is_digit(char *s)
{
int f = 0;
while (s[f])
{
if (s[f] < '\0' || s[f] > '9')
return (0);
f++;
}
return (1);
}
/**
 * _strlen - shows the length of string
 * @s: string
 * Return: the length
 */
int _strlen(char *s)
{
int f = 0;
while (s[f] != '\0')
{
f++;
}
return (f);
}
/**
 * error - work the errors of main
 * Description: work the errors of main
 * Return: ...
 */
void error(void)
{
printf("Error\n");
exit(98);
}
/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
char *n1, *n2;
int length, length1, length2, f, c, d1, d2, *res, m = 0;
n1 = argv[1], n2 = argv[2];
if (argc != 3 || !is_digit(n1) || !is_digit(n2))
error();
length1 = _strlen(n1);
length2 = _strlen(n2);
length = length1 + length2 + 1;
res = malloc(sizeof(int) * length);
if (!res)
return (1);
for (f = 0; f <= length1 + length2; f++)
res[f] = 0;
for (length1 = length1 - 1; length1 >= 0; length1--)
{
d1 = n1[length1] - '0';
c = 0;
for (length2 = _strlen(n2) - 1; length2 >= 0; length2--)
{
d2 = n2[length2] - '0';
c += res[length1 + length2 + 1] + (d1 *d2);
res[length1 + length2 + 1] = c % 10;
c /= 10;
}
if (c > 0)
res[length1 + length2 + 1] += c;
}
for (f = 0; f < length - 1; f++)
{
if (res[f])
m = 1;
if (m)
_putchar(res[f] + '0');
}
if (!m)
_putchar('0');
_putchar('\n');
free(res);
return (0);
}
