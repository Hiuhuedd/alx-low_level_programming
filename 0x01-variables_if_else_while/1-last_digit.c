#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - where the program starts
 * Return: the last value of n
*/
int main(void)
{
	int n;

	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	last = n % 10;
	if (n > 5 && last != 0)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	}
	else if (n < 6 && n != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
	}
	else
	{
	printf("Last digit of %d is %d and is 0\n", n, last);

	}

	return (0);
}
