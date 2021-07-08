#include <stdio.h>
#include "holberton.h"
/**
*main- prints the argc passed
*@argc: argument counter
*@argv: argument vector
*Return: 0.
**/

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}
