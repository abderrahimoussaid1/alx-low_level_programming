#include "main.h"

/**
 * print_rev - print a string, in reverse
 * @s: pointer to the string to print
 */
void print_rev(char *s)
{
    if (s != '\0')
    {
        print_rev(s + 1);
        _putchar(*s);
    }
}
