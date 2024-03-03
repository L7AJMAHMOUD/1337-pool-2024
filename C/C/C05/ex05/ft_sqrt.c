int ft_sqrt(int nb)
{   
    int a;

    a = 1;
    if(nb <= 0)
    return(0);
    while(nb >= a * a)
    {
        if(a * a == nb)
        {
            return(a);
        }
        a++;
    }
    return 0;
}