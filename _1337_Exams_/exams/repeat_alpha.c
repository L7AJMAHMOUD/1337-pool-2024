#include <unistd.h>
void    pchar(char m)
{
    write(1,&m,1);
}
int main(int ac,char **av)
{
    int i = 0;
    int s = 0;
    if(ac < 1)
    {
        write(1,"\n",1);
    }
    if(ac == 2)
    {
        while(av[1][i])
        {
            if('a' <= av[1][i] && av[1][i] <= 'z' )
            {
                char m = av[1][i] - 96;
                while(s < m)
                {
                    pchar(av[1][i]);    
                    m--;
                }
            }
            else if('A' <= av[1][i] && av[1][i] <= 'Z')
            {
                 char m = av[1][i] - 64;
                while(s < m)
                {
                    pchar(av[1][i]);    
                    m--;
                }
            }
            else
            {
                pchar(av[1][i]);
            }
            i++;
        }
    }
    write(1,"\n",1);
}