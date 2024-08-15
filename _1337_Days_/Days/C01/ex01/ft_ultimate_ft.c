/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maen-naj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 08:58:34 by maen-naj          #+#    #+#             */
/*   Updated: 2024/07/27 08:59:58 by maen-naj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void	ft_ultimate_ft(int ***nbr)
{
	***nbr = 42;
}
int main()
{
	int a;
	int *z1 = &a;
	int **z2 = &z1;
	int ***z3 = &z2;

	ft_ultimate_ft(&z2);

	printf("%p\n",&a);
	printf("%p\n",z1);
	printf("%p\n",*z2);
	printf("%p\n",**z3);

}