#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n < 0)
	{
		n = -n;
		ft_putchar('-');
	}
	if (n >= 10)
		ft_putnbr(n / 10);
	ft_putchar((n % 10) + '0');
}

int	ft_atoi(const char *str)
{
    int i = 0;
    int r = 1;
    int m = 0;

    while(9 <= str[i] && str[i] <= 13 || str[i] == 32)
    {
        i++;
    }
    if(str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
        {
            r = -1;
        }
        i++;
    }
    while('0' <= str[i] && str[i] <= '9')
    {
        m = m * 10 + str[i] - '0';
        i++;
    }
    m = m * r;
    return(m);
}

int		ft_is_prime( int nb )
{
	int i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i <= (nb / i))
	{
		if ((nb % i) == 0) 
			return (0);
		i++;
	}
	return (1);
}

int		add_prime_sum(int nb)

{
	int		sum;

	sum = 0;
	while (nb > 1)
	{
		if (ft_is_prime(nb))
			sum += nb;
		nb--;
	}
	return (sum);
}

int		main(int argc, char *argv[])
{
	if (argc == 2)
		ft_putnbr(add_prime_sum(ft_atoi(argv[1])));
	else
		ft_putchar('0');
	ft_putchar('\n');
	return (0);
}