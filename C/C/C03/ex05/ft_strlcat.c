int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        i++;
    }
    return(i);
}
unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
  
     unsigned int dl;
     unsigned int sl;  
     unsigned int i = 0;
     unsigned int j = 0;
     dl = ft_strlen(dest);
     sl = ft_strlen(src);
     if(size <= dl)
     return(size + sl);
    while(dest[i])
    {
        i++;
    }
    while(src[j])
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return(dl + sl);
}