/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maen-naj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 10:24:11 by maen-naj          #+#    #+#             */
/*   Updated: 2024/08/10 10:42:27 by maen-naj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*d;
	int	r;

	i = 0;
	if (min >= max)
		return (NULL);
	r = max - min;
	d = (int *)malloc(r * sizeof(int));
	if (d == NULL)
		return (0);
	while (i < max - min)
	{
		d[i] = min + i;
		i++;
	}
	return (d);
}
