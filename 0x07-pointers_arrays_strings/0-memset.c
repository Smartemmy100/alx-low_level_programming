#include "main.h"
#include <stdio.h>
/**
  *_memset - fills memory with a constant number of bytes
  *@s: pointer with the constant byte
  *@b: constant byte
  *@n: number of bytes
  *Return: 0
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int e;

	e = 0;
	while (e < n)
	{
		s[e] = b;
		e++;
	}
return (0);
}
