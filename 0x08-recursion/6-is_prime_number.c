#include "main.h"
#include <stdio.h>

int prime(int n, int g);
/**
 * is_prime_number - function that returns 1 if the input
 * integer is a prime number, otherwise return 0
 * @n: input int number
 *
 * Return: 1 if n is a prime number, 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime(n, n > 1));
}

/**
 * prime - checks if a number is a prime number
 * @n: input int number
 * @g: number used
 *
 * Return: 1 if n is a prime number, 0 if not
 */

int prime(int n, int g)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n % g == 0 && g > 1)
	{
		return (0);
	}
	else if ((n / g) < g)
	{
		return (1);
	}
	else
	{
		return (prime(n, g + 1));
	}
}
