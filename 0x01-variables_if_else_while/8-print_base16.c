#include <stdio.h>
/**
 * main - Entry level stage
 * Return: 0 (successful)
 */
int main(void)
{
	int nom;
	char digit;

	for (nom = 0; nom < 10; nom++)
		putchar(nom);

	for (digit = 'a'; digit <= 'f'; digit++)
		putchar(digit);

	putchar('\n');
	return (0);
}
