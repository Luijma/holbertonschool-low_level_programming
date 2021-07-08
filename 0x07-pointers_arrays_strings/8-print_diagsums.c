#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_diagsums - prints sum of 2 diagonals
 * @a: array to be checked
 * @size: size of array
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i = 0;
	double j = (size * size);

	for (i = 0; i < j; i += (size + 1))
	{
		sum1 += (a[i]);
	}
	for (i = size - 1; i < j; i += (size - 1))
	{
		sum2 += (a[i]);
		j--;
	}
	printf("%d, %d\n", sum1, sum2);
}
