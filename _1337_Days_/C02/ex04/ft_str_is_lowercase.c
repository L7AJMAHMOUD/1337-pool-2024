int ft_str_is_lowercase(char *str)
{
    int i;

    i = 0;
    if(str[i] == '\0')
    return(1);
    while(str[i])
    {
        if (97 <= str[i] && str[i] <= 122)
        {
            i++;
        }
        else
            return(0);
    }
    return(1);
}