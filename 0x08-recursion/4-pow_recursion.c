#include "main.h"

/**
 * _pow_recursion - a value of x and y
 * @y: powr
 * @x: value to raise
 *
 * Return: powr result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
