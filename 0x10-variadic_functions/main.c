#include "variadic_functions.h"
#include <stddef.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_numbers(NULL, 4, 0, 98, -1024, 402);
    print_strings(", ", 2, "Jay", "Django");
    return (0);
}