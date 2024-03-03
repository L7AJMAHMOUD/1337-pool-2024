int ft_is_prime(int nb)
{
    int m;

    m = 2;
    if(nb <= 1)
    return(0);
    while(nb >= m * m)
    {
        if(nb % m == 0)
        {
            return(0);
        }
        m++;
    }
    return(1);
}
int ft_find_next_prime(int nb)
{
    while(ft_is_prime(nb) == 0)
    {
        nb++;
    }
    return(nb);
}