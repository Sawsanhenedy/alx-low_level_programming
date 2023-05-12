#include"main.h"
#include<stdio.h>
/**
 * main - prints the name of the program argc _attribute_((unused))
 * @argc: number of arguments
 * @argv: Array of arguments
 * Return: always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", *argv);
return (0);
}
