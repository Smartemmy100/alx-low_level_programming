#include <stdio.h>
/**
 * main - Entry level stage
 * Return: 0 (successful)
 */
int main(void)
{
	int p;

	for (p = 48; p < 58; p++)
	{
		putchar(p);
		if (p != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
