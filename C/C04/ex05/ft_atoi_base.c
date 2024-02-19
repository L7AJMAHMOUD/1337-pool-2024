#include <unistd.h>

int ft_strlen(char *str)
{
    int i = 0;
    while(str[i])
    {
        i++;
    }
    return(i);
}
int valide_base(char *base)
{
    int j = ft_strlen(base);
    int i = 0;
    if (base[0] == '\0' || base[1] == '\0')
    {
        return(0);
    }
    while (base[i])
    {
         if (base[i] == '-' || base[i] == '+')
        {
            return(0);
        }
        int x = i + 1;
        while(x < j)
        {
            if(base[i] == base[x])
            {
                return(0);
            }
            x++;
        }
        i++;
    }
    return(1);
}
int power(int nb, int power)
{
    int a;

    a = 1;
    while (power > 0)
    {
        a = a * nb;
        power--;
    }
    return (a);
}

int charToDigit(char c, char *base) 
{
    int digit = 0;
    while (*base && *base != c) 
    {
        digit++;
        base++;
    }
    return digit;
}
int ft_atoi_base(char *str, char *base)
{
    int i;
    int r;
    int m;

    i = 0;
    r = 0;
    m = 1;

    if (!valide_base(base))
    {
        return(0);
    }
    while(str[i] == ' ')
    {
        i++;
    }
    while(str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-' )
        {
            m = m * (-1);
        }
            i++;
    }
    int d = 0;
    while(base[d])
    {
        d++;
    }
    int x = 0;
    while(str[x])
    {
        x++;
    }
    while (i < x) 
    {
        r += charToDigit(str[i], base) * power(d, x - 1 - i);
        i++;
    }
    return r * m;
}