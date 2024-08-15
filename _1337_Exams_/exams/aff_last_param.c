#include <unistd.h>
int main(int ac, char **av)
{
    int i = 0;
    if(ac >= 2)
    {
        while(av[ac - 1][i])
        {
            write(1,&av[ac - 1][i],1);
            i++;
        }
    }
    write(1,"\n",1);
}