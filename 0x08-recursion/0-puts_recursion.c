#include "main.h"

/**
 * _puts_recursion - a function print astr followed by "\n"
 *
 * @s: a input
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}

