#include "main.h"
#include "main.h"

/**
 * wildcmp - A function that returns the number
 * @s1: The number in the base
 * @s2: The power
 *
 * Return: It returns the result of number
*/

int wildcmp(char *s1, char *s2)
{
	if (!(*s1) && !(*s2))
	{
		return (1);
	}

	if (*s2 == '*')
	{
		while (*s2 == '*')
		{
			s2++;
		}

		if (!(*s2))
		{
			return (1);
		}
		while (*s1)
		{
			if (wildcmp(s1, s2))
			{
				return (1);
			}
			s1++;
		}
		return (0);
	}

	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
