#include <stdio.h>
#define MAX 100000000

/**
* fibb - fibb just it
* @i: it's a number
* Description: it is what it is
* Return: a number
*/

int fibb(int i)
{
	unsigned long int fib1_low = 1, fib2_low = 2, fib_new_low = 0;
	unsigned long int fib1_high = 0, fib2_high = 0, fib_new_high = 0;
	int j;

	printf("%d, %d", 1, 2);
	for (j = 2; j < i; j++)
	{
		printf("\n%d = ",j);
		fib_new_low = fib1_low + fib2_low;
		fib_new_high = fib1_high + fib2_high + fib_new_low / 1000000000;
		fib_new_low = fib_new_low % 1000000000;
		fib1_low = fib2_low;
		fib1_high = fib2_high;
		fib2_low = fib_new_low;
		fib2_high = fib_new_high;
		if (fib_new_high == 0)
			printf("%lu", fib_new_low);
		else
			printf("%lu%lu", fib_new_high, fib_new_low);
	}
	return (0);
}

/**
* main - main just it
* Description: it is what it is
* Return: a number
*/

int main(void)
{
	fibb(100);
	printf("\n");
	return (0);
}
