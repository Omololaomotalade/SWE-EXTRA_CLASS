/** Show the return value of printf()
 */

#include <stdio.h>


add(int a, int b);

int main(){

	int result;

	result = add(5,8);

	printf(result);
}



int add(int a, int b)
{
	int c = a + b;

	printf("This is the sum of a & b %d: ", c);


	return("done");
}

