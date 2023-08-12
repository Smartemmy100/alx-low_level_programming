#include <stdio.h>
/**
 * main - Entry level stage
 * Return: 0 (successful)
 */
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
		putchar((digit % 10) + '0');
	putchar('\n');
	return (0);
}
