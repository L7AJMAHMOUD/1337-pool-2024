#include <stdlib.h>
#include <stdio.h>
int ft_ultimate_range(int **range,int min, int max)
{
    int i;
    int *d;
    int r;

    i = 0;
    if(min >= max)
    {
        *range = NULL;
        return(0);
    }
    r = max - min;
    d = (int *) malloc(r * sizeof(int));
    if(!d)
    {
        return(-1);
    }
    while(i < max - min)
    {
        d[i] = min + i;
        i++;
    }
    *range = d;
    return(r);
    free(d);
}