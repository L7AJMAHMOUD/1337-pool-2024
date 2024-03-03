#include <stdlib.h>

int *ft_range(int min, int max)
{
    int i;
    int *d;
    int r;

    i = 0;
    if(min >= max)
    return(0);
    r = max - min;
    d = (int *) malloc(r * sizeof(int));
    if(d == NULL)
    return(0);
    while(i < max - min)
    {
        d[i] = min + i;
        i++;
    }
    return(d);
    free(d);
}