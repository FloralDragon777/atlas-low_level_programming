#include "main.h"
/**
 * print_numbers- prints the numbers
 *
 * Return: returns to void
 */
void print_numbers(void)
{
	int a = 0;

	while (a < 10)
	{
		_putchar(48 + a);
		a++;
	}
	_putchar('\n');
}
