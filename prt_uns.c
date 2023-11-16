#include "main.h"

/**
 * prt_uns - Print an unsigned integer
 * @value: The unsigned integer to be printed
 * Return: Number of characters printed
*/

int prt_uns(unsigned int value)
{
	int count = 0;

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
