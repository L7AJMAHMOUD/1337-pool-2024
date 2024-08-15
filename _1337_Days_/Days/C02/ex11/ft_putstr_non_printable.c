/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maen-naj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 12:39:37 by maen-naj          #+#    #+#             */
/*   Updated: 2024/07/30 15:22:28 by maen-naj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	pchar(char x)
{
	write(1, &x, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (0 <= str[i] && str[i] <= 31 || str[i] == 127)
		{
			pchar('\\');
			pchar("0123456789abcdef"[str[i] / 16]);
			pchar("0123456789abcdef"[str[i] % 16]);
		}
		else
		{
			pchar(str[i]);
		}
		i++;
	}
}
