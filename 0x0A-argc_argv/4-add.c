#include"mqin.h"
#include<stdio.h>
#include<string.h>
#include<ctype.h>
/**
 * check_n - check string
 * @str: array str
 * Return: 0
 */
int check_n(char *str)
{
unsigned int c;
c = 0;
while (c < strlen(str))
{
if (!isdigit(str[c]))
{
return (0);
}
c++;
}
return (1);
}
/**
 * main - Print the result, followed by a new line
 * @argc: count arguments
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
int c;
int s_i;
int sum;
c = 1;
while (c < argc)
{
if (check_n(argv[c]))
{
s_i = atoi(argv[c]);
sum += s_i;
}
else
{
printf("Error\n");
return (1);
}
c++;
}
printf("%d\n", sum);
return (0);
}
