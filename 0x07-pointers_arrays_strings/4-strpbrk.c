#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string of any set
 *@s: source
 *@accept: destination
 *Return: s or accept or null
 */

char *_strpbrk(char *s, char *accept)
{
	int x, y;

	x = 0;
	while (s[x] != '\0')
	{
		y = 0;
		while (accept[y] != '\0')
		{
			if (s[x] == accept[y])
			{
				return (s + x);
			}
			y++;
		}
		if (s[x] == accept[y])
		{
			return (s + x);
		}
		x++;
	}
return ('\0');
}
