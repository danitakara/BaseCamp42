/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtakara <dtakara@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 19:07:48 by llemes-f          #+#    #+#             */
/*   Updated: 2020/11/28 10:46:31 by dtakara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int aux;

	aux = *a / *b;
	*b = *a % *b;
	*a = aux;
}

int	main(void)
{
	int a;
	int b;
	
	a = 1500;
	b = 1000;
	ft_ultimate_div_mod(&a, &b);
	printf("O resultado de %d  \n", a); 
	printf("O resultado de %d  \n", b);
}