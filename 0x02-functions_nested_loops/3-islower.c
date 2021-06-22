#include<stdio.h>
/**
 * _islower - function that checks for letter case
 */
int _islower(int c);
/**
 * main - entry point for program
 */
int main(void)
{
	int r;
	r = _islower('H');
	putchar(r);
	return (0);
}
int _islower(int c)
{
	if(c < 123 && c > 96 )
		return (1);
	if(c < 91 && c > 64)
		return (0);
}
