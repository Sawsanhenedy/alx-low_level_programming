#include"main.h"
/**
 * _strlen - returns the string's length
 * @s: string parameter input
 * Return: String's lenght
 */
int _strlen(char *s)
{
int counter;
for (counter = 0; *s != '\0'; s++)
++counter;
return (counter);
}
