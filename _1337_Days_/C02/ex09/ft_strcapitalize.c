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
char *ft_strcapitalize(char *str)
{
    int i;
    int m;

    i = 0;
    m = 1;
    ft_strlowcase(str);
    while(str[i])
    {
        if('a' <= str[i] && str[i] <= 'z')
        {
            if(m == 1)
            {
                str[i] = str[i] - 32;
                m = 0;
            }
        }
        else if('0' <= str[i] && str[i] <= '9')
        {
            m = 0;
        }
        else
        {
            m = 1;
        }
        i++;
    }
    return(str);
}