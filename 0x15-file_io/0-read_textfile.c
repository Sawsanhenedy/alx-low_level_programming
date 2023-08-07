#include "main.h"
/**
 * read_textfile - reads and prints the file's text
 * @filename: name
 * @letters: number of red bytes
 * Return: number of red bytes or printed bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int f;
ssize_t b;
char bf[READ_BUF_SIZE * 8];
if (!filename || !letters)
return (0);
f = open(filename, O_RDONLY);
if (f == -1)
return (0);
b = read(f, &bf[0], letters);
b = write(STDOUT_FILENO, &bf[0], b);
close(f);
return (b);
}
