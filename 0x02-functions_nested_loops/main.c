#include "./main.h"

int main()
{
	for(int i = 'a';i<= 200;i++)
		printf("%c %d \n",i,_isalpha(i));
	putchar('\n');
	
	return 0;
}