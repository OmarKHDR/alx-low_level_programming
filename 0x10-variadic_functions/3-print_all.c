#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>
#include "variadic_functions.h"

/**
* print_all - variadic func printing
* @format: string
* Description: just print
* Return: void things
*/

void print_all(const char * const format, ...)
{
	va_list ptr;
	char type;
	char *str;
	int i = 0;

	va_start(ptr, format);
	while (format[i])
	{
		type = format[i];
		switch (type)
		{
			case 'c':
				printf("%c", va_arg(ptr, int));
				break;
			case 'i':
				printf("%d", va_arg(ptr, int));
				break;
			case 'f':
				printf("%f", va_arg(ptr, double));
				break;
			case 's':
				str = va_arg(ptr, char *);
				if (str == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
			default:
				i++;
				continue;
				break;
		}
		i++;
		if (format[i])
			printf(", ");
	}
	printf("\n");
	va_end(ptr);
}
