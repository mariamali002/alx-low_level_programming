#include "main.h"

/** _puts_recursion : method print string using recursion
 * @st : string that we need to print
 *
 * Return :no return
 */
void _puts_recursion(char *s)
{
        if(*s !='\0')
        {
                _putchar(s[0]);
                _puts_recursion(s + 1);
        }
        else
        {
                _putchar('\n');
        }

}
