#include"main.h"
/**
 * last_index - returns the last index of string
 * @s: string
 * Return: 0 or 1
 */
int is_palindrome(char *s);
int check(char *s, int start, int finish, int mod);
int last_index(char *s)
{
int n = 0;
if (*s > '\0')
n += last_index(s + 1) + 1;
return (n);
}
/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: pointer to string
 * Return: integer
 */
int is_palindrome(char *s)
{
int finish = last_index(s);
return (check(s, 0, finish - 1, finish % 2));
}
/**
 * check - checks palindrome
 * @s: string
 * @start: from right to left (int)
 * @finish: from left to right (int)
 * @mod: int
 * Return: 0 or 1
 */
int check(char *s, int start, int finish, int mod)
{
if ((start == finish && mod != 0) || (start == finish + 1 && mod == 0))
return (1);
else if (s[start] != s[finish])
return (0);
else
return (check(s, start + 1, finish - 1, mod));
}
