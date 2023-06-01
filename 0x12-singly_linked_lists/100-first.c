#include"lists.h"
#include<stdio.h>
void first(void) __attribute__ ((constructor));
/**
 * first - sentence will be printed before the main
 * function
 */
void first(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
