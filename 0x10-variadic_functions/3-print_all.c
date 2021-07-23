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

	va_start(argl, format);
	while (format[i])
	{
		switch(format[i])
		{
			case 'c':
				printf("%c", va_arg(argl, int);
				break;
			case 'i':
				printf("%d", va_arg(argl, int);
				break;
			case 'f':
				printf("%f", va_arg(argl double);
				break;
			case 's':
				str = va_arg(argl, char *);
				if (str == NULL)
					printf("nil");
				if (str != NULL)
					printf("%s", str);
				break;
		}
		i++;
	}
	printf("\n");
}
