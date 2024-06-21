#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
* print_numbers - variadic func printing
* @separator: seperator string
* @n: number of arg
* Description: just print
* Return: many things
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	int i;

	if (separator == NULL)
		return;
	va_start(ptr, n);
	for (i = 0; (unsigned int)i < n; i++)
	{
		printf("%d", va_arg(ptr, int));
		if ((unsigned int)i == n - 1)
			continue;
		printf("%s", separator);
	}
	putchar('\n');
	va_end(ptr);
}
