/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtakara <dtakara@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 17:54:07 by llemes-f          #+#    #+#             */
/*   Updated: 2020/11/28 10:29:04 by dtakara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int	main(void)
{
	int n;
	int *npr;
	int **npr2;
	int ***npr3;
	int ****npr4;
	int *****npr5;
	int ******npr6;
	int *******npr7;
	int ********npr8;
	int *********npr9;

	npr = &n;
	npr2 = &npr;
	npr3 = &npr2;
	npr4 = &npr3;
	npr5 = &npr4;
	npr6 = &npr5;
	npr7 = &npr6;
	npr8 = &npr7;
	npr9 = &npr8;
	ft_ultimate_ft(npr9);
	printf("N igual %d", n);
}
