#include <stdio.h>
/**
 * main - Entry level stage
 * Return: 0 (successful)
 */
int main(void)
{
	char digit;

	for (digit = 'z'; digit >= 'a'; digit--)
		putchar(digit);

	putchar('\n');
	return (0);
}
