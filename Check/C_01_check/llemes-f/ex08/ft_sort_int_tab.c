/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtakara <dtakara@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 02:58:15 by llemes-f          #+#    #+#             */
/*   Updated: 2020/11/28 10:56:29 by dtakara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int aux;
	int min;

	i = -1;
	aux = 0;
	while (i++ < (size - 1))
	{
		min = i;
		j = i - 1;
		while (j++ < (size - 1))
			if (tab[j] < tab[min])
				min = j;
		aux = tab[i];
		tab[i] = tab[min];
		tab[min] = aux;
	}
}

int	main(void)
{
    int tab[12] = {45,14,8,96,1,25,69,6,9,3,47,89};    
    int size = 12;
    ft_sort_int_tab(&tab[0], size);
    for (int i = 0; i < size; i++)
    {
        printf("%d, ", tab[i]);
    }
    printf("\n");
}