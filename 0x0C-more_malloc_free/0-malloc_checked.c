#include "notrebloh.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - method to allocate memory with malloc
 * @b: unsigned int
 * Return: return pointer
 */
void *malloc_checked(unsigned int b)
{
int *ptr;

ptr = malloc(b);
if (ptr == NULL)
exit(98);
return (ptr);
}
