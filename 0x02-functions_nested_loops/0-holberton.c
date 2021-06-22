#include "holberton.h"
/**
 * main - function that prints Holberton
 * Return: 0
 */
int main(void)
{
	char holberton[] = "Holberton";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(holberton[i]);
	}
	_putchar('\n');
	return (0);
}
