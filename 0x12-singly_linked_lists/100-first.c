#include <stdio.h>
/**
 * first_function - function that runs before main
 */
void __attribute__ ((constructor)) first_function(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
