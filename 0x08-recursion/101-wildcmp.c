#include"main.h"
/**
 * itr_last_astr - itterats last asterisk
 * @s2: second string
 * Return: pointer last astr
 */
char *itr_last_astr(char *s2)
{
if (*s2 == '*')
return (itr_last_astr(s2 + 1));
else
return (s2);
}
/**
 * ma_re - makes reality from magic
 * @s1: first string
 * @s2: second string
 * Return: 1 or 0
 */
int ma_re(char *s1, char *s2)
{
int a = 0;
if (*s1 == 0)
return (0);
if (*s1 == *s2)
a += wildcamp(s1 + 1, s2 + 1);
a += ma_re(s1 + 1, s2);
return (a);
}
/**
 * wildcmp - compares two strings and returns 1 if the strings can be
 * considered identical, otherwise return 0
 * @s1: first string
 * @s2: second string
 * Return: 1 or 0
 */
int wildcmp(char *s1, char *s2)
{
int a = 0;
if (!*s1 && *s2 == '*' && !*itr_last_astr(s2))
return (1);
if (*s1 == *s2)
{
if (!*s1)
return (1);
return (wildcmp(s1 + 1, *s2 == '*' ? s2 : s2 + 1));
}
if (!*s1 || !s2)
return (0);
if (*s2 == '*')
{
s2 = itr_last_astr(s2);
if (!*s2)
return (1);
if (*s1 == *s2)
a += wildcmp(s1 + 1, s2 + 1);
a += ma_re(s1, s2);
return (!!a);
}
return (0);
}
