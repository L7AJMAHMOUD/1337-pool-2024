#include <unistd.h>

char *title(char *str)
{
    int c = 0;
    int n = 0;
    int i = 0;
    
    while(str[i])
    {
        if(str[i] != ' ')
        {
            if(n == 0 && 'a' <= str[i] && str[i] <= 'z')
            {
                str[i] -= 32;
                n = 0;
            }
        }
        else
        {
            n = 0;
        }
        i++;
    }
}

int main(int ac, char **av)
{
    int i = 1;

    if (ac > 1)
    {
        while (i < ac)
        {
            title(av[i]);
            if (i < ac - 1)
                ft_putchar('\n');
            i++;
        }
    }
    ft_putchar('\n');
    return 0;
}
