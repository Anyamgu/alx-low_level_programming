#include "main.h"
#include <math.h>

int square(int n, int m);
/**
 * _sqrt_recursion - function that returns the natural
 * square root of a number
 * @n: number for calculating the square root
 *
 * Return: the natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (square(n, 0));
}

/**
 * square - find square root
 * @n: number for calculating square root
 * @m: square root
 *
 * Return: natural square root
 */

int square(int n, int m)
{
	if (m * m == n)
	{
		return (m);
	}
	else if (m * m < n)
	{
		return (square(n, m + 1));
	}
	else
	{
		return (-1);
	}
}
