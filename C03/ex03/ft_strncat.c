/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtakara <dtakara@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 20:57:18 by dtakara           #+#    #+#             */
/*   Updated: 2020/12/02 23:05:28 by dtakara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	int i;
	unsigned int d;
	
	i = 0;
	d = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[d] != '\0' && d < nb)
	{
		dest[i] = src[d];
		d++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
