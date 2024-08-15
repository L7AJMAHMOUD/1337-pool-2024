/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maen-naj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 18:33:20 by maen-naj          #+#    #+#             */
/*   Updated: 2024/07/23 18:38:34 by maen-naj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ptchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ptchar(a / 10 + 48);
			ptchar(a % 10 + 48);
			ptchar(' ');
			ptchar(b / 10 + 48);
			ptchar(b % 10 + 48);
			if (a != 98)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
