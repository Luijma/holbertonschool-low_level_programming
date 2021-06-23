#include "holberton.h"
/**
 * jack_bauer - prints hours of day
 */
void jack_bauer(void)
{
	int x1 = 0;
	int x2 = 0;
	int y1 = 0;
	int y2 = 0;

	while (x1 < 3)
	{
		_putchar(x1 + '0');
		_putchar(x2 + '0');
		_putchar(':');
		_putchar(y1 + '0');
		_putchar(y2 + '0');
		_putchar('\n');
		if (y2 != 10)
		{
			y2++;
		}
		if (y1 != 6 && y2 == 10)
		{
			y1++;
			y2 = 0;
		}
		if (x2 != 4 && y1 == 6)
		{
			x2++;
			y1 = 0;
		}
		if (x2 == 4)
		{
			x1++;
			x2 = 0;
		}
		if (x1 > 2)
			break;
	}
	_putchar('\n');
}
