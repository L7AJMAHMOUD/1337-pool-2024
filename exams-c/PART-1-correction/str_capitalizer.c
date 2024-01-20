#include <unistd.h>
    char    *ft_strlowcase(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        if(65 <= str[i] && str[i] <= 90)
        {
            str[i] = str[i] + 32;
        }
        i++;
    }
    return(str);
}
int main(int ac,char **av)
{
    int i;
    int m;
    int b;

    i = 0;
    m = 1;
    b = 1;
    while(ac > b)
    {
        av[b] = ft_strlowcase(av[b]);
        i = 0;
        m = 1;
    while(av[b][i])
    {
        if('a' <= av[b][i] && av[b][i] <= 'z')
        {
            if(m == 1)
            {
                av[b][i] = av[b][i] - 32;
                m = 0;
            }
        }
        else if('0' <= av[b][i] && av[b][i] <= '9')
        {
            m = 0;
        }
        else if (av[b][i] == ' ' || (7 <= av[b][i] && av[b][i] <= 13))
        {
            m = 1;
        }
        write(1,&av[b][i],1);
        i++;
    }
    b++;

    }
    write(1,"\n",1);
}