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

	while (x < 58 && yLowerLimit < yUpperLimit)
	{
		putchar(x);
		putchar(y);
		y++;
		if (y == yUpperLimit)
		{
			x++;
			yLowerLimit++;
			y = yLowerLimit;
		}
		if (yLowerLimit != yUpperLimit)
		{
			putchar(comma);
			putchar(space);
		}
	}
	putchar('\n');
	return (0);
}
