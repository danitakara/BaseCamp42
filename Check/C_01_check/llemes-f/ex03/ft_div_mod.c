/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtakara <dtakara@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 18:51:54 by llemes-f          #+#    #+#             */
/*   Updated: 2020/11/28 10:39:44 by dtakara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main(void)
{
	int a;
	int b;
	int mod;
	int div;

	a = 1500;
	b = 1000;
	ft_div_mod(a, b, &div, &mod);
	printf("O resultado de %d / %d  = %d \n", a, b, div); 
	printf("O resultado de %d MOD %d = %d \n", a, b, mod);
}