#include <unistd.h>
int main(int ac,char **av)
{
    int i = 0;
    int a = 1;
    if(ac == 2)
    {
        while(av[1][i])
        {
            if(a % 2 == 0)
            {
                write(1,&av[1][i],1);
            }
            a++;
            i++;
        }
    }
}