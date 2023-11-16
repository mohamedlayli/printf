#include "main.h"
/** 
 * prt_oct - Prints the octal representation
 * of an unsigned integer.
 *
 * @num: The unsigned integer to be printed in octal.
 *
 * Returns: The number of characters printed.
 */
int prt_oct(unsigned int num)
{
    if (num == 0) {
        return putchar('0');
    }

    int octalDigits[100];
    int i = 0;

    // Convert decimal to octal
    while (num > 0) {
        octalDigits[i++] = num % 8;
        num /= 8;
    }

    int printed_chars = 0;

    // Print octal number in reverse order
    for (int j = i - 1; j >= 0; j--) {
        printed_chars += putchar(octalDigits[j] + '0');
    }

    return printed_chars;
}
