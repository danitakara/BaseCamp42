/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtakara <dtakara@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 23:45:02 by dtakara           #+#    #+#             */
/*   Updated: 2020/11/28 21:34:21 by dtakara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	meinho(int a, int b, int c, int d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (a == '9' && b == '8' && c == '9' && d == '9')
	{
	}
	else
	{
		write(1, ", ", 2);
	}
}

void	somaiguala(int *x, int *y)
{
	*x = *x + 1;
	*y = '0';
}

void	enquantinho(int a, int b, int c, int d)
{
	while (a <= '9')
	{
		while (b <= '9')
		{
			while (c <= '9')
			{
				while (d <= '9')
				{
					if (c == a && d > b)
					{
						meinho(a, b, c, d);
					}
					if (c > a)
					{
						meinho(a, b, c, d);
					}
					d++;
				}
				somaiguala(&c, &d);
			}
			somaiguala(&b, &c);
		}
		somaiguala(&a, &b);
	}
}

void	ft_print_comb2(void)
{
	char a;
	char b;
	char c;
	char d;

	a = '0';
	b = '0';
	c = '0';
	d = '0';
	enquantinho(a, b, c, d);
}
