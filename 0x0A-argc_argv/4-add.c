#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
*main- adds positive numbers.
*@argc: argument counter
*@argv: argument vector
*Return: 0.
**/

int main(int argc, char *argv[])
{
	int i = 0;
	int j = 0;
	char *tpm = "";
	int add = 0;
	int num = 0;

	if (argc == 1)
	{
	printf("%d\n", 0);
	return (0);
	}

	for (i = 1; i < argc; i++)
	{
		tpm = argv[i];

		for (j = 0; tpm[j] != '\0'; j++)
		{

			if (tpm[j] < '0' || tpm[j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		num = atoi(tpm);
		add += num;

	}
	printf("%d\n", add);
	return (0);

}
