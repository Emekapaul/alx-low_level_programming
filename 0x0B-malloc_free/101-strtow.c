#include <stdlib.h>
#include "main.h"

/**
 *cnw - This function will count the number of the words of the string
 *@s: The string to be evaluated
 *Return: the number of words
 */
int cnw(char *s)
{
	int fl = 0, h = 0, c;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			fl = 0;
		else if (fl == 0)
		{
			fl = 1;
			h++;
		}
	}
	return (h);
}
/**
 *strtow - Write a function that splits a string into words.
 *@s: This is the string that will be splitted
 *Return: NULL if str == NULL or str == "" If your func fails,return NULL
 */
char **strtow(char *s)
{
	char **mat, *tm;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(s + len))
		len++;
	words = cnw(s);
	if (words == 0)
		return (NULL);
	mat = (char **) malloc(sizeof(char *) * (words + 1));
	if (mat == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		if (s[i] == ' ' || s[i] == '\0')
		{
			if (c)
			{
				end = i;
				tm = (char *) malloc(sizeof(char) * (c + 1));
				if (tm == NULL)
				{
					return (NULL);
				}
				while (start < end)
				{
					*tm++ = s[start++];
				}
				*tm = '\0';
				mat[k] = tm - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
		{
			start = i;
		}
	}
	mat[k] = NULL;
	return (mat);
}
