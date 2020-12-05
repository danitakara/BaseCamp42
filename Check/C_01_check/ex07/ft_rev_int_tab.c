/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtakara <dtakara@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 14:51:09 by tde-cama          #+#    #+#             */
/*   Updated: 2020/12/02 16:15:48 by dtakara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int tmp;

	i = 0;
	while (i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = tmp;
		i++;
	}
}

#include <stdio.h>

int main(void){
    int str[5]={1,2,3,4,5};
    int i;
    
    i=0;
    while (i<5){
        printf ("%d", str[i]);
        i++;
    }
    ft_rev_int_tab(str, 5);
    i=0;
    printf ("\n");
    while (i<5){
        printf ("%d", str[i]);
        i++;
    }
    printf ("\n");
    return(0);
}