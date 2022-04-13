#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers rom n to 98, followed by a new line
 *
 * @n: input number.
 *
 * Return: no return.
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%i, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%i, ", n);
		n--;
	}
	
	printf("98");
	putchar('\n');
}
