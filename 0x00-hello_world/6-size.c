#include<stdio.h>

/**
 * main
 *
 * Return: returns 0
 */

int main(void)

{
 int a;
 long int b;
 char c;
 long long int d;
 float f;

	printf("Size of char:%lu",(unsigned long)sizeof(c));
	printf("Size of int:%lu",(unsigned long)sizeof(a));
	printf("Size of long long int:%lu",(unsigned long)sizeof(d));
	printf("Size of long int:%lu",(unsigned long)sizeof(b));
	printf("Size of float:%lu",(unsigned long)sizeof(f));
}
