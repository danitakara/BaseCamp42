/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtakara <dtakara@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 08:57:34 by vtouffet          #+#    #+#             */
/*   Updated: 2020/11/22 14:41:44 by dtakara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

ssize_t write(int saida, const void *conteudo, size_t nbyte);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
