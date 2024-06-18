#include "main.h"
/**
 * jack_bauer - my func
 * Description: This function uses _putchar to print to the
 * standard output
 * Returna: void
*/
void main(void)
{
	int i = 0, j;
	
	for (; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
			printf("%02d:%02d\n", i, j);
	}
}
