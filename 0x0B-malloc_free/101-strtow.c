#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * count_words - Count the number of words in a string
 * @str: The input string
 *
 * Return: The number of words
 */
int count_words(char *str)
{
	int word_count = 0;
	int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			word_count++;
		}
	}
	return (word_count);
}
/**
 * split_string - Split a string into words
 * @str: The input string
 * @words: An array of words
 *
 * Return: 1 on success, 0 on failure
 */
int split_string(char *str, char **words)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int len;

	while (str[i])
	{
		if (str[i] != ' ')
		{
			len = 0;
			while (str[i + len] && str[i + len] != ' ')
			{
				len++;
			}
			words[k] = (char *)malloc(sizeof(char) * (len + 1));
			if (words[k] == NULL)
			{
				return (0);
			}
			for (j = 0; j < len; j++)
			{
				words[k][j] = str[i + j];
			}
			words[k][j] = '\0';
			k++;
			i += len;
		}
		else
		{
			i++;
		}
	}
	return (1);
}

/**
 * strtow - Split a string into words
 * @str: The input string
 *
 * Return: A pointer to an array of strings (words), or NULL on failure
 */
char **strtow(char *str)
{
	char **words;
	int word_count;
	int i;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	word_count = count_words(str);
	words = (char **)malloc(sizeof(char *) * (word_count + 1));

	if (words == NULL)
	{
		return (NULL);
	}
	if (!split_string(str, words))
	{
		for (i = 0; i < word_count; i++)
		{
			free(words[i]);
		}
		free(words);
		return (NULL);
	}
	words[word_count] = NULL;
	return (words);
}
