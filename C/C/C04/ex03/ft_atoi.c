int ft_atoi(char *str)
{
    int i;
    int r;
    int m;

    i = 0;
    r = 0;
    m = 1;

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
    while('0' <= str[i] && str[i] <= '9')
    {
        r = r * 10 + str[i] - 48;
        i++;
    }
    r = r * m;
    return(r);
}