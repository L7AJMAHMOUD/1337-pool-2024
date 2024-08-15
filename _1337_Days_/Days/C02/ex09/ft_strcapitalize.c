/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maen-naj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 11:06:11 by maen-naj          #+#    #+#             */
/*   Updated: 2024/07/29 11:12:08 by maen-naj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (65 <= str[i] && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	k;

	i = 0;
	k = 1;
	ft_strlowcase(str);
	while (str[i])
	{
		if ('a' <= str[i] && str[i] <= 'z')
		{
			if (k == 1)
			{
				str[i] = str[i] - 32;
				k = 0;
			}
		}
		else if ('0' <= str[i] && str[i] <= '9')
			k = 0;
		else
			k = 1;
		i++;
	}
	return (str);
}
