#include "holberton.h"
/**
 * _puts - prints string followed by new line
 * @str - string to be printed
 */
void _puts(char *str)
{
	while (*str)
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
