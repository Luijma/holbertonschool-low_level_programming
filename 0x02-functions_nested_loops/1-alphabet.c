#include<stdio.h>
void print_alphabet(void);
/**
 * main - entry point of app
 * Return: 0
 */
int main(void)
{
	print_alphabet();
	return (0);
}
/**
 * print_alphabet - prints alphabet in lowercase
 */
void print_alphabet(void)
{
	char abc;

	for (abc = 'a'; abc <= 'z'; abc++)
		putchar(abc);
	putchar('\n');
}
