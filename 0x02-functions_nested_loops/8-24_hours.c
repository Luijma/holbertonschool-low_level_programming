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
			while(y1 != 6)
			{
				while (y2 != 10)
				{
					_putchar(x1 + '0');
					_putchar(x2 + '0');
					_putchar(':');
					_putchar(y1 + '0');
					_putchar(y2 + '0');
					_putchar('\n');
					y2++;
				}
				y1++;
			}
			x2++;
		}
	x1++;
	if(x1 == 2)
		max_of_x2 = 3;
	}
}
