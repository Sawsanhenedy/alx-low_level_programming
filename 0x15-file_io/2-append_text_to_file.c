#include "main.h"
/**
 * _strlen - shows the string's length
 * @str: string
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
 * append_text_to_file - appends text at the end of a file
 * @filename: name
 * @text_content: written text
 * Return: -1 (Error), 1 (Success)
 */
int append_text_to_file(const char *filename, char *text_content)
{
int f;
ssize_t b = 0, l = _strlen(text_content);
if (!filename)
return (-1);
f = open(filename, O_WRONLY | O_APPEND);
if (f == -1)
return (-1);
if (l)
b = write(f, text_content, l);
close(f);
return (b == l ? 1 : -1);
}
