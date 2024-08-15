/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maen-naj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 11:36:40 by maen-naj          #+#    #+#             */
/*   Updated: 2024/08/14 15:57:43 by maen-naj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

int	ft_abs(int value)
{
	if (value < 0)
		return (-value);
	else
		return (value);
}
# define ABS(value) ft_abs(value)
#endif
