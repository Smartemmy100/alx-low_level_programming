#include "main.h"

/**
  *  _strcmp - Function which compare two strings and
  *@s1: first string
  *@s2:second string
  *Return: void
  */

int _strcmp(char *s1, char *s2)
{
	int e = 0, diff = 0;

	while (1)
	{
		if (s1[e] == '\0' && s2[e] == '\0')
			break;
		else if (s1[e] == '\0')
		{
			diff = s2[e];
			break;
		}
		else if (s2[e] == '\0')
		{
			diff = s1[e];
			break;
		}
		else if (s1[e] != s2[e])
		{
			diff = s1[e] - s2[e];
			break;
		}
		else
			e++;
	}
return (diff);
}
