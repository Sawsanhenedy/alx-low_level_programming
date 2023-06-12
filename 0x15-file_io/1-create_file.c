#include "main.h"
/**
 * _strlen - shows the string's length
 * @s: string
 * Return: string's length (integer)
 */
int _strlen(char *str)
{
int a = 0;
if (!str)
return (0);
while (*str++)
a++;
return (a);
}
/**
 * create_file - creates a file
 * @filename: name
 * @text_content: text
 * Return: -1 (Error), 1 (Success)
 */
int create_file(const char *filename, char *text_content)
{
int f;
ssize_t b = 0, l = _strlen(text_content);
if (!filename)
return (-1);
f = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
if (f == -1)
return (-1);
if (l)
b = write(f, text_content, l);
close(f);
return (b == l ? 1 : -1);
}
