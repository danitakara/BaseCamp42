/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtakara <dtakara@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 17:40:21 by dtakara           #+#    #+#             */
/*   Updated: 2020/12/04 20:14:25 by dtakara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str) //imprime a string
{
	while (*str) //enquanto tivr conteúdo na string, ela imprme
	{
		write(1, str, 1);
		str++;
	}
}

int		main(int argc, char **argv) //argc argumento		argv conteúdo dos argumentos
{
	int	i;

	i = 1;	//pular o nome do programa
	while (i < argc) //realizar até cmpletar o número de argumento que chegou
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
