#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int row, ln, space;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (space = size - row;  space >= 1; space--)
			{
				_putchar(' ');
			}
			for (ln = 1; ln <= row; ln++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
