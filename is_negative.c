#include <unistd.h>

void my_is_negative(int n)
{
	if (n < 0)
		write(1, "N", 1);
	else
		write(1, "P", 1);
}

int main(void)
{
	int np = 12;
	int nn = -3;
	my_is_negative(np);
	write(1, "\n", 1);
	my_is_negative(nn);
	return 0;
}

