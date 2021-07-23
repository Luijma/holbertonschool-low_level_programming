#include "variadic_functions.h"
/**
 * print_strings - prints each string with separators
 * @separator: string printed between each argument
 * @n: number of strings passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list argl;
	unsigned int i;
	char *current;

	va_start(argl, n);

	for (i = n; i > 0; i--)
	{
		current = va_arg(argl, char *);

		if (current != NULL)
		{
			printf("%s", current);
		} else
		{
			printf("(nil)");
		}
		if (separator != NULL && i != 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
