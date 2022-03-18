#include <stdio.h>
#include "main.h"


/**
 * void print_line(int n) prints n numver of _
 *
 * Return: returns 0
 */

void print_line(int n)
{
int i = 0;
while (i < n)
{
if(n > 0)
{
_putchar('_');
}
else
{
_putchar('\n');
}
i++;
}
_putchar('\n');
}
