#include <unistd.h>

void    expand_str(char *str)
{
    int i = 0;
    int first_word = 1;
    while (str[i] == ' ' || str[i] == '\t')
    {
        i++;
    }
    while (str[i])
    {
        if (!first_word)
        {
            write(1, "   ", 3);
        }
        first_word = 0;
        while (str[i] && str[i] != ' ' && str[i] != '\t')
        {
            write(1, &str[i], 1);
            i++;
        }
        while (str[i] == ' ' || str[i] == '\t')
        {
            i++;
        }
    }
    write(1, "\n", 1);
}

int main(int ac, char **av)
{
    if (ac == 2)
        expand_str(av[1]);
    else
        write(1, "\n", 1);
    return 0;
}
