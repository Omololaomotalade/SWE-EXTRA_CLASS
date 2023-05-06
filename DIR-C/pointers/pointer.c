#include <stdio.h>

void nl(void);
int main(void)
{
	int number;
	int *ptr;
	int numbers[3] = {2, 1, 3};

	number = 213;
	ptr = &number;
	printf("sizeof(number): %ld\n", sizeof(number));
	nl();
	printf("&number: %p\n", &number);
	printf("ptr: %p\n", ptr);
	nl();
	printf("number: %d\n", number);
	printf("*ptr: %d\n", *ptr);
	nl();
	printf("sizeof(numbers[]): %ld\n", sizeof(numbers));
	printf("numbers[]: ");
	for (int itr = 0; itr < 3; itr++)
		putchar(numbers[itr] + '0');
	nl();

	return (0);
}


void nl(void)
{
	putchar('\n');
}
