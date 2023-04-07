#include <stdio.h>

int main(void)
{
	char name[20] = "Omolola Omotalade";
	int loop;
	
	for (loop = 0; loop < 17; loop++)
	{
		putchar(name[loop]);
	}
	putchar('\n');
	
	return (0);
}
