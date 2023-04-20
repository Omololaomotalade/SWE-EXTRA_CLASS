#include <stdio.h>
/**
* main - print numbers from 00 to 99.
*
* Return: 0 on success
*/
int main(void)
{

	int i = 0;

	int j = 0;

	for(i=0; i<= 9; i++)
	{
		for(j=i+1; j<= 9; j++)
		{
			printf("%d%d",i,j);
			
			if (i < 8)
			{
				putchar(',');
				putchar(' ');
			}
		
		}
	}
	putchar('\n');

	return (0);
}
