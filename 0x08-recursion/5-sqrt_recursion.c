#include "main.h"
int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - return a square root of number
 * @n: num root of square
 *
 * Return: the result of root square
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - find the natural
 *@i: iterator
 *@n: num root of square
 *
 * Return: result square
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
	return (-1);

	if (i * i == n)
	return (i);

	return (actual_sqrt_recursion(n, i + 1));
}
