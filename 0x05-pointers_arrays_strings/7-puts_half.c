#include "holberton.h"
/**
 * puts_half - prints half of a string
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int length = 0;
	int halfToPrint;
	int i;

	while (*(str + length))
	{
		length++;
	}

	if ((length % 2) == 0)
	{
		halfToPrint = length / 2;
	} else
	{
		halfToPrint = (length - 2) / 2;
	}
	for (i = halfToPrint; i < length; i++)
		_putchar(*(str + i));
	_putchar('\n');
}
