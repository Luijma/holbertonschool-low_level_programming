#include<stdlib.h>
#include<stdio.h>
/**
 * main - function that prints all digit comb
 * Return: 0
 */
int main(void)
{
	int digit;
	int comma = 44;
	int space = 32;

	for (digit = 48; digit < 58; digit++)
	{
		putchar(digit);
		if (digit != 57)
		{
			putchar(comma);
			putchar(space);
		}
	}
	putchar('\n');
	return (0);
}
