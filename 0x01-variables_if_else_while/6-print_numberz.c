#include<stdlib.h>
#include<stdio.h>
/**
 * main - function that prints numbers with putchar
 * Return: 0
 */
int main(void)
{
	int number;

	for (int number = 0; number < 10; number++)
		putchar(number + '0');
	putchar('\n');
	return (0);
}
