#include <stdio.h>

/**
 * main - Betty calm down
 * Return: 0
 */

int main(void)

{
	int a;
	char b;
	long long int c;
	long int d;
	float f;

	printf("Size of char: %ld byte(s)\n", sizeof(b));
	printf("Size of int: %ld byte(s)\n", sizeof(a));
	printf("Size of long long int: %ld byte(s)\n", sizeof(c));
	printf("Size of long int: %ld byte(s)\n", sizeof(d));
	printf("Size of float: %ld byte(s)\n", sizeof(f));
        return (0);
}
