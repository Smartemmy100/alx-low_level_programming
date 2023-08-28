#include "main.h"
#include <stdio.h>
/**
 *_strspn - gets length of a prefix substring
 *@s: first parameter[string]
 *@accept: second parameter[substring]
 *Return: s;
 */
unsigned int _strspn(char *s, char *accept)
{
	int x, y, z;

	z = 0;
	for (x = 0; s[x] >= '\0'; x++)
	{
		for (y = 0; accept[y] > '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				z++;
				break;
			}
		}
		if (accept[y] == '\0')
		{
			break;
		}
	}
return (z);
}
