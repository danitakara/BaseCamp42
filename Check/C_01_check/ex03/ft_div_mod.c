/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtakara <dtakara@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 12:27:23 by tde-cama          #+#    #+#             */
/*   Updated: 2020/12/02 16:12:48 by dtakara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{
    int a;
    int b;
    int div;
    int mod;
    
    a=4;
    b=2;
    ft_div_mod(a, b, &div, &mod);
    printf ("%d\n", a);
    printf ("%d\n", b);
    printf ("%d\n", div);
    printf ("%d\n", mod);
}