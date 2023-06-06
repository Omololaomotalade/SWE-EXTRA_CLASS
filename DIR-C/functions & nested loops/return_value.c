//Playing with return values
#include <stdio.h>

char *add(int num1, int num2);
int sum(int num1, int num2);
int main(void)
{
//    char *r_val = add(10, 2);
    int result = sum(5, 4);

    printf("sum: %i\n", result);
//    printf("return value: %s\n", r_val);
    return (0);
}

char *add(int num1, int num2)
{
    printf("%i + %i = %i\n", num1, num2, num1+num2);

    return ("done!");
}

int sum(int num1, int num2)
{
    return (num1 + num2);
}

// char *name; === char name[15]; //
