/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtakara <dtakara@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 12:19:11 by tde-cama          #+#    #+#             */
/*   Updated: 2020/12/02 16:11:18 by dtakara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int n;
	int *npr1;
	int **npr2;
	int ***npr3;
	int ****npr4;
	int *****npr5;
	int ******npr6;
	int *******npr7;
	int ********npr8;
	int *********npr9;

	npr1 = &n;
	npr2 = &npr1;
	npr3 = &npr2;
	npr4 = &npr3;
	npr5 = &npr4;
	npr6 = &npr5;
	npr7 = &npr6;
	npr8 = &npr7;
	npr9 = &npr8;
	ft_ultimate_ft(npr9);
	printf("%d\n", n);
}