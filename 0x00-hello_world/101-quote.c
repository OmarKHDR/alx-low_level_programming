#include<stdio.h>
/**
 * main - entry point
 * Description: print some words
 * Return: (0) - success
*/
int main(void)
{
	char * s = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int i = 0;
	while (s[i])
		putc(s[i++],stdout);
	return (0);
}
