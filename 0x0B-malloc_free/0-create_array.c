#include <stdlib.h>
#include "main.h"

/**
* create_array - c
* Description: create_array
* @size: arr size
* @c: arr filler
* Return: [pointer to arr]
*/
char *create_array(unsigned int size, char c)
{
	int i = 0;
	char *arr = (char *) malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);
	for (; i < size; i++)
		arr[i] = c;
	return (arr);
}
