#include <stdio.h>
/**
 * main - Entry level stage
 * Return: 0 (successful)
 */
int main(void)
{
	int nom;
	char digit;

	for (nom = 0; nom < 16; nom++)
		putchar(nom);

	for (digit = 'a'; digit <= 'p'; digit++)
		putchar(digit);

	putchar('\n');
	return (0);
}
