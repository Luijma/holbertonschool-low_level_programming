#include "variadic_functions.h"
/**
 * print_numbers - prints all numbers passed
 * @separator: string to separate each value
 * @n: amount of numbers to print
 * Return: return 0 if n == 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	int i;

	va_start(nums, n);
	for (i = n; i > 0; i--)
	{
		printf("%d", va_arg(nums, unsigned int));
		if (separator != NULL && i != 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(nums);
}
