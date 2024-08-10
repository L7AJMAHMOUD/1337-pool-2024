#include <unistd.h>

int main(int ac,char **av)
{
    int i = 0;
    int a = 1;
    if(ac == 2)
    {
        while(av[1][i])
        {
            if(a % 3 == 0 && a % 5 == 0)
            {
                write(1,"5",1);
            }
            else if(a % 5 == 0)
            {
                write(1,"3",1);
            }
            else if (a % 3 == 0)
            {
                write(1,"5",1);
            }
            else
            write(1,&av[1][i],1);
            i++;
            a++;
        }
    }
}