#include<stdio.h>
#include<stdlib.h>
/**
 * main - function that prints the alphabet
 * Return: 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
