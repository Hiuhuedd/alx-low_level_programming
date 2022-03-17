#include <stdio.h>

/**
 * main -where program starts
 *
 * Return: returns 0
 */

int main(void)
{
	print_alphabet(void);
	return (0);
}
void print_alphabet(void)

	{
	char *c = "abcdefghijklmnopqrstuvwxyz\n";

	while (*c)
	{
	putchar(*c++);
	}
	}
