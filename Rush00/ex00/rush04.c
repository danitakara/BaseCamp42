/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtakara <dtakara@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 02:55:04 by dtakara           #+#    #+#             */
/*   Updated: 2020/11/22 14:35:31 by dtakara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	coluna(int x, char *a, char *b, char *c)
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
		coluna(x, "A", "B", "C");
		y--;
	}
	while (y > 1)
	{
		coluna(x, "B", " ", "B");
		y--;
	}
	if (y == 1)
	{
		coluna(x, "C", "B", "A");
	}
}
