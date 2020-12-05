/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtakara <dtakara@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 00:55:17 by tde-cama          #+#    #+#             */
/*   Updated: 2020/12/02 16:16:15 by dtakara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int sw;
	int i;
	int n;

	n = 0;
	i = 0;
	while (n < size)
	{
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				sw = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = sw;
			}
			i++;
		}
		i = 0;
		n++;
	}
}

#include <stdio.h>

int main(void){
    int str[5]={516,557,123,489,51};
    int i;
    
    i=0;
    while (i<5){
        printf ("%d ", str[i]);
        i++;
    }
    ft_sort_int_tab(str, 5);
    i=0;
    printf ("\n");
    while (i<5){
        printf ("%d ", str[i]);
        i++;
    }
    printf ("\n");
    return(0);
}