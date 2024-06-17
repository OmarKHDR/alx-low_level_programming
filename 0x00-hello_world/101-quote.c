#include<stdio.h>
#include<unistd.h>
/**
 * main - entry point
 * Description: print some words
 * Return: (0) - success
*/
int main(void)
{
	char *s = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(s, 1, 59, stderr);
	return (0);
}
