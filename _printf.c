#include <stdarg.h>
#include "main.h"
#include <stdio.h>

/*
 * _printf - This is Custom printf function
 * @format: This is the format string
 *
 * Return: This is the number of printed characters
 */

int _printf(const char *format, ...)
{
	int count = 0, i = 0;

	va_list data;

	va_start(data, format);

	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			count += _putchar(format[i]);
			i++;
		}
		else if (format[i] == '%' && format[i + 1] != ' ')
		{
			if (format[i + 1] == 'c')
			{
				count += _putchar(va_arg(data, int));
			}
			else if (format[i + 1] == 's')
			{
				count += prt_str(va_arg(data, char *));
			}
			else if (format[i + 1] == '%')
			{
				count += _putchar('%');
			}

			i += 2;
		}

		else
		{
			i++;
		}


	}

	va_end(data);

	return (count);

}
