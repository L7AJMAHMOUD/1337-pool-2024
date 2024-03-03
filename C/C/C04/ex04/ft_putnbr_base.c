#include <unistd.h>

void   ft_putchar(char c)
{
    write(1,&c,1);
}
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
void ft_putnbr(int nb)
{
    if(nb < 0)
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
int check_base(char *base)
{
    int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) < 2)
	return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
        {
		    return (0);
        }
		i++;
	}
	i = 0;
	while (base[i])
	{
		j = i + 1;
		while ((base[i] != base[j]) && base[j])
        {
			j++;
        }
		if (base[i] == base[j])
			return (0);
		i++;
	}
	return (1);
}
void    ft_putnbr_base(int nbr, char *base)
{
    int tab[32];
    unsigned int index = 0;
    unsigned int nb_base = ft_strlen(base);
    	if (!check_base(base))
		return;
    if (nbr == 0)
    {
        write(1,"0",1);
        return;
    }
    if (nbr < 0)
    {
        write(1, "-", 1);
        nbr = nbr * (-1);
    }
    while(nbr != 0)
    {
        tab[index] = nbr % nb_base;
        nbr =  nbr / nb_base;
        index++;
    }
    while (index > 0)
    {
        index--;
        write(1, &base[tab[index]], 1);
    }
}