#include "main.h"
#include <stdlib.h>

/**
 * _strdup - pointer to new allocated space in memory that has a copy of string
 *
 * @str: The string need to be copied.
 *
 * Return: If str == NULL or insufficient memory is available - NULL.
 *         Otherwise - a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
char *duplicate;
int i, len = 0;

if (str == NULL)
return (NULL);

for (i = 0; str[i]; i++)
len++;

duplicate = malloc(sizeof(char) * (len + 1));

if (duplicate == NULL)
return (NULL);

for (i = 0; str[i]; i++)
duplicate[i] = str[i];

duplicate[len] = '\0';

return (duplicate);
}
