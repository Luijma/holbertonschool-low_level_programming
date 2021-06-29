#include "holberton.h"
/**
 * puts2 - function that prints every other character
 * @str: string to iterate through
 */
void puts2(char *str)
{
	int i;
	int length = 0;

	while (*(str + length))
	{
		length++;
	}
	for (i = 0; i < length; i++)
	{
		if ((i % 2) == 0)
		{
			_putchar(*(str + i));
		}
	}
	putchar('\n');
}
