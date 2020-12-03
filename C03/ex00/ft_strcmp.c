/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtakara <dtakara@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 16:21:15 by dtakara           #+#    #+#             */
/*   Updated: 2020/12/02 19:08:13 by dtakara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int		i;
	int		diferencinha;
	int		tamanho;

	i = 0;
	tamanho = 0;
	while (s1[i] != '\0')
	{
		tamanho++;
		i++;
	}
	i = 0;

	while (i <= tamanho)
	{
		if (s1[i] != s2[i])
		{
			diferencinha = s1[i] - s2[i];
			return (diferencinha);
		}
		i++;
	}
	return (0);
}
