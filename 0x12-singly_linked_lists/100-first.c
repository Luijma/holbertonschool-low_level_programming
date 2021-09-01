#include "lists.h"
#include <stdio.h>
/**
 * first_function - function that runs before main
 */
void first_function(void) __attribute__ ((constructor));
void first_function(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
