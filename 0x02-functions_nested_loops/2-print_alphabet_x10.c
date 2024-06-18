#include "main.h"
/**
 * print_alphabet_x10 - my func
 * Description: This function uses _putchar to print to the
 * standard output
 * Returna: void
*/
void print_alphabet_x10(void)
{
	char c, i;

	for (i = 0; i < 10; i++)
	{
		c = 'a';
		while (c <= 'z')
			_putchar(c++);
		_putchar('\n');
	}
}
