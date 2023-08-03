#include <unistd.h>
/**
 * _putchar - writes the character c to the stdout
 * @c: the character to print
 * Return: on Success 1, on error -1 will be returned
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
