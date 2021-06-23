#include"holberton.h"
/**
 * times_table - function that prints the 9 times table
 */
void times_table(void)
{
	int i;
	int multiplier = 0;
	int result;

	while (multiplier < 10)
	{
		for (i = 0; i < 10; i++)
		{
			result = i * multiplier;
			if (i == 0)
			{
				_putchar('0');
				_putchar(',');
			} else if (result > 9 && i < 9)
			{
				_putchar(' ');
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
				_putchar(',');
			} else if (result > 9 && i > 8)
			{
				_putchar(' ');
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			} else if (i > 8)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(result + '0');
			} else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(result + '0');
				_putchar(',');
			}
		}
		_putchar('\n');
		multiplier++;
	}
}
