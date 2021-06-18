#include<stdlib.h>
#include<stdio.h>
/**
 * main - function that prints reversed alphabet
 * Return: 0
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
