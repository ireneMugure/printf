#include "main.h"

/**
 * get_width - Calcs the width for printing
 * @format: Formatted string in which to print the args.
 * @i: List of args to be printed.
 * @list: list of args.
 *
 * Return: width.
 */
int get_width(const char *format, int *i, va_list list)
{
	int curr_n;
	int width = 0;

	for (curr_n = *i + 1; format[curr_n] != '\0'; curr_n++)
	{
		if (is_digit(format[curr_n]))
		{
			width *= 10;
			width += format[curr_n] - '0';
		}
		else if (format[curr_n] == '*')
		{
			curr_n++;
			width = va_arg(list, int);
			break;
		}
		else
			break;
	}

	*i = curr_n - 1;

	return (width);
}
