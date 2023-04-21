#include<stdio.h>
/**
* main - print 0-9 using puchar while using int variables
* Return: Always 0 (Success)
*/
int main(void)
{
int digit = 0;
while (digit <= 9)
{
putchar(digit + '0');
digit++;
}
putchar('\n');
return (0);
}
