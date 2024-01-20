int	ft_atoi(const char *str)
{
    int i = 0;
    int r = 1;
    int m = 0;

    while(7 <= str[i] && str[i] <= 13 || str[i] == 32)
    {
        i++;
    }
    if(str[i] == '-' || str[i] == '+')
    {
        r = r * (-1);
        i++;
    }
    while('0' <= str[i] && str[i] <= '9')
    {
        m = m * 10 + str[i] - '0';
        i++;
    }
    m = m * r;
    return(m);
}