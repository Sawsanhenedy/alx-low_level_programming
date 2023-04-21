#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
* main - Prints the last digit of a randomly generated number
* and wether it is greater than 5, less than 6, or 0.
* Return: Always 0
*
*/
int main(void)
{
int n, digit;
srand(time(0));
n = rand() - RAND_MAX / 2;
digit = n % 10;
if (digit  > 5)
printf("Last digit of %i is %i and is greater than 5\n", n, digit);
else if (digit == 0)
printf("Last digit of %i is %i and is 0\n", n, digit);
else if (digit < 6 && digit != 0)
printf("Last digit of %i is %i and is less than 0\n", n, digit);
return (0);
}
