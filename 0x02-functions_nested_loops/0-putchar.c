#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: A program that prints _putchar and new line
 *
 * Returns: returns 0
 */
int main(void)
{
	char c[0] = "_putchar";
	int i = 0;

	while (i < 0)
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
