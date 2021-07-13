#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - Copy of a string
 * @str: String
 * Return: p if is Success or NULL if Fail
 */
char *_strdup(char *str)
{
	unsigned int i;
	unsigned int j;
	unsigned int length = 0;
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		length++;

	}
	p =  (char *)malloc((length + 1) * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < length; j++)
	{
		p[j] = str[j];
	}

	return (p);
}
