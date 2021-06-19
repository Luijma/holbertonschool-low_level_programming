#include<stdlib.h>
#include<stdio.h>
/**
 * main - function prints all possible digit combs
 * Return: 0
 */
int main(void)
{
	int x = 48;
	int y = 49;
	int comma = 44;
	int space = 32;
	int yLowerLimit = 49;
	int yUpperLimit = 58;

	while (x < 58)
	{
		putchar(x);
		putchar(y);
		putchar(comma);
		putchar(space);
		y++;
		if (y == yUpperLimit)
		{
			x++;
			yLowerLimit++;
			y = yLowerLimit;
		}
	}
	putchar('\n');
	return (0);
}
