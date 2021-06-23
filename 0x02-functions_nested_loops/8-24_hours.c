#include"holberton.h"
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
		while (x2 != max_of_x2)
		{
			while (y1 != 6)
			{
				while (y2 != 10)
				{
					printminutes(x1, x2, y1, y2);
					y2++;
				}
				y2 = 0;
				y1++;
				printminutes(x1, x2, y1, y2);
			}
			y1 = 0;
			x2++;
			printminutes(x1, x2, y1, y2);
		}
	x1++;
	x2 = 0;
	printminutes(x1, x2, y1, y2);
	if (x1 == 2)
		max_of_x2 = 3;
	}
}
