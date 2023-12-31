#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - Concatenate program arguments into a single string
 * @ac: The number of program arguments
 * @av: Array of program argument strings
 *
 * Return: A pointer to the concatenated string, or NULL on failure
 */

char *argstostr(int ac, char **av)
{
	char *ptr;
	int ch = 0;
	int i = 0;
	int j = 0;
	int k = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			ch++;
		}
	}
	ptr = (char *)malloc(sizeof(char) * (ch + ac + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			ptr[k] = av[i][j];
			k++;
		}
		ptr[k] = '\n';
		k++;
	}
	ptr[k] = '\0';
	return (ptr);
}
