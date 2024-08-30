#include <unistd.h>

void my_print_alphabet(void)
{
	write(1, "abcdefghijklmnopqrstuvwxyz", 26);
}

int main(void)
{
	my_print_alphabet();
	return 0;
}

