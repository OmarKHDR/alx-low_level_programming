#include "main.h"
#include "main.h"

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
