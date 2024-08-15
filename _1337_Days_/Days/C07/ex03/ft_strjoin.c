/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maen-naj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 13:57:00 by maen-naj          #+#    #+#             */
/*   Updated: 2024/08/11 11:19:58 by maen-naj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int i;

    i = 0;
	while (str[i])
    {
		i++;
    }
	return (i);
}
char *ft_strjoin(int size, char **strs, char *sep) 
{  
    int i;
    int total;

    i = 0;
    total = 0;
    while (i < size)
    {
        total = total + ft_strlen(strs[i]);
        i++;
    }
    total = total + ft_strlen(sep) + 1;
    char *result = (char *)malloc(total);
    if (result == NULL) 
    {
        return NULL;
    }
    i = 0;
    int index = 0;
    while (i < size) 
    {
        int len = 0;
        while (strs[i][len]) 
        {
            result[index] = strs[i][len];
            len++;
            index++;
        }
        if(i < size - 1)
        {
            int s = 0;

            while(sep[s])
            {
                result[index]  = sep[s];
                index++;
                s++;
            }
        }
        i++;
    }
    result[index] = '\0';
    return result;
}
