#include "main.h"
#include <stdio.h>

/**
 *_strcpy - copies the string pointer to src
 *@src: integer placed
 *@dest: integer entered
 *Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	*(dest + x) = '\0';
return (dest);
}
