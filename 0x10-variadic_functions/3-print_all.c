#include "variadic_functions.h"
/**
 * print_all - prints all variable types
 * @format: type indicators
 */
void print_all(const char * const format, ...)
{
	va_list argl;
	int i = 0;
	char *str;
	int printed = 0;

	va_start(argl, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(argl, int));
				printed = 1;
				break;
			case 'i':
				printf("%d", va_arg(argl, int));
				printed = 1;
				break;
			case 'f':
				printf("%f", va_arg(argl, double));
				printed = 1;
				break;
			case 's':
				str = va_arg(argl, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				printed = 1;
				break;
		}
		if (printed && format[i + 1])
		{
			printf(", ");
		}
		printed = 0;
		i++;
	}
	printf("\n");
}
