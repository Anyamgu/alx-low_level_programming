#include "main.h"

/**
 * _strlen_recursion - get the string length
 * @s: string
 *
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}

/**
 * string_compare - compare the characters of the string
 * @s: string
 * @num1: small number
 * @num2: large number
 *
 * Return: 1 if string is palindrome, 0 if not
 */

int string_compare(char *s, int num1, int num2)
{
	if (*(s + num1) != *(s + num2 - 1))
	{
		return (0);
	}
	if (num1 >= num2)
	{
		return (0);
	}
	return (string_compare(s, num1 + 1, num2 - 1));
}

/**
 * is_palindrome - checks if a string is palindrome
 * @s: string
 *
 * Return: 1 if string is palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	return (string_compare(s, 0, _strlen_recursion(s)));
}
