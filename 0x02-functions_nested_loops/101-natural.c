#include <stdio.h>
/**
 * main - list all the natural numbers below 1024 (excluded)
 * that are multiples of 3 or 5
 * Return: 0 (successful)
 */
int main(void)
{
	int p, sum = 0

		for (p = 0; p < 1024; p++)
		{
			if ((p % 3) == 0 || (p % 5) == 0
					sum += p;
					}
					printf("%d\n", sum);
					return (0);
}
