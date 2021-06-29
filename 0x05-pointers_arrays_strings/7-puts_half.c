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

	halfToPrint = length / 2;

	if(length % 2)
		halfToPrint++;

	for (i = halfToPrint; i != length; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
