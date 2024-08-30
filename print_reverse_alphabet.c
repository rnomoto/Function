#include <unistd.h>

void my_print_reverse_alphabet(void)
{
	write(1, "zyxwvutsrqponmlkjihgfedcba", 26);
}

int main(void)
{
	my_print_reverse_alphabet();
}

