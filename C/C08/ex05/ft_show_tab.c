#include <unistd.h>
#include "ft_stock_str.h"
#include"../ex04/ft_strs_to_tab.c"

void ft_putstr(char *str)
{
    while(*str)
    {
        write(1,&*str,1);
        str++;
    }
}
void   ft_putchar(char c)
{
    write(1,&c,1);
}
void ft_putnbr(int nb)
{
    if(nb == -2147483648)
    write(1,"-2147483648",11);
    else if(nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
        ft_putnbr(nb);
    }
    else if (nb >= 10)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    else
        ft_putchar(nb + 48);
}

void ft_show_tab(struct s_stock_str *par) 
{
    while (par->str != 0) 
    {
        ft_putstr(par->str);
        write(1, "\n", 1);
        ft_putnbr(par->size);
        write(1, "\n", 1);
        ft_putstr(par->copy);
        write(1, "\n", 1);
        par++;
    }
}