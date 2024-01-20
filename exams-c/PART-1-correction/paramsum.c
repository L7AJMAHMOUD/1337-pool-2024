#include <unistd.h>
void    pchar(char m)
{
    write(1,&m,1);
}
int putnb(int nbr)
{
    if(nbr >= 10)
    {
        putnb(nbr / 10);
        putnb(nbr % 10);
    }
    else
    {
        pchar(nbr + 48);
    }
}
int main(int ac,char **av)
{
    int param = ac - 1;
    if(ac > 1)
    {
        putnb(param);
    }
    pchar('\n');
}