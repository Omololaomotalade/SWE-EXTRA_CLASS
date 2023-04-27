#include "main.h"

int main(void)
{
	int sum, r_value;

	puts("add_and_print(4, 6) did this:");
	add_and_print(4, 6);
	puts("add(10, 5) was saved in 'sum' & the value of 'sum' was:");
	sum = add(10, 5);
	printf("%d\n\n", sum);

	r_value = putchar('L');
	putchar('\n');
	printf("r_value: %d\n", r_value);
	
	putchar('\n');
	r_value = add_and_print(15, 10);
	printf("r_value: %d\n", r_value);

	return (0);
}

