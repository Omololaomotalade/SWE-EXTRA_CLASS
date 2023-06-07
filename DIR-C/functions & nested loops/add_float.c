#include <stdio.h>


float add_float()
{
	float a, b, result;

	
	printf("Enter two float number: ");

        scanf("%f %f",&a ,&b);
	result = a + b;


	printf("This is the addition of the two float %.1f\n", result);
	return result;
}


char new_line()
{
	putchar('\n');
	
	return 0;
}

int main(void)
{
	
	
	add_float();
	new_line();
	return 0;
}
