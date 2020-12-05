/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtakara <dtakara@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 18:41:08 by llemes-f          #+#    #+#             */
/*   Updated: 2020/11/28 10:35:14 by dtakara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

int	main(void)
{
	int a;
	a = 1;
	int b;
	b = 2;
	ft_swap (&a, &b);
	printf ("%d %d", a, b);
}
