#include "main.h"
/**
 * print_sign - my func
 * @n: the arg
 * Description: This function uses _putchar to print to the
 * standard output
 * Return: int
*/
int print_sign(int n)
{
	if (n > 0)
	{
		printf("+");
		return (1);
	}
	else if (n == 0)
	{
		printf("0");
		return (0);
	}
	else
	{
		printf("-");
		return (-1);
	}

	return (0);
}
