#include <stdio.h>

/**
 * print_rev - prints a string in reverse
 * @s: string to be printed
 */
void print_rev(char *s)
{
	char *last = s;

	while (*last != '\0')
		last++;
	while (last > s)
	{
		last--;
		printf("%c", *last);
	}
	putchar('\n');
}
