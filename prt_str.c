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
	int count = 0,i=0;

	/* loop through each character in the string*/
	while (string[i])
	{
		/* printed each character and update the count */
		count += _putchar(string[i]);
		i++;
	}

	/* return the total count of character printed */
	return (count);
}
