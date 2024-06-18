#include "main.h"
/**
 * _isalpha - my func
 * @c: the arg
 * Description: This function uses _putchar to print to the
 * standard output
 * Return: int
*/
int _isalpha(int c)
{
	return (islower(tolower(c)) ? 1 : 0);
}
