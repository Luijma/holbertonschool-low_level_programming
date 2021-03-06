#include "holberton.h"
/**
 * _puts_recursion - uses recursion to print string
 * @s: string to print
 */
void _puts_recursion(char *s)
{
	if (!*s)
	{
		_putchar('\n');
		return;
	}
	if (*s)
	{
		_putchar(*s);
		_puts_recursion((s + 1));
	}
}
