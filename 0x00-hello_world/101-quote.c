#include<stdio.h>
/**
 * main - function that prints quote to the stderr
 * Return: 1
 */
int main(void)
{
	char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int currentChar;

	for (currentChar = 0; quote[currentChar] != 0; currentChar++)
	{
		putchar(quote[currentChar]);
	}
	putchar('\n');
	return (1);
}
