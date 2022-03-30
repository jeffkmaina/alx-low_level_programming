#include "main.h"

/**
 * _pow_recursion -Function that returns the value of x raised
 * to the power of y.
 * @x: number
 * @y: power
 * Return: value of x raised to y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return(-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	if (y % 2 == 0)
		return _pow_recursion(x * x, y / 2);
	return x*_pow_recursion(x * x, (y - 1) / 2);
}
