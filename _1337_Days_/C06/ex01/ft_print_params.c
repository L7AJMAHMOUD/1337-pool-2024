#include<unistd.h>

int main(int ac, char **av)
{
    int i;
    int b;

    b = 1;
    while(ac > b)
    {
        i = 0;
        while(av[b][i])
        {
            write(1, &av[b][i], 1);
            i++;
        }
        write(1, "\n", 1);
        b++;
    }
}