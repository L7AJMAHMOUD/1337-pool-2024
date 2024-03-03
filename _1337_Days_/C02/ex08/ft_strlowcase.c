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