#include "main.h"

/**
 * power - Calculate the power of
 * a base raised to an exponent
 * @base: The base number
 * @x: The exponent
 *
 * Return: Result of base raised to the power of x
*/
int power(int base, int x)
{
    int result = 1;

    for (; x > 0; x--)
    {
        result = result * base;
    }
    return result;
}
