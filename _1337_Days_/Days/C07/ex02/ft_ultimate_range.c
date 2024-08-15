/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maen-naj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 10:53:49 by maen-naj          #+#    #+#             */
/*   Updated: 2024/08/10 13:56:29 by maen-naj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*d;
	int	r;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	r = max - min;
	d = (int *) malloc(r * sizeof(int));
	if (d == NULL)
		return (-1);
	while (i < max - min)
	{
		d[i] = min + i;
		i++;
	}
	*range = d;
	return (r);
}
