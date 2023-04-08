#include <unistd.h>

ssize_t _putchar(char *str);
int main(void)
{
	_putchar("Omolola\n Omotalade");

	return 0;
}

ssize_t _puts(char str[])
{
	return write(1, str, 8);
}
