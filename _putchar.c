#include "main.h"


/**
 * _putchar - pwrites the character c to stdout
 * @c: the character to print out
 *
 * Return: int
 */

int _putchar(int c)
{
	return (write(1, &c, 1));
}
