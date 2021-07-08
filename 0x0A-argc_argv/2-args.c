#include <stdio.h>
#include "holberton.h"
/**
*main- prints the argv passed
*@argc: argument counter
*@argv: argument vector
*Return: 0.
**/

int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}


	return (0);
}
