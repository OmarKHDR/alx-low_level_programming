#include "./main.h"

int main()
{
	for(int i = 'a';i<= 'z';i++)
		printf("%d ",_islower(i));
	putchar('\n');
	for(int i = 'A';i<= 'Z';i++)
		printf("%d ",_islower(i));
	return 0;
}