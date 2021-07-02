#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 * @a: an array of integers
 * @n: the number of elements to swap
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i != 0)
		{
			printf(", ");
		}
		printf("%d", a[i]);
		i++;
	}
	printf("\n");
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};

	print_array(a, sizeof(a) / sizeof(int));
	reverse_array(a, sizeof(a) / sizeof(int));
	print_array(a, sizeof(a) / sizeof(int));
	return (0);


	for (i = 0; str[i]; i++)
	{
		for (j = 0; seperator[j]; j++)
		{
			if (str[i] == seperator[j])
			{
				if (str[i + 1] <= 'z' && str[i + 1] >= 'a')
				{
					str[i + 1] -= 32;
				}
			}
		}
	}
	return (str);
}
