#include<unistd.h>

int main(int ac, char **av)
{
    int i;
    int b;

    b = ac - 1;
    while(b > 0)
    {
        i = 0;
        while(av[b][i])
        {
            write(1, &av[b][i], 1);
            i++;
        }
        write(1, "\n", 1);
        b--;
    }
}