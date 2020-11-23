/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtakara <dtakara@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 23:26:05 by dtakara           #+#    #+#             */
/*   Updated: 2020/11/22 23:29:51 by dtakara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	ft_column(int x, char *a, char *b, char *c)
{
	if (x > 0)
	{
		ft_putchar(*a);
		x--;
	}
	while (x > 1)
	{
		ft_putchar(*b);
		x--;
	}
	if (x == 1)
	{
		ft_putchar(*c);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (y > 0)
	{
		ft_column(x, "/", "*", "\\");
		y--;
	}
	while (y > 1)
	{
		ft_column(x, "*", " ", "*");
		y--;
	}
	if (y == 1)
	{
		ft_column(x, "\\", "*", "/");
	}
}
