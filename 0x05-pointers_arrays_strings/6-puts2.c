#include "stdio.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first one
 *
 * @str: pointer to character
 *
 * Return: none
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			putchar(str[i]);
	}
	putchar('\n');
}
