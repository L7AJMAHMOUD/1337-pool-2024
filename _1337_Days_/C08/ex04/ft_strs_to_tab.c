#include "ft_stock_str.h"
#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *str) 
{
    int i = 0;
    while (str[i]) 
    {
        i++;
    }
    return i;
}

char *ft_strdup(char *src) 
{
    int len = ft_strlen(src);
    char *dest = (char *)malloc(sizeof(char) * (len + 1));
    if (dest == NULL) 
    {
        return NULL;
    }
    int i = 0;
    while(i <= len) 
    {
        dest[i] = src[i];
        i++;
    }
    return dest;
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av) 
{
    if (ac <= 0 || av == NULL) 
    {
        return NULL;
    }

    struct s_stock_str *stock_str_array = (struct s_stock_str *)malloc(sizeof(struct s_stock_str) * (ac + 1));
    if (stock_str_array == NULL) 
    {
        return NULL;
    }
    int i = 0;
    while (i < ac) 
    {
        stock_str_array[i].size = ft_strlen(av[i]);
        stock_str_array[i].str = av[i];
        stock_str_array[i].copy = ft_strdup(av[i]);
        if (stock_str_array[i].copy == NULL)
        {
            free(stock_str_array[i].copy);
            return NULL;
        }
        i++;
    }
    stock_str_array[ac].str = NULL;
    return stock_str_array;
}