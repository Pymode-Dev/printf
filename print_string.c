#include "main.h"

/**
 * print_string - this print string
 * @str: The string to print
 * Return: int
 */

int print_string(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
