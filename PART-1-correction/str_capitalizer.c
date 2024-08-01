#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_strcapitalize(char *str)
{
    int i = 0;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        i++;
    }

    i = 0;
    while (str[i])
    {
        if ((i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t') && (str[i] >= 'a' && str[i] <= 'z'))
        {
            str[i] -= 32;
        }
        ft_putchar(str[i]);
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
            ft_strcapitalize(av[i]);
            if (i < ac - 1)
                ft_putchar('\n');
            i++;
        }
    }
    ft_putchar('\n');
    return 0;
}