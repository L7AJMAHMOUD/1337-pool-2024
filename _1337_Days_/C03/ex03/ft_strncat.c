#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int i;
    unsigned int m;

    i = 0;
    m = 0;
    while(dest[i])
    {
        i++;
    }
    while(src[m] && m < nb)
    {
        dest[i] = src[m];
        i++;
        m++;
    }
    dest[i] = '\0';
    return(dest);
}