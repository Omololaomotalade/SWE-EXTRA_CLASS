#include <stdio.h> //printf, puts, putc, putchar

int add_and_print(int o, int p); //function prototype for add2
int add(int y, int z); //function prototype for add
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

int add(int y, int z)
{
	return (y + z);
}

int add_and_print(int o, int p)
{
	int result = o + p;
	printf("%d\n", result);
	return (100);
}

