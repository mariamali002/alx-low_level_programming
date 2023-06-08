#include "main.h"

/**
 * _pow_recursion - method for power number
 * @x: base of the power
 * @y: power
 *
 * Return: an ineteger
 */
int _pow_recursion(int x, int y)
{
if (y == 0)
return (1);
if (y > -1 && y < 1 && y != 0)
return (x);
if (y < -1)
return (-1);
return (x * _pow_recursion(x, y - 1));
}
