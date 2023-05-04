#include"main.h"
#include<stdio.h>
#include<ctype.h>
/**
 * islower - determines whether ascii is a lowercase
 * @c: character
 * Return: 1 if true, 0 if false
 */
int islower(char c)
{
return (c >= 97 && c <= 122);
}
/**
 * isdelimiter - determines whether ascii is a delimiter
 * @c: character
 * Return: 1 if true, 0 if false
 */
int isdelimiter(char c)
{
int i;
char delimiter[] = " \t\n, .!?\"()[]";
for (i = 0; i < 12; i++)
if (c == delimiter[i])
return (1);
return (0);
}
/**
 * *cap_string - capitalizes all words of a string.
 * @s: input string
 * Return: string eith capitalized words
 */
char *cap_string(char *s)
{
char *ptr = s;
int finddelimit = 1;
while (*s)
{
if (isdelimiter(*s))
finddelimit = 1;
else if (islower(*s) && finddelimit)
{
*s -= 32;
finddelimit = 0;
}
else
finddelimit = 0;
s++;
}
return (ptr);
}
