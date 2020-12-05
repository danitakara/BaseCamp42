/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtakara <dtakara@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 23:42:21 by llemes-f          #+#    #+#             */
/*   Updated: 2020/11/28 10:55:08 by dtakara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int aux_tab;

	i = 0;
	aux_tab = 0;
	while (i < (size / 2))
	{
		aux_tab = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = aux_tab;
		i++;
	}
}

int	main(void)
{
    int size = 5;
    int tab[5] = {0,1,2,3,4};    
    
    ft_rev_int_tab(&tab[0], size);
    for (int i = 0; i < size; i++)
    {
        printf("%d, ", tab[i]);
    }
    printf("\n");
}