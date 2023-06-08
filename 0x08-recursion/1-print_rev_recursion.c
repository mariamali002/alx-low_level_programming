#include "main.h"

/**
 *_print_rev_recursion - method print string in reverse
 *@s: stringwe need to print in reverse
 *
 *Return: no return
 */
void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
