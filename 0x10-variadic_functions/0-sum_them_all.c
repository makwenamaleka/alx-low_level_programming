#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns sum of all its par.
 * @n: Num of par passed to the func.
 * @...: A var num of par to calc sum of
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all par.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
