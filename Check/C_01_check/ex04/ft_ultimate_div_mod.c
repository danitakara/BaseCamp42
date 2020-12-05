/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtakara <dtakara@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 12:55:04 by tde-cama          #+#    #+#             */
/*   Updated: 2020/12/02 16:13:30 by dtakara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int div;
	int mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

#include <stdio.h>

int main(void)
{
    int a;
    int b;
    
    a=4;
    b=2;
    printf ("%d\n", a);
    printf ("%d\n", b);
    ft_ultimate_div_mod(&a, &b);
    printf ("%d\n", a);
    printf ("%d\n", b);
}