/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtakara <dtakara@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 18:29:45 by dtakara           #+#    #+#             */
/*   Updated: 2020/12/03 16:54:24 by dtakara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				diferencinha;
	unsigned int	tamanho;

	i = 0;
	tamanho = 0;
	while (s1[i] != '\0')
	{
		tamanho++;
		i++;
	}
	i = 0;
	while (i <= tamanho && i < n)
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
