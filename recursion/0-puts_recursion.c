#include "main.h"

/**
 * _putchar - outputs the characters and strings
 * @s: the string that prints
 * 
 * Return: return is void 
 *
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s+1)
}	
