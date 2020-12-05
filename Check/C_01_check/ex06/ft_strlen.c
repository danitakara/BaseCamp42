/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtakara <dtakara@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 12:55:55 by tde-cama          #+#    #+#             */
/*   Updated: 2020/12/02 16:14:42 by dtakara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] > 0)
	{
		i++;
	}
	return (i);
}

#include <stdio.h>

int 	main(void)
{
	int n;
	char pajuba[6] = {"inhai"};
	n = ft_strlen (pajuba);
	printf("%d", n);
}