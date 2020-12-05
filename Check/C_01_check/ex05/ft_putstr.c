/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtakara <dtakara@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 12:55:55 by tde-cama          #+#    #+#             */
/*   Updated: 2020/12/02 16:14:05 by dtakara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] > 0)
	{
		ft_putchar(str[i]);
		i++;
	}
}

void ft_putstr(char *str);

int main(void)
{
    char str[10] = {"inhai\n"};
    ft_putstr(str);
}