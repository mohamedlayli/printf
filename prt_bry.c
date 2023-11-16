#include "main.h"

/**
 * prt_bry - Print the binary representation
 * of a decimal number
 * @number: The decimal number to be
 * converted and printed in binary
 *
 * Return: Number of characters printed
*/
int prt_bry(int number)
{
    int arr[32], i = 0, count = 0;

    while (number >= 2)
    {
        arr[i] = number % 2;
        number /= 2;
        i++;
    }
    arr[i] = number;
    for (; i >= 0; i--)
    {
        count += _putchar(arr[i] + '0');
    }
    return count;
}
