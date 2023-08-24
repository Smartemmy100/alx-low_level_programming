#include "main.h"
/**
 * cap_string - Capitalizes all words of a string.
 * @s: s is the world to be analyzed
 * Return: Always 0.
 */
char *cap_string(char *s)
{
	int v = 0;

	while (s[v] != '\0')
	{
		if (s[0] <= 122 && s[0] >= 97)
		{
			s[0] = s[0] - 32;
		}
		if (s[v] == 32 || s[v] == 46 || s[v] == '\t' ||
				s[v] == '\n' || s[v] == 44 || s[v] == 59 ||
				s[v] == '!' || s[v] == '?' || s[v] == '(' ||
				s[v] == ')' || s[v] == '{' || s[v] == '}')
		{
			if (s[v + 1] <= 122 && s[v + 1] >= 97)
			{
				s[v + 1] = s[v + 1] - 32;
			}
		}
		v++;
	}
return (s);
}
