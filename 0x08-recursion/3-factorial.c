#include "main.h"

/**
 * factorial - return factorial of num
 *
 *@n: num to back
 *Return: n
 */
int factorial(int n)
{
	if (n < 0)
	return (-1);

	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
