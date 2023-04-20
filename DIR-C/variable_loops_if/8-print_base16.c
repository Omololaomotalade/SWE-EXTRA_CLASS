#include <stdio.h>

int main(void)
{
	int num;
	char alp;

	for(num = 0; num <= 9; num ++)
		putchar(num + '0');

	for(alp = 'a'; alp <= 'f'; alp++)
		putchar(alp);
	putchar('\n');
	return 0;
}
