#include "holberton.h"
/**
 * swap_int - swaps the values of two integers
 * @a - first ingeger
 * @b - second integer
 */
void swap_int(int *a, int *b);
{
	int c = *a;
	*a = *b;
	*b = c;
}
