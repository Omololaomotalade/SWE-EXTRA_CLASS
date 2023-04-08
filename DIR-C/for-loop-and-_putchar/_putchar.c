/* emulate the C standard library function, putchar() */
#include <unistd.h>
#include <stdio.h>

ssize_t _putchar(char *str);
int main(void)
{
/* the putchar() funtion works like this */
	putchar('a');
	putchar('\n');
/* your own _putchar() fuction should do the same */
	_putchar('a');
	_putchar('\n');

	return 0;
}

ssize_t _puts(char str[])
{
	return write(1, str, 8);
}
