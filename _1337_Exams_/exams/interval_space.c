#include <unistd.h>
int main(int ac , char **av)
{
    int i = 0;
    int fr = 1;
    while(av[1][i] == ' ' || av[1][i] == '\t')
    {
        i++;
    }
    while(av[1][i])
    {
        if(av[1][i] != ' ' &&  av[1][i] != '\t')
        {
            if(!fr)
            {
                write(1,"   ",3);
            }
            if(av[1][i] && av[1][i] != ' ' && av[1][i] != '\t')
            {
                write(1,&av[1][i],1);
            }
            fr = 0;
            i++;
        }
        while(av[1][i] == ' ' || av[1][i] == '\t')
        {
            i++;
        }
    }
    write(1,"\n",1);
}