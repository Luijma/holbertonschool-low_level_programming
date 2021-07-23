#include "variadic_functions.h"
/**
 * sum_them_all(const unsigned int n, ...);
 * @n: amount of numbers to print
 * Return: return 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	int i;
	int sum = 0;

	va_start(nums, n);
	for (i = n; i > 0; i--)
	{
		sum += va_arg(nums, int);
	}
	va_end(nums);
	return (sum);
}
