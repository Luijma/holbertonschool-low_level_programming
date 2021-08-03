#include "holberton.h"
/**
 * _putchar - Emtpy Definition
 * @c: character
 * Return: 0;
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
