#include "main.h"
#include <unistd.h>

/**
 * _putchar - function to character to stdout
 *
 * @c: charcter
 *
 * Return: (write(1, &c, 1))
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
