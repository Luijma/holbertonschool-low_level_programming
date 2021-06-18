#include<stdlib.h>
#include<stdio.h>
#include<time.h>
/**
 * main - function that prints the last digit of a random number
 * Return: 0
 */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;

	printf("Last digit of %d is %d and ", n, lastDigit);
	if (n > 5)
	{
		printf("is greater than 5");
	} else if (n == 0)
	{
		printf("is 0");
	} else if (n < 6 && n != 0)
	{
		printf("is less than 6 and not 0");
	}
	printf("\n");
	return (0);
}
