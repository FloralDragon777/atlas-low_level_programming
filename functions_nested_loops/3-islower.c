#include "main.h"
/**
 * _islower - returns 1 if char is lowercase.
 * @c: checked input
 */
int _islower(int c)
{
	if (c >= 'a')
	{
		return (1);
	}
	else if (c == 'A')
	{
		return (0);
	}
	return (0);
}
