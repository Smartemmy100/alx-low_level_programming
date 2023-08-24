#include "main.h"
/**
 * leet - Encodes a string in 1337
 * @str: String to be encoded
 * Return: Always 0.
 */
char *leet(char *str)
{
	int e = 0;
	int f;
	char s[] = "aAeEoOtTlL";
	char s1[] = "4433007711";

	for (; str[e] != '\0'; e++)
	{
		for (f = 0; f <= 9; f++)
		{
			if (s[f] == str[e])
			{
				str[e] = s1[f];
			}
		}
	}
return (str);
}
