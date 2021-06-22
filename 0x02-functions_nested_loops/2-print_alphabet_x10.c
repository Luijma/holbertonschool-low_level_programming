#include "holberton.h"
void print_alphabet10(void);
/**
 * print_alphabet10 - prints alphabet in lowercase 10 times
 */
void print_alphabet_x10(void)
{
	char abc;
	int count = 0;

	while (count < 11)
	{
		for (abc = 'a'; abc <= 'z'; abc++)
			_putchar(abc);
		_putchar('\n');
		count++;
	}
}
