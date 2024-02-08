#include "main.h"

/**
 * _puts- outputs the characters and strings
 * @s: the string that prints
 * 
 * Return: return is void 
 *
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_put(\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s+1)
}
	
