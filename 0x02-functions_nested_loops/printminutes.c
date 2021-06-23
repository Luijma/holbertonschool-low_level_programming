#include "holberton.h"
/**
 * printminutes - prints minutes for T8
 * @x1: first number
 * @x2: second number
 * @y1: third number
 * @y2: fourth number
 */
void printminutes(int x1, int x2, int y1, int y2)
{
	_putchar(x1 + '0');
	_putchar(x2 + '0');
	_putchar(':');
	_putchar(y1 + '0');
	_putchar(y2 + '0');
	_putchar('\n');
}

