/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maen-naj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 09:17:32 by maen-naj          #+#    #+#             */
/*   Updated: 2024/08/04 15:37:27 by maen-naj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	i = 0;
	while (base[i])
	{
		j = i + 1;
		while ((base[i] != base[j]) && base[j])
			j++;
		if (base[i] == base[j])
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	tab[33];
	unsigned int	index;
	unsigned int	nb_base;
	unsigned int	a;

	index = 0;
	nb_base = ft_strlen(base);
	a = nbr;
	if (!check_base(base))
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		a = a * (-1);
	}
	if (a == 0)
		ft_putchar(base[a % nb_base]);
	while (a > 0)
	{
		tab [index++] = a % nb_base;
		a = a / nb_base;
	}
	while (index-- > 0)
		write(1, &base[tab[index]], 1);
}
