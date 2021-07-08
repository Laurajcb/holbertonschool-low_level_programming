#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
*main- multiplies 2 integer passed
*@argc: argument counter
*@argv: argument vector
*Return: 0.
**/

int main(int argc, char *argv[])
{

	char *number_1 = "";
	char *number_2 = "";
	int a = 0;
	int b = 0;
	int result;

	if (argc < 3)
	{
	printf("Error\n");
	return (1);
	}

	number_1 = argv[1];
	number_2 = argv[2];

	a = atoi(number_1);
	b = atoi(number_2);

	result  = a * b;
	printf("%d\n", result);

	return (0);

}
