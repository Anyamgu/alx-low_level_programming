#include "main.h"

/**
 * infinite_add - function that adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: result
 * @size_r: buffer size
 *
 * Return: sum
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e;
	int f;
	int g;

	while (n1[a] != '\0')
	{
		a++;
	}
	while (n2[b] != '\0')
	{
		b++;
	}
	if (a > b)
	{
		c = a;
	}
	else
	{
		c = b;
	}
	if (c + 1 > size_r)
	{
		return (0);
	}
	r[1] = '\0';
	for (g = c - 1; g >= 0; g--)
	{
		a--;
		b--;
		if (a >= 0)
		{
			e = n1[a] - '0';
		}
		else
		{
			e = 0;
		}
		if (b >= 0)
		{
			f = n2[b] - '0';
		}
		else
		{
			f = 0;
		}
		r[g] = (e + f + d) % 10 + '0';
		d = (e + f + d) / 10;
	}
	if (d == 1)
	{
		r[c + 1] = '\0';
		if (c + 2 > size_r)
		{
			return (0);
		}
		while (c-- >= 0)
		{
			r[c + 1] = r[c];
			r[0] = d + '0';
		}
	}
	return (r);
}
