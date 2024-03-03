int ft_iterative_factorial(int nb)
{   
    int fix_value;

    fix_value = nb;
    if(nb < 0)
    return(0);
    if(nb == 0 || nb == 1)
    return(1);
    while(nb > 1)
    {
        fix_value = fix_value * (nb - 1);
        nb--;
    }
    return(fix_value);
}