#include <unistd.h>

/**
 * _putchar - a char c tou stdout
 * @c: is a char to print
 *
 * Return: on success 1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
