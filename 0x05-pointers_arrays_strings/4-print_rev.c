#include "holberton.h"
/**
 * print_rev - prints string reversed
 * @s - string to be printed reversed
 */
void print_rev(char *s)
{
	int length = 0;
	int i;
	char *endOfString = s;
	while (*(str + length))
	{
		length++;
		endOfString++;
	}
	for (i = (length - 1); i >= 0; i--)
	{
		_putchar(*endOfstring);
		endOfstring--;
	}
	_putchar('\n');
}
