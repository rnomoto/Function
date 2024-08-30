#include <unistd.h>

void my_print_comb(void)
{
        char ca = '0';
        char cb;
        char cc;
        while (ca <= '7')
        {
                cb = ca + 1;
                while (cb <= '8')
                {
                        cc = cb + 1;
                        while (cc <= '9')
                        {
                                write(1, &ca, 1);
                                write(1, &cb, 1);
                                write(1, &cc, 1);
                                if (ca < '7')
                                        write(1, ", ", 2);
                                cc++;
                        }
                        cb++;
                }
                ca++;
        }
}

int main(void)
{
        my_print_comb();
        return 0;
}
