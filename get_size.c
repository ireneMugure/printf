#include "main.h"

/**
 * get_size - calcs the size to cast the arg
 * @format: formatted string in which to print the args.
 * @i: List of args to be printed
 *
 * Return: Precision
 */

int get_size(const char *format, int *i)
{
	int curr_l = *i + 1;
	int size = 0;

	if (format[curr_l] == 'l')
		size = S_LONG;
	else if (format[curr_l] == 'h')
		size = S_SHORT;

	if (size == 0)
		*i = curr_l - 1;
	else
		*i = curr_l;

	return (size);
}
