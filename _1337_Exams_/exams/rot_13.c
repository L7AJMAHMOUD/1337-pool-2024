#include <unistd.h>
int main(int ac,char **av)
{
    int i = 0;
    if(ac == 2)
    {
        while(av[1][i])
        {
            if('a' <= av[1][i] && av[1][i] <= 'm' || 'A' <= av[1][i] && av[1][i] <= 'M')
            {
                av[1][i] = av[1][i] + 13;
            }
            else if('n' <= av[1][i] && av[1][i] <= 'z' || 'N' <= av[1][i] && av[1][i] <= 'Z')
            {
                av[1][i] = av[1][i] - 13;
            }
            write(1,&av[1][i],1);
            i++;
        }
    }
    write(1,"\n",1);
}