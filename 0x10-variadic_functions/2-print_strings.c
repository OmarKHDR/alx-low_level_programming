#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
* print_strings - variadic func printing
* @separator: seperator string
* @n: number of arg
* Description: just print
* Return: many things
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	char *cpy;
	int i;

	if (separator == NULL)
		separator = "";
	va_start(ptr, n);
	for (i = 0; (unsigned int)i < n; i++)
	{
		cpy = va_arg(ptr, char *);
		if (cpy == NULL)
		{
			printf("(nil)");
		}
		else
			printf("%s", cpy);

		if ((unsigned int)i == n - 1)
			continue;
		printf("%s", separator);
	}
	putchar('\n');
	va_end(ptr);
}
