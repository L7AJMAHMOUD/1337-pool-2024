#include <stdlib.h>

char    *ft_strdup(char *src)
{
    int i;

    i = 0;
    char *ptr;
    while(src[i])
    {
        i++;
    }
    ptr = (char *)malloc(i * sizeof(char));
    if(ptr == NULL)
    return(0);
    i = 0;
    while(src[i])
    {
        ptr[i] = src[i];
        i++;
    }
    ptr[i] = '\0';
    return(ptr);
    free(ptr);
}