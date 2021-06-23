#include"holberton.h"
#include"printminutes.c"
/**
 * jack_bauer - prints every minute
 */
void jack_bauer(void)
{
	int x1 = 0;
	int x2 = 0;
	int y1 = 0;
	int y2 = 0;
	int max_of_x2 = 10;

	while (x1 < 3)
	{
		while (x2 < max_of_x2)
		{
			while (y1 < 6)
			{
				while (y2 < 10)
				{
					printminutes(x1, x2, y1, y2);
					y2++;
				}
				y2 = 0;
				y1++;
			}
			y1 = 0;
			x2++;
		}
	x2 = 0;
	x1++;
	if (x1 == 2)
		max_of_x2 = 4;
	}
}
