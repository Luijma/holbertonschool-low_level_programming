#include "holberton.h"
/**
 * print_array - function that prints n elements
 * of an array followed by new line
 * @a: array to be printed
 * @n: nuber of elements to print
 */
void print_array(int *a, int n)
{
	int i;

	n--;
	for (i = 0; i <= n; i++)
	{
		printf("%d", a[i]);
		if (i != n)
		{
			printf(", ");
		}
	}
	printf("\n");
}
