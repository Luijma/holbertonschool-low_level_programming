#include<stdio.h>
#include<stdlib.h>
/**
 * main - function that prints 1-9
 * Return: 0
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
		printf("%d", number);
	printf("\n");
	return (0);
}
