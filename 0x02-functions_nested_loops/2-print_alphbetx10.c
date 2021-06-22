#include<stdio.h>
void print_alphabet10(void);
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	print_alphabet10();
	return (0);
}
/**
 * print_alphabet10 - prints alphabet in lowercase 10 times
 */
void print_alphabet10(void)
{
	char abc;
	int count = 0;

	while (count < 11)
	{
		for (abc = 'a'; abc <= 'z'; abc++)
			putchar(abc);
		putchar('\n');
	}
}
