#include "main.h"

int main()
{
	int l1, l2;

	l1 = _printf("Let's try to printf a simple sentence.\n");
	l2 = printf("Let's try to printf a simple sentence.\n");
	_printf("Length:[%d, %i]\n", l1, l2);
	printf("Length:[%d, %i]\n", l1, l2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	l1 = _printf("Percent:[%%]\n");
	l2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", l1);
	printf("Len:[%d]\n", l2);

	return (0);
}
