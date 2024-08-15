/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maen-naj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 08:48:12 by maen-naj          #+#    #+#             */
/*   Updated: 2024/07/31 08:49:50 by maen-naj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	m;

	i = 0;
	m = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[m] && m < nb)
	{
		dest[i] = src[m];
		i++;
		m++;
	}
	dest[i] = '\0';
	return (dest);
}
