#include "main.h"
#include <stdio.h>
/**
 *print_chessboard - prints the chessboard
 *@a:  pointer
 *Return: void
 */

void print_chessboard(char (*a)[8])
{
	int y, z;

	for (y = 0; y < 8; y++)
	{
		for (z = 0; z < 8; z++)
		{
			_putchar (a[y][z]);
		}
		_putchar('\n');
	}
}
