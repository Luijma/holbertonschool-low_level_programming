#include "holberton.h"
/**
 * _puts_recursion - uses recursion to print string
 * @s: string to print
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	s++;
	if (*s)
		_puts_recursion(s);
	if (!*s)
		_putchar('\n');
}
