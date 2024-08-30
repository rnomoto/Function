#include <unistd.h>

void my_putchar(char c)
{
	write(1, &c, 1);
}

int main(void)
{
	char c = 'a';
	my_putchar(c);
	return 0;
}

