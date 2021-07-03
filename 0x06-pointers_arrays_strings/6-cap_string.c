#include <stdio.h>
#include "holberton.h"
/**
 * valid_special_char- funtion that valid special characters
 *@c: char
 *
 *
 * Return: 0 is void
 */
int valid_special_char(char c)
{
	int flag = 0;

	if (c == ' ' || c == 9 || c == '\n' || c  == ',')
	{
		flag = 1;
	}

	if (c == '"' || c == '(' || c == ')' || c == '{')
	{
		flag = 1;
	}
	if (c  == '}' || c  == '!' || c == ';' || c  == '.')
	{
		flag = 1;
	}
	return (flag);
}

/**
* cap_string- funtion that capitalizes
*the words in array
*
*@s: string
*
* Return: 0 is void
*/
char *cap_string(char *s)
{
	int i = 0;
	int flag = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (flag == 1)
		{
			if (s[i] >= 97 && s[i] <= 122)
			{
				s[i] = s[i] - 32;
				flag = 0;
			}
			if (s[i] >= 65 && s[i] <= 95)
			{
				flag = 0;
			}
			if (s[i] >= 48 && s[i] <= 57)
			{
				flag = 0;
			}
		}
		else
		{
			flag = valid_special_char(s[i]);
		}

	}
	return (s);
}

