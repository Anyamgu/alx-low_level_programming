#include "main.h"

/**
 * _pow_recursion -  function that returns the value of x
 * raised to the power of y
 * @x: number to be checked
 * @y: number used as a power
 *
 * Return: value of x
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}

}
