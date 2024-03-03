#include <unistd.h>
int main(int ac,char **av)
{
    int i = 0;
    if(ac == 2)
    {
    while(7 <= av[1][i] && av[1][i] || av[1][i] == 32)
    {
        i++;
    }
    while(av[1][i] != 32)
    {
        write(1,&av[1][i],1);
        i++;
    }
    }
    write(1,"\n",1);
}
#include <unistd.h>

int main(int ac, char **av) {
    if (argc == 2) 
    {
        int i = 0;

        while (av[1][i] == '\t' || av[1][i] == '\n' || av[1][i] == '\v' || av[1][i] == '\f' || av[1][i] == ' ') 
        {
            i++;
        }
        while (av[1][i] && !(av[1][i] == '\t' || av[1][i] == '\n' || av[1][i] == '\v' || av[1][i] == '\f' || av[1][i] == ' ')) 
        {
            write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}

