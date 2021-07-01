#include "holberton.h"
/**
 * reverse_array - reverses an array
 * @a: array to be reversed
 * @n: the nmber of elements to swap
 */
void reverse_array(int *a, int n)
{
	int current = *a;
	int *backcount = a;
	int *forwardcount = a;
	int i;

	backcount += (n - 1);

	for (i = 0; i < (n / 2); i++)
	{
		current = *backcount;
		*backcount = *forwardcount;
		*forwardcount = current;
		backcount--;
		forwardcount++;
	}
}
