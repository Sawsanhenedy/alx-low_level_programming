#include"main.h"
#include<stdio.h>
/**
 * _atoi - converts a string to int
 * @s: string that will be converted
 * Return: the converted integer
 */
int _atoi(char *s)
{
int a, b, c, length, e, digit;
a = 0;
b = 0;
c = 0;
length = 0;
e = 0;
digit = 0;
while (s[length] != '\0')
length++;
while (a < length && e == 0)
{
if (s[a] == '-')
++b;
if (s[a] >= '0' && s[a] <= '9')
{
digit = s[a] - 0;
if (b % 2)
digit = -digit;
c = c * 10 + digit;
e = 1;
if (s[a + 1] < '0' || s[a + 1] > '9')
break;
e = 0;
}
a++;
}
if (e == 0)
return (0);
return (c);
}
/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: success 0, error 1
 */
int main(int argc, char *argv[])
{
int res, n1, n2;
if (argc < 3 || argc > 3)
{
printf("Error\n");
return (1);
}
n1 = _atoi(argv[1]);
n2 = _atoi(argv[2]);
res = n1 + n2;
printf("%d\n", res);
return (0);
}
