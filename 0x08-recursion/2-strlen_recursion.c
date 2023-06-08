#include  "main.h"

/**
 * _strlen_recursion - a lenght of str
 *
 * @s: str to print
 *
 * Return: length of str
 */
int _strlen_recursion(char *s)
{
	int x;

	x = 0;

	if (*s)
	{
		x++;
		x += _strlen_recursion(s + 1);
	}
	return (x);
}
