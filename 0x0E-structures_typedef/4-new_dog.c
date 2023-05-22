#include<stdlib.h>
#include"dog.h"
/**
 * _strlen - shows the length of string
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
int f;
f = 0;
while (s[f] != '\0')
{
f++;
}
return (f);
}
/**
 * *_strcpy - copy the pointed string from src
 * to dest's buffer
 * the null byte is included
 * @dest: buffer pointer where the string will be copied
 * @src: source of copied string
 * Return: dest pointer
 */
char *_strcpy(char *dest, char *src)
{
int length, f;
length = 0;
while (src[length] != '\0')
{
length++;
}
for (f = 0; f < length; f++)
{
dest[f] = src[f];
}
dest[f] = '\0';
return (dest);
}
/**
 * new_dog - creates a new dog.
 * @name: name
 * @age: age
 * @owner: owner
 * Return: new dog (success), null (error)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
int length1, length2;
length1 = _strlen(name);
length2 = _strlen(owner);
dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
dog->name = malloc(sizeof(char) * (length1 + 1));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
dog->owner = malloc(sizeof(char) * (length2 + 1));
if (dog->owner == NULL)
{
free(dog);
free(dog->name);
return (NULL);
}
_strcpy(dog->name, name);
_strcpy(dog->owner, owner);
dog->age = age;
return (dog);
}
