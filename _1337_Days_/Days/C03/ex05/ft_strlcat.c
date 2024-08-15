/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maen-naj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 08:51:31 by maen-naj          #+#    #+#             */
/*   Updated: 2024/08/03 12:53:02 by maen-naj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dl;
	unsigned int	sl;
	unsigned int	a;
	unsigned int	b;

	a = 0;
	b = 0;
	while (dest[b])
	{
		b++;
	}
	dl = b;
	sl = ft_strlen(src);
	if (size == 0 || size <= dl)
		return (size + sl);
	while (src[a] && a < size - dl - 1)
	{
		dest[b] = src[a];
		a++;
		b++;
	}
	dest[b] = '\0';
	return (dl + sl);
}
