/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtakara <dtakara@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 14:33:35 by dtakara           #+#    #+#             */
/*   Updated: 2020/12/04 17:26:09 by dtakara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		check_if_negative(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-", 1);
		write(1, "2", 1);
		nb = 147483648;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * (-1);
	}
	return (nb);
}

int		transform_to_string(int nb, char *str)
{
	char	a;
	int		b;
	int		x;
	int		i;

	i = 0;
	b = nb;
	x = 1000000000;
	while (i < 10)
	{
		a = (b / x) + 48;
		str[i] = a;
		i++;
		b = b % x;
		x = x / 10;
	}
	return (i);
}

void	print(char *str, int nb_char)
{
	int j;
	int check;

	j = 0;
	check = 0;
	while (j < nb_char)
	{
		check = check + str[j] - '0';
		if (check > 0)
		{
			write(1, &str[j], 1);
		}
		j++;
	}
	if (check == 0)
	{
		write(1, "0", 1);
	}
}

void	ft_putnbr(int nb)
{
	int		nb_char;
	char	str[10];

	nb = check_if_negative(nb);
	nb_char = transform_to_string(nb, str);
	print(str, nb_char);
}
