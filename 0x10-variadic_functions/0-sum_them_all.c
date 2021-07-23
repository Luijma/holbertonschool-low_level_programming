#include "variadic_functions.h"
/**
 * sum_them_all - adds up all arguments to function and returns result
 * @n: number of arguments passed
 * Return: 0 if n = 0, result of sum otherwise
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arglist;
	unsigned int i;
	int result = 0;

	va_start(arglist, n);
	for (i = n; i > 0; i--)
	{
		result += va_arg(arglist, unsigned int);
	}
	return (result);
}
