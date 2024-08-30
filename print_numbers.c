#include <unistd.h>

void my_print_numbers(void)
{
	write(1, "0123456789", 10);
}

int main(void)
{
	my_print_numbers();
	return 0;
}
