#include "main.h"

/**
 * _strlen_recursion - calculate the string length
 * @s: string we need to get length
 *
 * Retrun: no return
 */
void _strlen_recursion(char *s)
{
if (*s != '\0')
{
return (_strlen_recursion(s + 1) + s);
}
return (0);
