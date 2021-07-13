#include "holberton.h"
#include <stdlib.h>
/**
 * str_concat - function to concatene two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: a pointer to memory Area.
 */

char *str_concat(char *s1, char *s2)
{
	int counter;
	int i, j, k, l;
	char *p;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}

	counter = i + j;
	p = malloc(sizeof(char) * (counter + 1));

	if (p == NULL)
	{
		return (NULL);
	}

	for (k = 0; k < i; k++)
	{
		p[k] = s1[k];
	}

	for (l = 0; l < j; l++)
	{
		p[k + l] = s2[l];
	}
	p[k + l] = '\0';

	return (p);



}
