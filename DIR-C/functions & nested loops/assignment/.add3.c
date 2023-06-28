#include "main.h"

/**
 * add3 - add 3 integers
 * @a - first number
 * @b - second number
 * @c - third number
 *
 * Return - a string
 */
char *add3(int a, int b, int c)
{
	int result = a + b + c;
	
	printf("%i + %i + %i = %i\n", a, b, c, result);

	return ("Lola did it!");
}
