#include "main.h"

/**
 * prt_str - print a string
 *
 * @string: the string to printed
 *
 * Return: Number of character printed
*/
int prt_str(char *string)
{
	int count = 0;

	/* loop through each character in the string*/
	for (int i = 0; string[i] != '\0'; i++)
	{
		/* printed each character and update the count */
		count += _putchar(string[i]);
	}

	/* return the total count of character printed */
	return (count);
}
