#include "stdio.h"
#include "holberton.h"
/**
 * main-  prints some worlds intead ot the multiples of 3 &or 5
 *
 *
 * Return: void
 **/
int main(void)
{

int num;

for (num = 1; num < 101; num++)
{
	if (num % 3 == 0 && num % 5 != 0)
		printf("Fizz");
	else if (num % 5 == 0 && num % 3 != 0)
		printf("Buzz");
	else if (num % 3 == 0 && num % 5 == 0)
		printf("FizzBuzz");
	else
	{
		printf("%d", num);

	}
	if (num < 100)
		printf(" ");
}
printf("\n");
return (0);
}
