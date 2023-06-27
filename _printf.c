#include "main.h"

/**
 * _printf - function that produces output according to a format
 * @format: the string passed in it.
 * Return: int
 */


int _printf(const char *format, ...)
{
	va_list output_list;

	char *str;
	int ch;
	int number;
	int counter;
	int i;

	va_start(output_list, format);

	counter = 0;
	i = 0;

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;

			if (format[i] == 's')
			{
				str = va_arg(output_list, char *);
				counter = print_string(str);
			}
			else if (format[i] == 'c')
			{
				ch = va_arg(output_list, int);
				counter += _putchar(ch);
			}
			else if (format[i] == 'd')
			{
				number = va_arg(output_list, int);
				counter += print_digit(number);
			}
			else if (format[i] == 'i')
			{
				number = va_arg(output_list, int);
				counter += print_digit(number);
			}
			else
			{
				_putchar('%');
				counter++;
			}
		}
		else
		{
			counter += _putchar(format[i]);
		}
		i++;
	}
	va_end(output_list);

	return (counter);
}
