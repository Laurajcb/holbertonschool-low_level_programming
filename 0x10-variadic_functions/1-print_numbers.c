#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
* print_numbers- print a list of the parameters
* @n: number of ints passed to the funt
* @separator: is the string
* Return:0
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list parameters;
	int arg;

	va_start(parameters, n);
	if (separator == NULL)
	{
		separator = "";
	}
	for (i = 0; i < n; i++)
	{
		arg = va_arg(parameters, int);

		if (i != n - 1)
		{
			printf("%d%s", arg, separator);
		}
		else
		{
			printf("%d", arg);
		}
	}
	printf("\n");
}
