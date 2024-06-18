#include "main.h"
/**
 * _abs - my func
 * @n: the arg
 * Description: This function uses _putchar to print to the
 * standard output
 * Return: int
*/
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-1 * n);
	}

	return (0);
}
