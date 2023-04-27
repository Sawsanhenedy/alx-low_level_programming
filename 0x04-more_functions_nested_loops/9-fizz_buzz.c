#include "main.h"
#include <stdio.h>
/*
 * main - prints the numbers from 0 to 100 followed by a new line
 * Description: but for multiplies of three prints Fizz instead of the number
 * and for multiplies of five prints Buzz
 * Return: Always 0
 */
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if ((i % 3 == 0) && (i % 5 == 0))
{
printf("FizzBuzz\n");
}
else if (i % 3 == 0)
{
printf("Fizz\n");
}
else if (i % 5 == 0)
{
printf("Buzz\n");
}
else
{
printf("%d\n", i);
}
}
return (0);
}
