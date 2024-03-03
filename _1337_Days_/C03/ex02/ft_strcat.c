char *ft_strcat(char *dest, char *src)
{
    int i;
    int m;

    i = 0;
    m = 0;
    while(dest[m])
    {
        m++;
    }
    while(src[i])
    {
        dest[m] = src[i];
        i++;
        m++;
    }
    dest[m] = '\0';
    return(dest);
}