#include "main.h"


/**
 * print_digit - This function prints number
 * @number: The number to print
 * Return: int
 */

int print_digit(int number)
{
	unsigned int n;

	if (number < 0)
	{
		_putchar('-');
		n = -number;
	}
	else
	{
		n = number;
	}

	if (n / 10)
		print_digit(n / 10);
	_putchar((n % 10) + '0');
	return (1);
}

/**
 * print_int - This function print integer in base 10
 * @number: The number to print
 * Return: int
 */

int print_int(int number)
{
	print_digit(number);
	return (1);
}
