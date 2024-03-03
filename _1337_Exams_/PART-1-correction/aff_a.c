#include <unistd.h>
int main(int ac,char **av)
{
    int i = 0;
    if(ac == 1)
    {
        write(1,"a\n",2);
    }
    if(ac >= 3)
    {
        write(1,"a\n",2);
    }
    if(ac == 2)
    {
        while(av[1][i] && av[1][i] != 'a')
        {
            i++;
        }
            if(av[1][i] == 'a')
            {
                write(1,"a",1);
            }
        write(1,"\n",1);
    }   
}