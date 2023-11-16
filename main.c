#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Test printf
 *
 * Return: Always 0
 */
int main(void)
{
/* Tests for char and string */

    int len = _printf("Let's try to printf a simple sentence.\n");
    int len2 = printf("Let's try to printf a simple sentence.\n");
    _printf("Len:[%d]%%\n", len);
    printf("Len:[%d]\n", len2);

    len = _printf("String:[%s]\n", "I am a string !");
    len2 = printf("String:[%s]\n", "I am a string !");
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);

    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');

    return (0);

}
