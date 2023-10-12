#include "variadic_functions.h"

/**
 * print_numbers - to print numbers given as parameters
 * @separator: the string to be printed between numbers
 * @n: the numbee of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int j;
	va_list list;

	va_start(list, n);

	for (j = 0; j < n; j++)
	{
		if (!separator)
			printf("%d", va_arg(list, int));
		else if (separator && j == 0)
			printf("%d", va_arg(list, int));
		else
			printf("%d", separator, va_arg(list, int));
	}
	va_end(list);

	print("\n");
}
