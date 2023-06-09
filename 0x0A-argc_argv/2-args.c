#include <stdio.h>
/**
 * main - method for print the arguments
 * @argc: input
 * @argv: input
 * Return: Always 0 for success
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
