#include "main.h"
/**
 * print_sign - my func
 * @n: the arg
 * Description: This function uses _putchar to print to the
 * standard output
 * Return: int
*/
int _abs(int n)
{
	if (n > 0)
	{
		_putchar("+");
		return (1);
	}
	else if (n == 0)
	{
		_putchar("0");
		return (0);
	}
	else
	{
		_putchar("-");
		return (-1);
	}

	return (0);
}
