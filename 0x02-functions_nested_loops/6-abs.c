#include "main.h"

/**
 * _abs - Calculates teh value of an integer
 * @c: The number to be calculated
 * Return:Value of number or 0
 */

int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
