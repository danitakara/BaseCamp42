/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtakara <dtakara@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 22:32:57 by dtakara           #+#    #+#             */
/*   Updated: 2020/11/27 01:52:58 by dtakara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void) //título da função
{ //código da função até a última chave
	char c; //declaração da variável c

	c = 'z'; //atribuição de valor
	while(c >= 'a') //condição da função
	{ //preciso abrir outra chave para colocar o que a condição while vai executar
		write (1, &c, 1); //isso é a função
		c--; //c = c-1 -> atribuição de valor para o c após cada vez que executar a condição do while que culmina na execução do write
	} //fecha a condição da função while
} //fecha a função ft_print_reverse_alphabet

//se obedecer à condição while, eu realizo o write