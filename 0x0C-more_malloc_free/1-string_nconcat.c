#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat- function to concatene two strings
 * @s1: the first string
 * @s2: the second string
 * @n: size
 * Return: a pointer to memory Area.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int  i = 0, j = 0, l = 0, k = 0;
	unsigned int len1 = 0, len2 = 0;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
	{
		len1++;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		len2++;
	}
	if (len2 >= n)
	{
		len2 = n;
	}
	p = malloc(len1 + len2 + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < len1; k++)
	{
		p[k] = s1[k];
	}

	for (l = 0; l < len2; l++)
	{
		p[k + l] = s2[l];
	}
	p[k + l] = '\0';

	return (p);
}
