#include "main.h"

/**
 * prt_dec - Print a decimal number
 * @value: The decimal number to be printed
 *
 * Return: Number of characters printed
*/
int prt_dec(int value)
{
	int count = 0;
	/* print '-' for negative numbers */
	if (value < 0)
	{
		count += _putchar('-');
		value = value * -1;
	}
	/**
	 * First remove the last digit of number and print
	 * the remaining digits using recursion, then print
	 * the last digit
	*/
	if (value / 10)
		count += prt_dec(value / 10);
	count += _putchar(value % 10 + '0');
	return (count);
}
