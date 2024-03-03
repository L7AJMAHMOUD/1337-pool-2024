int ft_occ(char *str)
{
    int i = 0;
    while(str[i])
    {
        if(str[i] == 'A')
        {
            return(1);
        }
        i++;
    }
    return(0);
}