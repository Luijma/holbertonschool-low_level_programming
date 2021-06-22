#include "holberton.h"
/**
 * main - function that prints Holberton
 * Return: 0
 */
int main(void)
{
	char holberton[10] = "Holberton";
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(holberton[i]);
	}
	_putchar('\n');
	return (0);
}
