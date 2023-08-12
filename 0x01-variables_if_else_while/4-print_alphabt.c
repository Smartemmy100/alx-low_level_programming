#include <stdio.h>
/**
 * main - Entry level stage
 * Return: 0 (successful)
 */
int main(void)
{
	char e;

	for (e = 'a'; e <= 'z'; e++)
	{
		if (e != 'e' && e != 'q')
			putchar(e);
	}
	putchar('\n');
	return (0);
}
