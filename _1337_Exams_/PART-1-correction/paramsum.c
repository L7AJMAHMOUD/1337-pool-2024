#include <unistd.h>

void    pchar(char m)
{
    write(1, &m, 1);
}
void    putnb(int nbr)
{
    if (nbr >= 10)
    {
        putnb(nbr / 10);
        putnb(nbr % 10);
    }
    else
    {
        pchar(nbr + '0');
    }
}
int main(int ac, char **av)
{
    (void)av
    int param = ac - 1;
    putnb(param);
    pchar('\n');
    return 0;
}