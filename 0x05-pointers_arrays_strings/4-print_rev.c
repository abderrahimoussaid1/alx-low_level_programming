#include <stdio.h>

/* function to print a string reverse one character at a time */
void print_rev(char *s)
{
  int i;

  i = 0;
  while (s[i] != '\0')
  {
    i++;
  }
    i = i - 1;

  while (i >= 0)
  {
    putchar(s[i]);
    i--;
  }

  putchar('\n');
}
