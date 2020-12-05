/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtakara <dtakara@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 12:22:46 by tde-cama          #+#    #+#             */
/*   Updated: 2020/12/02 16:11:55 by dtakara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	sw;

	sw = *a;
	*a = *b;
	*b = sw;
}

#include <stdio.h>

int main(void)
{
    int a;
    int b;
    a=1;
    b=2;
    printf ("%d\n", a);
    printf ("%d\n", b);
    ft_swap(&a, &b);
    printf ("%d\n", a);
    printf ("%d\n", b);
}