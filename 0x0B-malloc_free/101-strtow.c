#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function that read words in a string
 * @s: The string to check
 *
 * Return: The number of words
 */
int count_word(char *s)
{
	int la, k, y;

	la = 0;
	y = 0;

	for (k = 0; s[k] != '\0'; k++)
	{
		if (s[k] == ' ')
			la = 0;
		else if (la == 0)
		{
			la = 1;
			y++;
		}
	}

	return (y);
}
/**
 * **strtow - function that splits a string into words.
 * @str: The string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **mat, *tmp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	mat = (char **) malloc(sizeof(char *) * (words + 1));
	if (mat == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				mat[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	mat[k] = NULL;

	return (mat);
}
