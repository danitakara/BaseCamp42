/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtakara <dtakara@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 17:43:53 by dtakara           #+#    #+#             */
/*   Updated: 2020/12/04 20:17:29 by dtakara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int		main(int argc, char **argv)
{
	while (argc > 1) //o contrário
	{
		ft_putstr(argv[argc - 1]); //pegar o ultimo argumento q sera o número do index
		write(1, "\n", 1);
		argc--;
	}
	return (0);
}
