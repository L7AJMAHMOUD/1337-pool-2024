#include <unistd.h>
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
void    ft_putnbr_base(int nbr)
{
    ft_putnbr(nbr);
}
int main()
{    
    ft_putnbr_base(234);
}