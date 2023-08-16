#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 * 10 times in lowercase
 */
void print_alphabet_x10(void)
{
	int x;
	char yz;

	for (x = 1; x <= 10; x++)
	{
		for (yz = 'a'; yz <= 'z'; yz++)
		{
			_putchar(yz);
		}
		_putchar('\n');
	}
}
